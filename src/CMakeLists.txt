list(APPEND GAME_SOURCES
	"${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/init.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/collision.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/light.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/maps.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/cursors.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/draw.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/opengl.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/objects.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/list.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/files.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/items.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/paths.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/charclass.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/net.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/game.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/stat.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/acttorch.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actplayer.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actmonster.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actitem.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/acthudweapon.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actgold.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actgib.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actgeneral.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actdoor.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actladder.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/input.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/item_usage_funcs.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/entity.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/messages.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actflame.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actcampfire.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actfountain.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actsink.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_rat.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_goblin.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_slime.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_human.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_scorpion.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_succubus.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_troll.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_shopkeeper.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_skeleton.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_minotaur.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_ghoul.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_demon.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_spider.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_lich.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_imp.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_gnome.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_devil.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_automaton.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_cockatrice.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_crystalgolem.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_goatman.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_incubus.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_insectoid.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_kobold.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_lichfire.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_lichice.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_scarab.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_sentrybot.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_shadow.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_vampire.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_mimic.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_bugbear.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_bat.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/shops.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/mechanisms.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actgate.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actchest.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actsprite.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/menu.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/savepng.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actarrow.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actarrowtrap.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actboulder.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actheadstone.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actthrown.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actbeartrap.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actspeartrap.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actwallbuster.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/book.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/init_game.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/prng.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/scores.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/steam.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/hash.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/player.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/entity_shared.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/stat_shared.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/item_tool.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actsummontrap.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actpowercrystal.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_shared.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actpedestal.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actteleporter.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/actmagictrap.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/steam_shared.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/mod_tools.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/json.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/eos.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/mod_tools.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/lobbies.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/shader.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/playfab.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_d.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_m.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_s.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_g.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_summons.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_moth.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/monster_duck.cpp"
	# S.A.M Framework (Support All Mods)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_logger.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_errors.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_workshop.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_loader.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_classes.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_items.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_effects.cpp" # custom status effects — game only (engine hooks are #ifndef EDITOR)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_hud.cpp" # script-driven HUD layer — game only (needs the UI root Frame)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_images.cpp" # mod-supplied pictures — game only (needs Image + the UI root Frame)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_ui.cpp" # interactive mod panels - game only (needs Frame/Button)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_catalog.cpp" # read the game content registries - game only
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_rooms.cpp" # prefab room injection into vanilla levelsets
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_world.cpp" # world queries, terrain and mechanisms
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_rules.cpp" # stat modifiers, effect immunity, the XP curve
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_speed.cpp" # sam_set_game_speed: the simulation clock, singleplayer only
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_loot.cpp" # loot pool control and the generation events (world.on_before_loot_roll and friends)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_settings.cpp" # mod actions in the Bindings page, mod settings in the General tab
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_camera.cpp" # script camera control — game only (needs cameras[] and the renderer)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_combat.cpp" # species damage resistance + on_damage_multiplier — game only (entity.cpp is not in EDITOR_SOURCES)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_world_state.cpp" # per-character mod state inside the savegame
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_event.cpp" # one event, fired once, to both runtimes
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_races.cpp" # custom playable races — game only
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_sounds.cpp" # custom sounds — game only (FMOD createSound)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_music.cpp" # mod music: tracks, vanilla replacements, floor rules -- game only
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_recipes.cpp" # tinkering recipes — game only (needs the item table)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_workbench.cpp" # built-in Hunter's Workbench + embedded art — game only
	# v0.7.0 F5 monster stat overrides — both builds (stat_shared.cpp calls apply(), and
	# stat_shared.cpp is in EDITOR_SOURCES too), so mirror this into EDITOR_SOURCES below.
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_monster_patches.cpp"
	# game only — editor has no networking / no PhysFS data patching / no save backup (do NOT add to EDITOR_SOURCES)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_sync.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_net.cpp" # multiplayer contracts + the ordered SAMC/SAMQ channels
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_mp_inventory.cpp" # host mirror of remote backpacks + spell lists
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_mp_input.cpp" # keys, actions and client-raised events in multiplayer
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_mp_entities.cpp" # replication of script-made entities and world edits
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_patcher.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_monsters.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_spells.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_models.cpp" # custom .vox models — game only (needs GL: generateVBOs)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_bodies.cpp" # custom creature body models — game only (draw-site override)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_backup.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_test.cpp" # -samtest: run a mod's own tests unattended -- game only (needs Mods::loadMods and mainloop)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_lua_runtime.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_js_runtime.cpp"
)

# S.A.M Lua 5.4 runtime — vendored C core (game only). Compiled straight into
# GAME_SOURCES; this build has no PCH and no /WX, so C sources are safe here.
# Exclude the two standalone CLI mains (lua.c interpreter, luac.c compiler),
# which each define their own main().
file(GLOB SAM_LUA54_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/lua54/*.c")
list(FILTER SAM_LUA54_SOURCES EXCLUDE REGEX "/(lua|luac)[.]c$")
list(APPEND GAME_SOURCES ${SAM_LUA54_SOURCES})

# S.A.M JavaScript/TypeScript runtime — vendored quickjs-ng amalgam (game only).
# Its C11 + c11atomics flags are set globally on CMAKE_C_FLAGS in the top-level
# CMakeLists (per-file COMPILE_FLAGS don't cross the src/ -> barony-target
# directory-scope boundary).
list(APPEND GAME_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/quickjs/quickjs-amalgam.c")

list(APPEND EDITOR_SOURCES
	"${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/init.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/light.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/buttons.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/cursors.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/draw.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/opengl.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/objects.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/entity_editor.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/input.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/list.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/hash.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/files.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/editor.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/entity_shared.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/stat_editor.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/stat_shared.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/items_editor.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/steam_shared.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/json.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/eos_editor.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/mod_tools.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/prng.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/shader.cpp"
	# S.A.M Framework (Support All Mods)
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_logger.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_errors.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_workshop.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_loader.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_classes.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_items.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../SAM-Framework/framework/sam_monster_patches.cpp" # v0.7.0 F5 (stat_shared.cpp calls it)
)

add_subdirectory(magic)
add_subdirectory(interface)
add_subdirectory(ui)
add_subdirectory(engine)
add_subdirectory(imgui)

set(GAME_SOURCES ${GAME_SOURCES} PARENT_SCOPE)
set(EDITOR_SOURCES ${EDITOR_SOURCES} PARENT_SCOPE)
