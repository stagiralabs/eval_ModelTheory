import VerifiedAgora.tagger
/-
Copyright (c) 2022 Aaron Anderson. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Aaron Anderson
-/
import Mathlib.Data.Fintype.Basic
import Mathlib.ModelTheory.Substructures

/-!
# Elementary Maps Between First-Order Structures

## Main Definitions

- A `FirstOrder.Language.ElementaryEmbedding` is an embedding that commutes with the
  realizations of formulas.
- The `FirstOrder.Language.elementaryDiagram` of a structure is the set of all sentences with
  parameters that the structure satisfies.
- `FirstOrder.Language.ElementaryEmbedding.ofModelsElementaryDiagram` is the canonical
  elementary embedding of any structure into a model of its elementary diagram.

## Main Results

- The Tarski-Vaught Test for embeddings: `FirstOrder.Language.Embedding.isElementary_of_exists`
  gives a simple criterion for an embedding to be elementary.
-/


open FirstOrder

namespace FirstOrder

namespace Language

open Structure

variable (L : Language) (M : Type*) (N : Type*) {P : Type*} {Q : Type*}
variable [L.Structure M] [L.Structure N] [L.Structure P] [L.Structure Q]

/-- An elementary embedding of first-order structures is an embedding that commutes with the
  realizations of formulas. -/
structure ElementaryEmbedding where
  toFun : M → N
  -- Porting note:
  -- The autoparam here used to be `obviously`.
  -- We have replaced it with `aesop` but that isn't currently sufficient.
  -- See https://leanprover.zulipchat.com/#narrow/stream/287929-mathlib4/topic/Aesop.20and.20cases
  -- If that can be improved, we should remove the proofs below.
  map_formula' :
    ∀ ⦃n⦄ (φ : L.Formula (Fin n)) (x : Fin n → M), φ.Realize (toFun ∘ x) ↔ φ.Realize x := by
    aesop

@[inherit_doc FirstOrder.Language.ElementaryEmbedding]
scoped[FirstOrder] notation:25 A " ↪ₑ[" L "] " B => FirstOrder.Language.ElementaryEmbedding L A B

variable {L} {M} {N}

namespace ElementaryEmbedding

attribute [coe] toFun

instance instFunLike : FunLike (M ↪ₑ[L] N) M N where
  coe f := f.toFun
  coe_injective' f g h := by
    cases f
    cases g
    simp only [ElementaryEmbedding.mk.injEq]
    ext x
    exact funext_iff.1 h x

@[target, simp]
theorem map_boundedFormula (f : M ↪ₑ[L] N) {α : Type*} {n : ℕ} (φ : L.BoundedFormula α n)
    (v : α → M) (xs : Fin n → M) : φ.Realize (f ∘ v) (f ∘ xs) ↔ φ.Realize v xs := by sorry

@[simp]
theorem map_formula (f : M ↪ₑ[L] N) {α : Type*} (φ : L.Formula α) (x : α → M) :
    φ.Realize (f ∘ x) ↔ φ.Realize x := by
  rw [Formula.Realize, Formula.Realize, ← f.map_boundedFormula, Unique.eq_default (f ∘ default)]

theorem map_sentence (f : M ↪ₑ[L] N) (φ : L.Sentence) : M ⊨ φ ↔ N ⊨ φ := by
  rw [Sentence.Realize, Sentence.Realize, ← f.map_formula, Unique.eq_default (f ∘ default)]

@[target]
theorem theory_model_iff (f : M ↪ₑ[L] N) (T : L.Theory) : M ⊨ T ↔ N ⊨ T := by sorry

@[target]
theorem elementarilyEquivalent (f : M ↪ₑ[L] N) : M ≅[L] N := by sorry

@[target, simp]
theorem injective (φ : M ↪ₑ[L] N) : Function.Injective φ := by sorry

