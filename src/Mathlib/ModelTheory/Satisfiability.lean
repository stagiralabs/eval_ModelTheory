import VerifiedAgora.tagger
/-
Copyright (c) 2021 Aaron Anderson. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Aaron Anderson
-/
import Mathlib.ModelTheory.Ultraproducts
import Mathlib.ModelTheory.Bundled
import Mathlib.ModelTheory.Skolem
import Mathlib.Order.Filter.AtTopBot.Basic

/-!
# First-Order Satisfiability

This file deals with the satisfiability of first-order theories, as well as equivalence over them.

## Main Definitions

- `FirstOrder.Language.Theory.IsSatisfiable`: `T.IsSatisfiable` indicates that `T` has a nonempty
  model.
- `FirstOrder.Language.Theory.IsFinitelySatisfiable`: `T.IsFinitelySatisfiable` indicates that
  every finite subset of `T` is satisfiable.
- `FirstOrder.Language.Theory.IsComplete`: `T.IsComplete` indicates that `T` is satisfiable and
  models each sentence or its negation.
- `Cardinal.Categorical`: A theory is `κ`-categorical if all models of size `κ` are isomorphic.

## Main Results

- The Compactness Theorem, `FirstOrder.Language.Theory.isSatisfiable_iff_isFinitelySatisfiable`,
  shows that a theory is satisfiable iff it is finitely satisfiable.
- `FirstOrder.Language.completeTheory.isComplete`: The complete theory of a structure is
  complete.
- `FirstOrder.Language.Theory.exists_large_model_of_infinite_model` shows that any theory with an
  infinite model has arbitrarily large models.
- `FirstOrder.Language.Theory.exists_elementaryEmbedding_card_eq`: The Upward Löwenheim–Skolem
  Theorem: If `κ` is a cardinal greater than the cardinalities of `L` and an infinite `L`-structure
  `M`, then `M` has an elementary extension of cardinality `κ`.

## Implementation Details

- Satisfiability of an `L.Theory` `T` is defined in the minimal universe containing all the symbols
  of `L`. By Löwenheim-Skolem, this is equivalent to satisfiability in any universe.
-/



universe u v w w'

open Cardinal CategoryTheory

open Cardinal FirstOrder

namespace FirstOrder

namespace Language

variable {L : Language.{u, v}} {T : L.Theory} {α : Type w} {n : ℕ}

namespace Theory

variable (T)

/-- A theory is satisfiable if a structure models it. -/
def IsSatisfiable : Prop :=
  Nonempty (ModelType.{u, v, max u v} T)

/-- A theory is finitely satisfiable if all of its finite subtheories are satisfiable. -/
def IsFinitelySatisfiable : Prop :=
  ∀ T0 : Finset L.Sentence, (T0 : L.Theory) ⊆ T → IsSatisfiable (T0 : L.Theory)

