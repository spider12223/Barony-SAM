/*-------------------------------------------------------------------------------

	BARONY
	File: actladder.cpp
	Desc: behavior function for ladders

	Copyright 2013-2016 (c) Turning Wheel LLC, all rights reserved.
	See LICENSE for details.

-------------------------------------------------------------------------------*/

#include "main.hpp"
#include "game.hpp"
#include "stat.hpp"
#include "engine/audio/sound.hpp"
#include "entity.hpp"
#include "scores.hpp"
#include "net.hpp"
#include "collision.hpp"
#include "player.hpp"
#include "sam_lua_runtime.hpp"
#include "sam_js_runtime.hpp" // S.A.M scripting hooks

/*-------------------------------------------------------------------------------

	act*

	The following function describes an entity behavior. The function
	takes a pointer to the entity that uses it as an argument.

-------------------------------------------------------------------------------*/

void actTeleporter(Entity* my)
{
	if ( !my )
	{
		return;
	}

	my->actTeleporter();
}

void Entity::actTeleporter()
{
	int i;

	if ( this->ticks == 1 )
	{
		createWorldUITooltip();
	}

	if ( teleporterDuration > 0 && multiplayer != CLIENT )
	{
		--teleporterDuration;
		if ( teleporterDuration <= 0 )
		{
			this->removeLightField();
			list_RemoveNode(this->mynode);
			return;
		}
	}

#ifdef USE_FMOD
	if ( teleporterAmbience == 0 )
	{
		teleporterAmbience--;
		stopEntitySound();
		entity_sound = playSoundEntityLocal(this, 149, 64);
	}
	if ( entity_sound )
	{
		bool playing = false;
		entity_sound->isPlaying(&playing);
		if ( !playing )
		{
			entity_sound = nullptr;
		}
	}
#else
	teleporterAmbience--;
	if ( teleporterAmbience <= 0 )
	{
		teleporterAmbience = TICKS_PER_SECOND * 30;
		playSoundEntityLocal(this, 149, 64);
	}
#endif

	// use teleporter
	if ( multiplayer != CLIENT )
	{
		if ( this->isInteractWithMonster() )
		{
			Entity* monsterInteracting = uidToEntity(this->interactedByMonster);
			if ( monsterInteracting )
			{
				if ( teleporterType == 3 )
				{
					if ( monsterInteracting->teleport(teleporterX, teleporterY) )
					{
						if ( Entity* caster = uidToEntity(this->parent) )
						{
							if ( auto hitprops = getParticleEmitterHitProps(this->getUID(), this) )
							{
								if ( hitprops->hits == 0 )
								{
									magicOnSpellCastEvent(caster, caster, nullptr, SPELL_TUNNEL, spell_t::SPELL_LEVEL_EVENT_DEFAULT, 1);
									++hitprops->hits;
								}
							}
						}
					}
				}
				else
				{
					monsterInteracting->teleporterMove(teleporterX, teleporterY, teleporterType);
				}
				this->clearMonsterInteract();
				return;
			}
			this->clearMonsterInteract();
		}
		for ( i = 0; i < MAXPLAYERS; i++ )
		{
			if ( selectedEntity[i] == this || client_selected[i] == this )
			{
				if ( inrange[i] && Player::getPlayerInteractEntity(i) )
				{
					switch ( teleporterType )
					{
						case 0:
							messagePlayer(i, MESSAGE_INTERACTION, Language::get(2378));
							break;
						case 1:
							messagePlayer(i, MESSAGE_INTERACTION, Language::get(506));
							break;
						case 2:
							messagePlayer(i, MESSAGE_INTERACTION, Language::get(510));
							break;
						default:
							break;
					}
					if ( teleporterType == 3 )
					{
						if ( Player::getPlayerInteractEntity(i)->teleport(teleporterX, teleporterY) )
						{
							messagePlayer(i, MESSAGE_INTERACTION, Language::get(6696));
							if ( Entity* caster = uidToEntity(this->parent) )
							{
								if ( auto hitprops = getParticleEmitterHitProps(this->getUID(), this) )
								{
									if ( hitprops->hits == 0 )
									{
										magicOnSpellCastEvent(caster, caster, nullptr, SPELL_TUNNEL, spell_t::SPELL_LEVEL_EVENT_DEFAULT, 1);
										++hitprops->hits;
									}
								}
							}
						}
					}
					else
					{
						Player::getPlayerInteractEntity(i)->teleporterMove(teleporterX, teleporterY, teleporterType);
					}

					// S.A.M scripting hook: a player used a teleporter (host-authoritative;
					// actTeleporter's interact loop is server-side). Covers both the tunnel
					// spell teleporter (type 3) and normal pads. dest_x/dest_y are the target
					// tile the player warped to on the same floor.
					{
						SAMLua::Event ev;
						ev.setName("world.on_teleport").i("player", i)
							.i("teleporter", (long long)this->getUID()).i("type", (long long)teleporterType)
							.i("dest_x", (long long)teleporterX).i("dest_y", (long long)teleporterY);
						SAMLua::dispatchEvent(ev);

						SAMJs::Event jsev;
						jsev.setName("world.on_teleport").i("player", i)
							.i("teleporter", (long long)this->getUID()).i("type", (long long)teleporterType)
							.i("dest_x", (long long)teleporterX).i("dest_y", (long long)teleporterY);
						SAMJs::dispatchEvent(jsev);
					}

					return;
				}
			}
		}
	}

	if ( teleporterType == 2 )
	{
		if ( !light )
		{
			light = addLight(x / 16, y / 16, "portal_purple");
		}
		yaw += 0.01; // rotate slowly on my axis
		sprite = 620;
		if ( ((this->ticks / 20 ) % 4) > 0 )
		{
			sprite = 992 + ((this->ticks / 20) % 4) - 1; // animate through 992, 993, 994
		}
	}
	else if ( teleporterType == 3 )
	{
		if ( !light )
		{
			light = addLight(x / 16, y / 16, "portal_purple");
		}

		if ( ::ticks % 4 == 0 )
		{
			sprite = teleporterStartFrame + teleporterCurrentFrame;
			++teleporterCurrentFrame;
			if ( teleporterCurrentFrame >= teleporterNumFrames )
			{
				teleporterCurrentFrame = 0;
			}
		}

		real_t increment = std::max(.05, (1.0 - scalex)) / 3.0;
		scalex = std::min(1.0, scalex + increment);
		scaley = std::min(1.0, scaley + increment);
		scalez = std::min(1.0, scalez + increment);
	}
}
