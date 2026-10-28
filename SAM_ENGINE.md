# Barony with the S.A.M Framework engine hooks

This is Barony 5.0.2 source with the changes the [S.A.M Framework](https://github.com/spider12223/SAM-Framework)
makes to the engine, on top of the original Barony git history.

## Branches and tags

| name | what it is |
|---|---|
| `upstream-base` | upstream Barony commit `962a5ce3`, the point S.A.M forked from (4 commits after `v5.0.2`) |
| `sam-framework` | `upstream-base` plus every S.A.M engine change |
| `sam-v3.7.0` | the tip of `sam-framework`, matching S.A.M Framework v3.7.0 (commit `ed748a7`) |
| `sam-v3.4.0` | the engine as of S.A.M Framework v3.4.0 (commit `9c192af`) |

To see exactly what S.A.M changed in the engine:

```
git diff upstream-base sam-framework
```

The first five S.A.M commits (framework v1.2.x) are separate; the rest of the engine work up to
v3.4.0 is one commit, `S.A.M Framework v3.4.0: engine integration`, and v3.5.0 to v3.7.0 is one more,
`S.A.M Framework v3.7.0: engine changes from v3.5.0 to v3.7.0`. Build a `sam-vX.Y.Z` tag against the
SAM-Framework tag `vX.Y.Z` with the same number.

## Finding the hooks

The framework itself is not in this repo. The engine calls into it, and most call sites carry a
comment starting with `S.A.M`. With no mod loaded each one does nothing, including on the wire, so
a stock 5.0.2 client can still join a game hosted by this build.

## Building

The build expects the framework as a sibling folder named `SAM-Framework`:

```
workspace/
  Barony/          this repo
  SAM-Framework/   https://github.com/spider12223/SAM-Framework  (tag v3.7.0)
```

`CMakeLists.txt` and `src/CMakeLists.txt` add `../SAM-Framework/framework` to the include path and
compile its sources into the game. Otherwise build as upstream does (see `INSTALL.md`). Game
data, FMOD and the Steamworks SDK are not part of this repo.

## Licence

`LICENSE.txt` is unchanged: the Barony Open Source License (BSD 2-Clause).
