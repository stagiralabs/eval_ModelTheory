import VerifiedAgora.tagger
/-
Copyright (c) 2022 Aaron Anderson. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Aaron Anderson
-/
import Mathlib.ModelTheory.Satisfiability

/-!
# Type Spaces

This file defines the space of complete types over a first-order theory.
(Note that types in model theory are different from types in type theory.)

## Main Definitions

- `FirstOrder.Language.Theory.CompleteType`:
  `T.CompleteType α` consists of complete types over the theory `T` with variables `α`.
- `FirstOrder.Language.Theory.typeOf` is the type of a given tuple.
- `FirstOrder.Language.Theory.realizedTypes`: `T.realizedTypes M α` is the set of
  types in `T.CompleteType α` that are realized in `M` - that is, the type of some tuple in `M`.

## Main Results

- `FirstOrder.Language.Theory.CompleteType.nonempty_iff`:
  The space `T.CompleteType α` is nonempty exactly when `T` is satisfiable.
- `FirstOrder.Language.Theory.CompleteType.exists_modelType_is_realized_in`: Every type is realized
  in some model.

## Implementation Notes

- Complete types are implemented as maximal consistent theories in an expanded language.
  More frequently they are described as maximal consistent sets of formulas, but this is equivalent.

## TODO

- Connect `T.CompleteType α` to sets of formulas `L.Formula α`.
-/



universe u v w w'

open Cardinal Set FirstOrder

namespace FirstOrder

namespace Language

namespace Theory

variable {L : Language.{u, v}} (T : L.Theory) (α : Type w)

/-- A complete type over a given theory in a certain type of variables is a maximally
  consistent (with the theory) set of formulas in that type. -/
structure CompleteType where
  toTheory : L[[α]].Theory
  subset' : (L.lhomWithConstants α).onTheory T ⊆ toTheory
  isMaximal' : toTheory.IsMaximal

variable {T α}

namespace CompleteType

attribute [coe] CompleteType.toTheory

instance Sentence.instSetLike : SetLike (T.CompleteType α) (L[[α]].Sentence) :=
  ⟨fun p => p.toTheory, fun p q h => by
    cases p
    cases q
    congr ⟩

@[target]
theorem isMaximal (p : T.CompleteType α) : IsMaximal (p : L[[α]].Theory) := by sorry

@[target]
theorem subset (p : T.CompleteType α) : (L.lhomWithConstants α).onTheory T ⊆ (p : L[[α]].Theory) := by sorry

@[target]
theorem mem_or_not_mem (p : T.CompleteType α) (φ : L[[α]].Sentence) : φ ∈ p ∨ φ.not ∈ p := by sorry

@[target]
theorem mem_of_models (p : T.CompleteType α) {φ : L[[α]].Sentence}
    (h : (L.lhomWithConstants α).onTheory T ⊨ᵇ φ) : φ ∈ p := by sorry

@[target]
theorem not_mem_iff (p : T.CompleteType α) (φ : L[[α]].Sentence) : φ.not ∈ p ↔ ¬φ ∈ p := by sorry

@[target, simp]
theorem compl_setOf_mem {φ : L[[α]].Sentence} :
    { p : T.CompleteType α | φ ∈ p }ᶜ = { p : T.CompleteType α | φ.not ∈ p } := by sorry

@[target]
theorem setOf_subset_eq_empty_iff (S : L[[α]].Theory) :
    { p : T.CompleteType α | S ⊆ ↑p } = ∅ ↔
      ¬((L.lhomWithConstants α).onTheory T ∪ S).IsSatisfiable := by sorry

@[target]
theorem setOf_mem_eq_univ_iff (φ : L[[α]].Sentence) :
    { p : T.CompleteType α | φ ∈ p } = Set.univ ↔ (L.lhomWithConstants α).onTheory T ⊨ᵇ φ := by sorry

@[target]
theorem setOf_subset_eq_univ_iff (S : L[[α]].Theory) :
    { p : T.CompleteType α | S ⊆ ↑p } = Set.univ ↔
      ∀ φ, φ ∈ S → (L.lhomWithConstants α).onTheory T ⊨ᵇ φ := by sorry

theorem nonempty_iff : Nonempty (T.CompleteType α) ↔ T.IsSatisfiable := by
  rw [← isSatisfiable_onTheory_iff (lhomWithConstants_injective L α)]
  rw [nonempty_iff_univ_nonempty, nonempty_iff_ne_empty, Ne, not_iff_comm,
    ← union_empty ((L.lhomWithConstants α).onTheory T), ← setOf_subset_eq_empty_iff]
  simp

instance instNonempty : Nonempty (CompleteType (∅ : L.Theory) α) :=
  nonempty_iff.2 (isSatisfiable_empty L)

@[target]
theorem iInter_setOf_subset {ι : Type*} (S : ι → L[[α]].Theory) :
    ⋂ i : ι, { p : T.CompleteType α | S i ⊆ p } =
      { p : T.CompleteType α | ⋃ i : ι, S i ⊆ p } := by sorry

@[target]
theorem toList_foldr_inf_mem {p : T.CompleteType α} {t : Finset (L[[α]]).Sentence} :
    t.toList.foldr (· ⊓ ·) ⊤ ∈ p ↔ (t : L[[α]].Theory) ⊆ ↑p := by sorry

end CompleteType

variable {M : Type w'} [L.Structure M] [Nonempty M] [M ⊨ T] (T)

/-- The set of all formulas true at a tuple in a structure forms a complete type. -/
def typeOf (v : α → M) : T.CompleteType α :=
  haveI : (constantsOn α).Structure M := constantsOn.structure v
  { toTheory := L[[α]].completeTheory M
    subset' := model_iff_subset_completeTheory.1 ((LHom.onTheory_model _ T).2 inferInstance)
    isMaximal' := completeTheory.isMaximal _ _ }

namespace CompleteType

variable {T} {v : α → M}

@[target, simp]
theorem mem_typeOf {φ : L[[α]].Sentence} :
    φ ∈ T.typeOf v ↔ (Formula.equivSentence.symm φ).Realize v := by sorry

@[target]
theorem formula_mem_typeOf {φ : L.Formula α} :
    Formula.equivSentence φ ∈ T.typeOf v ↔ φ.Realize v := by sorry

end CompleteType

variable (M)

/-- A complete type `p` is realized in a particular structure when there is some
  tuple `v` whose type is `p`. -/
@[simp]
def realizedTypes (α : Type w) : Set (T.CompleteType α) :=
  Set.range (T.typeOf : (α → M) → T.CompleteType α)

section

@[target]
theorem exists_modelType_is_realized_in (p : T.CompleteType α) :
    ∃ M : Theory.ModelType.{u, v, max u v w} T, p ∈ T.realizedTypes M α := by sorry

end

end Theory

end Language

end FirstOrder