instance embeddingLike : EmbeddingLike (M ↪ₑ[L] N) M N :=
  { show FunLike (M ↪ₑ[L] N) M N from inferInstance with injective' := injective }

@[target, simp]
theorem map_fun (φ : M ↪ₑ[L] N) {n : ℕ} (f : L.Functions n) (x : Fin n → M) :
    φ (funMap f x) = funMap f (φ ∘ x) := by sorry

@[target, simp]
theorem map_rel (φ : M ↪ₑ[L] N) {n : ℕ} (r : L.Relations n) (x : Fin n → M) :
    RelMap r (φ ∘ x) ↔ RelMap r x := by sorry

instance strongHomClass : StrongHomClass L (M ↪ₑ[L] N) M N where
  map_fun := map_fun
  map_rel := map_rel

@[simp]
theorem map_constants (φ : M ↪ₑ[L] N) (c : L.Constants) : φ c = c :=
  HomClass.map_constants φ c

/-- An elementary embedding is also a first-order embedding. -/
def toEmbedding (f : M ↪ₑ[L] N) : M ↪[L] N where
  toFun := f
  inj' := f.injective
  map_fun' {_} f x := by simp
  map_rel' {_} R x := by simp

/-- An elementary embedding is also a first-order homomorphism. -/
def toHom (f : M ↪ₑ[L] N) : M →[L] N where
  toFun := f
  map_fun' {_} f x := by simp
  map_rel' {_} R x := by simp

@[simp]
theorem toEmbedding_toHom (f : M ↪ₑ[L] N) : f.toEmbedding.toHom = f.toHom :=
  rfl

@[simp]
theorem coe_toHom {f : M ↪ₑ[L] N} : (f.toHom : M → N) = (f : M → N) :=
  rfl

@[target, simp]
theorem coe_toEmbedding (f : M ↪ₑ[L] N) : (f.toEmbedding : M → N) = (f : M → N) := by sorry

@[target]
theorem coe_injective : @Function.Injective (M ↪ₑ[L] N) (M → N) (↑) := by sorry

@[target, ext]
theorem ext ⦃f g : M ↪ₑ[L] N⦄ (h : ∀ x, f x = g x) : f = g := by sorry

variable (L) (M)

/-- The identity elementary embedding from a structure to itself -/
@[refl]
def refl : M ↪ₑ[L] M where toFun := id

variable {L} {M}

instance : Inhabited (M ↪ₑ[L] M) :=
  ⟨refl L M⟩

@[simp]
theorem refl_apply (x : M) : refl L M x = x :=
  rfl

/-- Composition of elementary embeddings -/
@[trans]
def comp (hnp : N ↪ₑ[L] P) (hmn : M ↪ₑ[L] N) : M ↪ₑ[L] P where
  toFun := hnp ∘ hmn
  map_formula' n φ x := by
    obtain ⟨_, hhnp⟩ := hnp
    obtain ⟨_, hhmn⟩ := hmn
    erw [hhnp, hhmn]

@[target, simp]
theorem comp_apply (g : N ↪ₑ[L] P) (f : M ↪ₑ[L] N) (x : M) : g.comp f x = g (f x) := by sorry

/-- Composition of elementary embeddings is associative. -/
@[target]
theorem comp_assoc (f : M ↪ₑ[L] N) (g : N ↪ₑ[L] P) (h : P ↪ₑ[L] Q) :
    (h.comp g).comp f = h.comp (g.comp f) := by sorry

end ElementaryEmbedding

variable (L) (M)

/-- The elementary diagram of an `L`-structure is the set of all sentences with parameters it
  satisfies. -/
abbrev elementaryDiagram : L[[M]].Theory :=
  L[[M]].completeTheory M

/-- The canonical elementary embedding of an `L`-structure into any model of its elementary diagram
-/
@[simps]
def ElementaryEmbedding.ofModelsElementaryDiagram (N : Type*) [L.Structure N] [L[[M]].Structure N]
    [(lhomWithConstants L M).IsExpansionOn N] [N ⊨ L.elementaryDiagram M] : M ↪ₑ[L] N :=
  ⟨((↑) : L[[M]].Constants → N) ∘ Sum.inr, fun n φ x => by
    refine
      _root_.trans ?_
        ((realize_iff_of_model_completeTheory M N
              (((L.lhomWithConstants M).onBoundedFormula φ).subst
                  (Constants.term ∘ Sum.inr ∘ x)).alls).trans
          ?_)
    · simp_rw [Sentence.Realize, BoundedFormula.realize_alls, BoundedFormula.realize_subst,
        LHom.realize_onBoundedFormula, Formula.Realize, Unique.forall_iff, Function.comp_def,
        Term.realize_constants]
    · simp_rw [Sentence.Realize, BoundedFormula.realize_alls, BoundedFormula.realize_subst,
        LHom.realize_onBoundedFormula, Formula.Realize, Unique.forall_iff]
      rfl⟩

variable {L M}

namespace Embedding

/-- The **Tarski-Vaught test** for elementarity of an embedding. -/
@[target]
theorem isElementary_of_exists (f : M ↪[L] N)
    (htv :
      ∀ (n : ℕ) (φ : L.BoundedFormula Empty (n + 1)) (x : Fin n → M) (a : N),
        φ.Realize default (Fin.snoc (f ∘ x) a : _ → N) →
          ∃ b : M, φ.Realize default (Fin.snoc (f ∘ x) (f b) : _ → N)) :
    ∀ {n} (φ : L.Formula (Fin n)) (x : Fin n → M), φ.Realize (f ∘ x) ↔ φ.Realize x := by sorry

/-- Bundles an embedding satisfying the Tarski-Vaught test as an elementary embedding. -/
@[simps]
def toElementaryEmbedding (f : M ↪[L] N)
    (htv :
      ∀ (n : ℕ) (φ : L.BoundedFormula Empty (n + 1)) (x : Fin n → M) (a : N),
        φ.Realize default (Fin.snoc (f ∘ x) a : _ → N) →
          ∃ b : M, φ.Realize default (Fin.snoc (f ∘ x) (f b) : _ → N)) :
    M ↪ₑ[L] N :=
  ⟨f, fun _ => f.isElementary_of_exists htv⟩

end Embedding

namespace Equiv

/-- A first-order equivalence is also an elementary embedding. -/
def toElementaryEmbedding (f : M ≃[L] N) : M ↪ₑ[L] N where
  toFun := f

@[target, simp]
theorem toElementaryEmbedding_toEmbedding (f : M ≃[L] N) :
    f.toElementaryEmbedding.toEmbedding = f.toEmbedding := by sorry

@[target, simp]
theorem coe_toElementaryEmbedding (f : M ≃[L] N) :
    (f.toElementaryEmbedding : M → N) = (f : M → N) := by sorry

end Equiv

@[simp]
theorem realize_term_substructure {α : Type*} {S : L.Substructure M} (v : α → S) (t : L.Term α) :
    t.realize ((↑) ∘ v) = (↑(t.realize v) : M) :=
  HomClass.realize_term S.subtype

end Language

end FirstOrder
