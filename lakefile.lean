import Lake
open Lake DSL

package eval_ModelTheory where
  srcDir := "src"

require mathlib from git
  "https://github.com/leanprover-community/mathlib4.git" @ "v4.17.0"

require VerifiedAgora from git
  "https://github.com/stagiralabs/VerifiedAgora.git" @ "v4.17.0"

@[default_target]
lean_lib «Mathlib.ModelTheory» where
  roots := #[`Mathlib.ModelTheory]
  globs := #[.submodules `Mathlib.ModelTheory]
