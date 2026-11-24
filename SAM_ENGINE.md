# Barony with the S.A.M Framework engine hooks

This is Barony 5.0.2 source with the changes the [S.A.M Framework](https://github.com/spider12223/SAM-Framework)
makes to the engine, on top of the original Barony git history.

## Branches and tags

| name | what it is |
|---|---|
| `upstream-base` | upstream Barony commit `962a5ce3`, the point S.A.M forked from (4 commits after `v5.0.2`) |
| `sam-framework` | `upstream-base` plus every S.A.M engine change |
| `sam-v3.13.0` | the tip of `sam-framework`, matching S.A.M Framework v3.13.0 (commit `9c57276`) |
| `sam-v3.12.2` | the engine as of S.A.M Framework v3.12.2 (commit `a66955b`) |
| `sam-v3.12.1` | the engine as of S.A.M Framework v3.12.1 (commit `4b93e60`) |
| `sam-v3.7.0` | the engine as of S.A.M Framework v3.7.0 (commit `ed748a7`) |
| `sam-v3.4.0` | the engine as of S.A.M Framework v3.4.0 (commit `9c192af`) |

To see exactly what S.A.M changed in the engine:

```
git diff upstream-base sam-framework
```

The first five S.A.M commits (framework v1.2.x) are separate; the rest of the engine work up to
v3.4.0 is one commit, `S.A.M Framework v3.4.0: engine integration`, v3.5.0 to v3.7.0 is one more,
`S.A.M Framework v3.7.0: engine changes from v3.5.0 to v3.7.0`, v3.8.0 to v3.12.1 is one more,
`S.A.M Framework v3.12.1: engine changes from v3.8.0 to v3.12.1`, v3.12.2 is one more,
`S.A.M Framework v3.12.2: engine changes from v3.12.1 to v3.12.2`, and v3.13.0 is one more,
`S.A.M Framework v3.13.0: engine changes from v3.12.2 to v3.13.0`. Build a `sam-vX.Y.Z` tag against the
SAM-Framework tag `vX.Y.Z` with the same number.

## Finding the hooks

The framework itself is not in this repo. The engine calls into it, and most call sites carry a
comment starting with `S.A.M`. With no mod loaded each one does nothing, including on the wire, so
a stock 5.0.2 client can still join a game hosted by this build.

## Party members and lobby cards (unreleased)

The engine side of `sam_party_*` and `sam_lobby_*` (see the framework's `docs/party-and-lobby.md`).
Each call site is marked `S.A.M` and does nothing unless a mod uses these features.

| file | call | what it is for |
|---|---|---|
| `entity.cpp` | `SAMParty::allegiance` (in `checkEnemy` and `checkFriend`) | a party member is a friend of players and their followers |
| `entity.cpp` | `SAMParty::balancePlayers`, `levelUpLikePlayer` | the run's party count in the balance loop; a class's level-up |
| `maps.cpp`, `actmonster.cpp` | `SAMParty::balancePlayers`, `runDifficultyCount` | the same count for monster numbers and the Devil |
| `actmonster.cpp` | `SAMParty::onDeath`, `think`, `isMember` | death and respawn before the gear drops; a member walks to an exit; a member is not a recruit |
| `actladder.cpp` | `SAMParty::exitsMayClose`, `exitUser` | an exit waits for the party; a member can take the party through |
| `game.cpp` | `SAMParty::respawnFallen`, `SAMParty::tick` | the fallen come back on a new floor; a carrier that vanished ends the run |
| `interface/interface.cpp` | `SAMParty::takesOrdersFreely` | no leadership gate for a member |
| `actplayer.cpp` | `SAMParty::partyCarriesOn`, `samPartyWiped` | with a `carry_on` member standing the save, the game-over music and the ghost rules follow the run; the real end does them once |
| `ui/MainMenu.cpp` | `SAMParty::partyCarriesOn`, `writeStartTail`, `readStartTail`, `beginRun`, `lobbyOpened` | the game-over window; the party count rides after the start packet's 17 bytes; the lobby hooks |
| `ui/MainMenu.cpp`, `menu.cpp` | `SAMLobby::*` | cards on empty player slots, the `SAML` packet, the client hello after the host's `SAMF` |
| `net.cpp` | `SAMParty::readStartTail` | a client reads the party count before any map is built |

The party's net ops are in `SAMNet::Op::PartyFirst` (104..119).

## Building

The build expects the framework as a sibling folder named `SAM-Framework`:

```
workspace/
  Barony/          this repo
  SAM-Framework/   https://github.com/spider12223/SAM-Framework  (tag v3.13.0)
```

`CMakeLists.txt` and `src/CMakeLists.txt` add `../SAM-Framework/framework` to the include path and
compile its sources into the game. Otherwise build as upstream does (see `INSTALL.md`). Game
data, FMOD and the Steamworks SDK are not part of this repo.

## Licence

`LICENSE.txt` is unchanged: the Barony Open Source License (BSD 2-Clause).

## Gear on allies (unreleased)

The engine side of `sam_monster_*`, `sam_give_item_to_ally` and `sam_take_item_from_ally` (see the framework's `docs/ally-items.md`).
The call site is marked `S.A.M` and does nothing unless a mod moves an item.

| file | call | what it is for |
|---|---|---|
| `game.cpp` | `SAMAllyItems::tick` | an item move between a player and an ally waits for the next tick, then finishes and fires its event |