variable {T} {T' : L.Theory}

@[target]
theorem Model.isSatisfiable (M : Type w) [Nonempty M] [L.Structure M] [M ⊨ T] :
    T.IsSatisfiable := by sorry

@[target]
theorem IsSatisfiable.mono (h : T'.IsSatisfiable) (hs : T ⊆ T') : T.IsSatisfiable := by sorry

theorem isSatisfiable_empty (L : Language.{u, v}) : IsSatisfiable (∅ : L.Theory) :=
  ⟨default⟩

@[target]
theorem isSatisfiable_of_isSatisfiable_onTheory {L' : Language.{w, w'}} (φ : L →ᴸ L')
    (h : (φ.onTheory T).IsSatisfiable) : T.IsSatisfiable := by sorry

@[target]
theorem isSatisfiable_onTheory_iff {L' : Language.{w, w'}} {φ : L →ᴸ L'} (h : φ.Injective) :
    (φ.onTheory T).IsSatisfiable ↔ T.IsSatisfiable := by sorry

theorem IsSatisfiable.isFinitelySatisfiable (h : T.IsSatisfiable) : T.IsFinitelySatisfiable :=
  fun _ => h.mono

/-- The **Compactness Theorem of first-order logic**: A theory is satisfiable if and only if it is
finitely satisfiable. -/
@[target]
theorem isSatisfiable_iff_isFinitelySatisfiable {T : L.Theory} :
    T.IsSatisfiable ↔ T.IsFinitelySatisfiable := by sorry

theorem isSatisfiable_directed_union_iff {ι : Type*} [Nonempty ι] {T : ι → L.Theory}
    (h : Directed (· ⊆ ·) T) : Theory.IsSatisfiable (⋃ i, T i) ↔ ∀ i, (T i).IsSatisfiable := by
  refine ⟨fun h' i => h'.mono (Set.subset_iUnion _ _), fun h' => ?_⟩
  rw [isSatisfiable_iff_isFinitelySatisfiable, IsFinitelySatisfiable]
  intro T0 hT0
  obtain ⟨i, hi⟩ := h.exists_mem_subset_of_finset_subset_biUnion hT0
  exact (h' i).mono hi

@[target]
theorem isSatisfiable_union_distinctConstantsTheory_of_card_le (T : L.Theory) (s : Set α)
    (M : Type w') [Nonempty M] [L.Structure M] [M ⊨ T]
    (h : Cardinal.lift.{w'} #s ≤ Cardinal.lift.{w} #M) :
    ((L.lhomWithConstants α).onTheory T ∪ L.distinctConstantsTheory s).IsSatisfiable := by sorry

@[target]
theorem isSatisfiable_union_distinctConstantsTheory_of_infinite (T : L.Theory) (s : Set α)
    (M : Type w') [L.Structure M] [M ⊨ T] [Infinite M] :
    ((L.lhomWithConstants α).onTheory T ∪ L.distinctConstantsTheory s).IsSatisfiable := by sorry

/-- Any theory with an infinite model has arbitrarily large models. -/
@[target]
theorem exists_large_model_of_infinite_model (T : L.Theory) (κ : Cardinal.{w}) (M : Type w')
    [L.Structure M] [M ⊨ T] [Infinite M] :
    ∃ N : ModelType.{_, _, max u v w} T, Cardinal.lift.{max u v w} κ ≤ #N := by sorry

@[target]
theorem isSatisfiable_iUnion_iff_isSatisfiable_iUnion_finset {ι : Type*} (T : ι → L.Theory) :
    IsSatisfiable (⋃ i, T i) ↔ ∀ s : Finset ι, IsSatisfiable (⋃ i ∈ s, T i) := by sorry

end Theory

variable (L)

/-- A version of The Downward Löwenheim–Skolem theorem where the structure `N` elementarily embeds
into `M`, but is not by type a substructure of `M`, and thus can be chosen to belong to the universe
of the cardinal `κ`.
-/
@[target]
theorem exists_elementaryEmbedding_card_eq_of_le (M : Type w') [L.Structure M] [Nonempty M]
    (κ : Cardinal.{w}) (h1 : ℵ₀ ≤ κ) (h2 : lift.{w} L.card ≤ Cardinal.lift.{max u v} κ)
    (h3 : lift.{w'} κ ≤ Cardinal.lift.{w} #M) :
    ∃ N : Bundled L.Structure, Nonempty (N ↪ₑ[L] M) ∧ #N = κ := by sorry

section

/-- The **Upward Löwenheim–Skolem Theorem**: If `κ` is a cardinal greater than the cardinalities of
`L` and an infinite `L`-structure `M`, then `M` has an elementary extension of cardinality `κ`. -/
@[target]
theorem exists_elementaryEmbedding_card_eq_of_ge (M : Type w') [L.Structure M] [iM : Infinite M]
    (κ : Cardinal.{w}) (h1 : Cardinal.lift.{w} L.card ≤ Cardinal.lift.{max u v} κ)
    (h2 : Cardinal.lift.{w} #M ≤ Cardinal.lift.{w'} κ) :
    ∃ N : Bundled L.Structure, Nonempty (M ↪ₑ[L] N) ∧ #N = κ := by sorry

end

/-- The Löwenheim–Skolem Theorem: If `κ` is a cardinal greater than the cardinalities of `L`
and an infinite `L`-structure `M`, then there is an elementary embedding in the appropriate
direction between then `M` and a structure of cardinality `κ`. -/
theorem exists_elementaryEmbedding_card_eq (M : Type w') [L.Structure M] [iM : Infinite M]
    (κ : Cardinal.{w}) (h1 : ℵ₀ ≤ κ) (h2 : lift.{w} L.card ≤ Cardinal.lift.{max u v} κ) :
    ∃ N : Bundled L.Structure, (Nonempty (N ↪ₑ[L] M) ∨ Nonempty (M ↪ₑ[L] N)) ∧ #N = κ := by
  cases le_or_gt (lift.{w'} κ) (Cardinal.lift.{w} #M) with
  | inl h =>
    obtain ⟨N, hN1, hN2⟩ := exists_elementaryEmbedding_card_eq_of_le L M κ h1 h2 h
    exact ⟨N, Or.inl hN1, hN2⟩
  | inr h =>
    obtain ⟨N, hN1, hN2⟩ := exists_elementaryEmbedding_card_eq_of_ge L M κ h2 (le_of_lt h)
    exact ⟨N, Or.inr hN1, hN2⟩

/-- A consequence of the Löwenheim–Skolem Theorem: If `κ` is a cardinal greater than the
cardinalities of `L` and an infinite `L`-structure `M`, then there is a structure of cardinality `κ`
elementarily equivalent to `M`. -/
@[target]
theorem exists_elementarilyEquivalent_card_eq (M : Type w') [L.Structure M] [Infinite M]
    (κ : Cardinal.{w}) (h1 : ℵ₀ ≤ κ) (h2 : lift.{w} L.card ≤ Cardinal.lift.{max u v} κ) :
    ∃ N : CategoryTheory.Bundled L.Structure, (M ≅[L] N) ∧ #N = κ := by sorry

variable {L}

namespace Theory

@[target]
theorem exists_model_card_eq (h : ∃ M : ModelType.{u, v, max u v} T, Infinite M) (κ : Cardinal.{w})
    (h1 : ℵ₀ ≤ κ) (h2 : Cardinal.lift.{w} L.card ≤ Cardinal.lift.{max u v} κ) :
    ∃ N : ModelType.{u, v, w} T, #N = κ := by sorry

variable (T)

/-- A theory models a (bounded) formula when any of its nonempty models realizes that formula on all
  inputs. -/
def ModelsBoundedFormula (φ : L.BoundedFormula α n) : Prop :=
  ∀ (M : ModelType.{u, v, max u v w} T) (v : α → M) (xs : Fin n → M), φ.Realize v xs

@[inherit_doc FirstOrder.Language.Theory.ModelsBoundedFormula]
infixl:51 " ⊨ᵇ " => ModelsBoundedFormula -- input using \|= or \vDash, but not using \models

variable {T}

@[target]
theorem models_formula_iff {φ : L.Formula α} :
    T ⊨ᵇ φ ↔ ∀ (M : ModelType.{u, v, max u v w} T) (v : α → M), φ.Realize v := by sorry

@[target]
theorem models_sentence_iff {φ : L.Sentence} : T ⊨ᵇ φ ↔ ∀ M : ModelType.{u, v, max u v} T, M ⊨ φ := by sorry

@[target]
theorem models_sentence_of_mem {φ : L.Sentence} (h : φ ∈ T) : T ⊨ᵇ φ := by sorry

theorem models_iff_not_satisfiable (φ : L.Sentence) : T ⊨ᵇ φ ↔ ¬IsSatisfiable (T ∪ {φ.not}) := by
  rw [models_sentence_iff, IsSatisfiable]
  refine
    ⟨fun h1 h2 =>
      (Sentence.realize_not _).1
        (realize_sentence_of_mem (T ∪ {Formula.not φ})
          (Set.subset_union_right (Set.mem_singleton _)))
        (h1 (h2.some.subtheoryModel Set.subset_union_left)),
      fun h M => ?_⟩
  contrapose! h
  rw [← Sentence.realize_not] at h
  refine
    ⟨{  Carrier := M
        is_model := ⟨fun ψ hψ => hψ.elim (realize_sentence_of_mem _) fun h' => ?_⟩ }⟩
  rw [Set.mem_singleton_iff.1 h']
  exact h

@[target]
theorem ModelsBoundedFormula.realize_sentence {φ : L.Sentence} (h : T ⊨ᵇ φ) (M : Type*)
    [L.Structure M] [M ⊨ T] [Nonempty M] : M ⊨ φ := by sorry

@[target]
theorem models_formula_iff_onTheory_models_equivSentence {φ : L.Formula α} :
    T ⊨ᵇ φ ↔ (L.lhomWithConstants α).onTheory T ⊨ᵇ Formula.equivSentence φ := by sorry

@[target]
theorem ModelsBoundedFormula.realize_formula {φ : L.Formula α} (h : T ⊨ᵇ φ) (M : Type*)
    [L.Structure M] [M ⊨ T] [Nonempty M] {v : α → M} : φ.Realize v := by sorry

@[target]
theorem models_toFormula_iff {φ : L.BoundedFormula α n} : T ⊨ᵇ φ.toFormula ↔ T ⊨ᵇ φ := by sorry

@[target]
theorem ModelsBoundedFormula.realize_boundedFormula
    {φ : L.BoundedFormula α n} (h : T ⊨ᵇ φ) (M : Type*)
    [L.Structure M] [M ⊨ T] [Nonempty M] {v : α → M} {xs : Fin n → M} : φ.Realize v xs := by sorry

@[target]
theorem models_of_models_theory {T' : L.Theory}
    (h : ∀ φ : L.Sentence, φ ∈ T' → T ⊨ᵇ φ)
    {φ : L.Formula α} (hφ : T' ⊨ᵇ φ) : T ⊨ᵇ φ := by sorry

/-- An alternative statement of the Compactness Theorem. A formula `φ` is modeled by a
theory iff there is a finite subset `T0` of the theory such that `φ` is modeled by `T0` -/
@[target]
theorem models_iff_finset_models {φ : L.Sentence} :
    T ⊨ᵇ φ ↔ ∃ T0 : Finset L.Sentence, (T0 : L.Theory) ⊆ T ∧ (T0 : L.Theory) ⊨ᵇ φ := by sorry

/-- A theory is complete when it is satisfiable and models each sentence or its negation. -/
def IsComplete (T : L.Theory) : Prop :=
  T.IsSatisfiable ∧ ∀ φ : L.Sentence, T ⊨ᵇ φ ∨ T ⊨ᵇ φ.not

namespace IsComplete

theorem models_not_iff (h : T.IsComplete) (φ : L.Sentence) : T ⊨ᵇ φ.not ↔ ¬T ⊨ᵇ φ := by
  rcases h.2 φ with hφ | hφn
  · simp only [hφ, not_true, iff_false]
    rw [models_sentence_iff, not_forall]
    refine ⟨h.1.some, ?_⟩
    simp only [Sentence.realize_not, Classical.not_not]
    exact models_sentence_iff.1 hφ _
  · simp only [hφn, true_iff]
    intro hφ
    rw [models_sentence_iff] at *
    exact hφn h.1.some (hφ _)

@[target]
theorem realize_sentence_iff (h : T.IsComplete) (φ : L.Sentence) (M : Type*) [L.Structure M]
    [M ⊨ T] [Nonempty M] : M ⊨ φ ↔ T ⊨ᵇ φ := by sorry

end IsComplete

/-- A theory is maximal when it is satisfiable and contains each sentence or its negation.
  Maximal theories are complete. -/
def IsMaximal (T : L.Theory) : Prop :=
  T.IsSatisfiable ∧ ∀ φ : L.Sentence, φ ∈ T ∨ φ.not ∈ T

@[target]
theorem IsMaximal.isComplete (h : T.IsMaximal) : T.IsComplete := by sorry

@[target]
theorem IsMaximal.mem_or_not_mem (h : T.IsMaximal) (φ : L.Sentence) : φ ∈ T ∨ φ.not ∈ T := by sorry

theorem IsMaximal.mem_of_models (h : T.IsMaximal) {φ : L.Sentence} (hφ : T ⊨ᵇ φ) : φ ∈ T := by
  refine (h.mem_or_not_mem φ).resolve_right fun con => ?_
  rw [models_iff_not_satisfiable, Set.union_singleton, Set.insert_eq_of_mem con] at hφ
  exact hφ h.1

@[target]
theorem IsMaximal.mem_iff_models (h : T.IsMaximal) (φ : L.Sentence) : φ ∈ T ↔ T ⊨ᵇ φ := by sorry

end Theory

namespace completeTheory

variable (L) (M : Type w)
variable [L.Structure M]

@[target]
theorem isSatisfiable [Nonempty M] : (L.completeTheory M).IsSatisfiable := by sorry

@[target]
theorem mem_or_not_mem (φ : L.Sentence) : φ ∈ L.completeTheory M ∨ φ.not ∈ L.completeTheory M := by sorry

@[target]
theorem isMaximal [Nonempty M] : (L.completeTheory M).IsMaximal := by sorry

@[target]
theorem isComplete [Nonempty M] : (L.completeTheory M).IsComplete := by sorry

end completeTheory

end Language

end FirstOrder

namespace Cardinal

open FirstOrder FirstOrder.Language

variable {L : Language.{u, v}} (κ : Cardinal.{w}) (T : L.Theory)

/-- A theory is `κ`-categorical if all models of size `κ` are isomorphic. -/
def Categorical : Prop :=
  ∀ M N : T.ModelType, #M = κ → #N = κ → Nonempty (M ≃[L] N)

/-- The Łoś–Vaught Test : a criterion for categorical theories to be complete. -/
@[target]
theorem Categorical.isComplete (h : κ.Categorical T) (h1 : ℵ₀ ≤ κ)
    (h2 : Cardinal.lift.{w} L.card ≤ Cardinal.lift.{max u v} κ) (hS : T.IsSatisfiable)
    (hT : ∀ M : Theory.ModelType.{u, v, max u v} T, Infinite M) : T.IsComplete := by sorry

@[target]
theorem empty_theory_categorical (T : Language.empty.Theory) : κ.Categorical T := by sorry

@[target]
theorem empty_infinite_Theory_isComplete : Language.empty.infiniteTheory.IsComplete := by sorry

end Cardinal
