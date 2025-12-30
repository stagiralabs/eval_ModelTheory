import VerifiedAgora.tagger
/-
Copyright (c) 2021 Aaron Anderson. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Aaron Anderson
-/
import Mathlib.Data.SetLike.Basic
import Mathlib.ModelTheory.Semantics

/-!
# Definable Sets

This file defines what it means for a set over a first-order structure to be definable.

## Main Definitions

- `Set.Definable` is defined so that `A.Definable L s` indicates that the
  set `s` of a finite cartesian power of `M` is definable with parameters in `A`.
- `Set.Definable₁` is defined so that `A.Definable₁ L s` indicates that
  `(s : Set M)` is definable with parameters in `A`.
- `Set.Definable₂` is defined so that `A.Definable₂ L s` indicates that
  `(s : Set (M × M))` is definable with parameters in `A`.
- A `FirstOrder.Language.DefinableSet` is defined so that `L.DefinableSet A α` is the boolean
  algebra of subsets of `α → M` defined by formulas with parameters in `A`.

## Main Results

- `L.DefinableSet A α` forms a `BooleanAlgebra`
- `Set.Definable.image_comp` shows that definability is closed under projections in finite
  dimensions.

-/


universe u v w u₁

namespace Set

variable {M : Type w} (A : Set M) (L : FirstOrder.Language.{u, v}) [L.Structure M]

open FirstOrder FirstOrder.Language FirstOrder.Language.Structure

variable {α : Type u₁} {β : Type*}

/-- A subset of a finite Cartesian product of a structure is definable over a set `A` when
  membership in the set is given by a first-order formula with parameters from `A`. -/
def Definable (s : Set (α → M)) : Prop :=
  ∃ φ : L[[A]].Formula α, s = setOf φ.Realize

variable {L} {A} {B : Set M} {s : Set (α → M)}

@[target]
theorem Definable.map_expansion {L' : FirstOrder.Language} [L'.Structure M] (h : A.Definable L s)
    (φ : L →ᴸ L') [φ.IsExpansionOn M] : A.Definable L' s := by sorry

@[target]
theorem definable_iff_exists_formula_sum :
    A.Definable L s ↔ ∃ φ : L.Formula (A ⊕ α), s = {v | φ.Realize (Sum.elim (↑) v)} := by sorry

@[target]
theorem empty_definable_iff :
    (∅ : Set M).Definable L s ↔ ∃ φ : L.Formula α, s = setOf φ.Realize := by sorry

@[target]
theorem definable_iff_empty_definable_with_params :
    A.Definable L s ↔ (∅ : Set M).Definable (L[[A]]) s := by sorry

@[target]
theorem Definable.mono (hAs : A.Definable L s) (hAB : A ⊆ B) : B.Definable L s := by sorry

@[target, simp]
theorem definable_empty : A.Definable L (∅ : Set (α → M)) := by sorry

@[target, simp]
theorem definable_univ : A.Definable L (univ : Set (α → M)) := by sorry

@[target, simp]
theorem Definable.inter {f g : Set (α → M)} (hf : A.Definable L f) (hg : A.Definable L g) :
    A.Definable L (f ∩ g) := by sorry

@[simp]
theorem Definable.union {f g : Set (α → M)} (hf : A.Definable L f) (hg : A.Definable L g) :
    A.Definable L (f ∪ g) := by
  rcases hf with ⟨φ, hφ⟩
  rcases hg with ⟨θ, hθ⟩
  refine ⟨φ ⊔ θ, ?_⟩
  ext
  rw [hφ, hθ, mem_setOf_eq, Formula.realize_sup, mem_union, mem_setOf_eq, mem_setOf_eq]

@[target]
theorem definable_finset_inf {ι : Type*} {f : ι → Set (α → M)} (hf : ∀ i, A.Definable L (f i))
    (s : Finset ι) : A.Definable L (s.inf f) := by sorry

@[target]
theorem definable_finset_sup {ι : Type*} {f : ι → Set (α → M)} (hf : ∀ i, A.Definable L (f i))
    (s : Finset ι) : A.Definable L (s.sup f) := by sorry

@[target]
theorem definable_finset_biInter {ι : Type*} {f : ι → Set (α → M)}
    (hf : ∀ i, A.Definable L (f i)) (s : Finset ι) : A.Definable L (⋂ i ∈ s, f i) := by sorry

@[target]
theorem definable_finset_biUnion {ι : Type*} {f : ι → Set (α → M)}
    (hf : ∀ i, A.Definable L (f i)) (s : Finset ι) : A.Definable L (⋃ i ∈ s, f i) := by sorry

@[simp]
theorem Definable.compl {s : Set (α → M)} (hf : A.Definable L s) : A.Definable L sᶜ := by
  rcases hf with ⟨φ, hφ⟩
  refine ⟨φ.not, ?_⟩
  ext v
  rw [hφ, compl_setOf, mem_setOf, mem_setOf, Formula.realize_not]

@[simp]
theorem Definable.sdiff {s t : Set (α → M)} (hs : A.Definable L s) (ht : A.Definable L t) :
    A.Definable L (s \ t) :=
  hs.inter ht.compl

@[simp] lemma Definable.himp {s t : Set (α → M)} (hs : A.Definable L s) (ht : A.Definable L t) :
    A.Definable L (s ⇨ t) := by rw [himp_eq]; exact ht.union hs.compl

@[target]
theorem Definable.preimage_comp (f : α → β) {s : Set (α → M)} (h : A.Definable L s) :
    A.Definable L ((fun g : β → M => g ∘ f) ⁻¹' s) := by sorry

@[target]
theorem Definable.image_comp_equiv {s : Set (β → M)} (h : A.Definable L s) (f : α ≃ β) :
    A.Definable L ((fun g : β → M => g ∘ f) '' s) := by sorry

@[target]
theorem definable_iff_finitely_definable :
    A.Definable L s ↔ ∃ (A0 : Finset M), (A0 : Set M) ⊆ A ∧
      (A0 : Set M).Definable L s := by sorry

/-- This lemma is only intended as a helper for `Definable.image_comp`. -/
@[target]
theorem Definable.image_comp_sumInl_fin (m : ℕ) {s : Set (Sum α (Fin m) → M)}
    (h : A.Definable L s) : A.Definable L ((fun g : Sum α (Fin m) → M => g ∘ Sum.inl) '' s) := by sorry

@[deprecated (since := "2025-02-21")] alias
Definable.image_comp_sum_inl_fin := Definable.image_comp_sumInl_fin

/-- Shows that definability is closed under finite projections. -/
@[target]
theorem Definable.image_comp_embedding {s : Set (β → M)} (h : A.Definable L s) (f : α ↪ β)
    [Finite β] : A.Definable L ((fun g : β → M => g ∘ f) '' s) := by sorry

/-- Shows that definability is closed under finite projections. -/
@[target]
theorem Definable.image_comp {s : Set (β → M)} (h : A.Definable L s) (f : α → β) [Finite α]
    [Finite β] : A.Definable L ((fun g : β → M => g ∘ f) '' s) := by sorry

variable (L A)

/-- A 1-dimensional version of `Definable`, for `Set M`. -/
def Definable₁ (s : Set M) : Prop :=
  A.Definable L { x : Fin 1 → M | x 0 ∈ s }

/-- A 2-dimensional version of `Definable`, for `Set (M × M)`. -/
def Definable₂ (s : Set (M × M)) : Prop :=
  A.Definable L { x : Fin 2 → M | (x 0, x 1) ∈ s }

end Set

namespace FirstOrder

namespace Language

open Set

variable (L : FirstOrder.Language.{u, v}) {M : Type w} [L.Structure M] (A : Set M) (α : Type u₁)

/-- Definable sets are subsets of finite Cartesian products of a structure such that membership is
  given by a first-order formula. -/
def DefinableSet :=
  { s : Set (α → M) // A.Definable L s }

namespace DefinableSet

variable {L A α}
variable {s t : L.DefinableSet A α} {x : α → M}

instance instSetLike : SetLike (L.DefinableSet A α) (α → M) where
  coe := Subtype.val
  coe_injective' := Subtype.val_injective

instance instTop : Top (L.DefinableSet A α) :=
  ⟨⟨⊤, definable_univ⟩⟩

instance instBot : Bot (L.DefinableSet A α) :=
  ⟨⟨⊥, definable_empty⟩⟩

instance instSup : Max (L.DefinableSet A α) :=
  ⟨fun s t => ⟨s ∪ t, s.2.union t.2⟩⟩

instance instInf : Min (L.DefinableSet A α) :=
  ⟨fun s t => ⟨s ∩ t, s.2.inter t.2⟩⟩

instance instHasCompl : HasCompl (L.DefinableSet A α) :=
  ⟨fun s => ⟨sᶜ, s.2.compl⟩⟩

instance instSDiff : SDiff (L.DefinableSet A α) :=
  ⟨fun s t => ⟨s \ t, s.2.sdiff t.2⟩⟩

-- Why does it complain that `s ⇨ t` is noncomputable?
noncomputable instance instHImp : HImp (L.DefinableSet A α) where
  himp s t := ⟨s ⇨ t, s.2.himp t.2⟩

instance instInhabited : Inhabited (L.DefinableSet A α) :=
  ⟨⊥⟩

@[target]
theorem le_iff : s ≤ t ↔ (s : Set (α → M)) ≤ (t : Set (α → M)) := by sorry

@[target, simp]
theorem mem_top : x ∈ (⊤ : L.DefinableSet A α) := by sorry

@[target, simp]
theorem not_mem_bot {x : α → M} : ¬x ∈ (⊥ : L.DefinableSet A α) := by sorry

@[target, simp]
theorem mem_sup : x ∈ s ⊔ t ↔ x ∈ s ∨ x ∈ t := by sorry

@[target, simp]
theorem mem_inf : x ∈ s ⊓ t ↔ x ∈ s ∧ x ∈ t := by sorry

@[target, simp]
theorem mem_compl : x ∈ sᶜ ↔ ¬x ∈ s := by sorry

@[target, simp]
theorem mem_sdiff : x ∈ s \ t ↔ x ∈ s ∧ ¬x ∈ t := by sorry

@[target, simp, norm_cast]
theorem coe_top : ((⊤ : L.DefinableSet A α) : Set (α → M)) = univ := by sorry

@[target, simp, norm_cast]
theorem coe_bot : ((⊥ : L.DefinableSet A α) : Set (α → M)) = ∅ := by sorry

@[target, simp, norm_cast]
theorem coe_sup (s t : L.DefinableSet A α) :
    ((s ⊔ t : L.DefinableSet A α) : Set (α → M)) = (s : Set (α → M)) ∪ (t : Set (α → M)) := by sorry

@[target, simp, norm_cast]
theorem coe_inf (s t : L.DefinableSet A α) :
    ((s ⊓ t : L.DefinableSet A α) : Set (α → M)) = (s : Set (α → M)) ∩ (t : Set (α → M)) := by sorry

@[simp, norm_cast]
theorem coe_compl (s : L.DefinableSet A α) :
    ((sᶜ : L.DefinableSet A α) : Set (α → M)) = (s : Set (α → M))ᶜ :=
  rfl

@[target, simp, norm_cast]
theorem coe_sdiff (s t : L.DefinableSet A α) :
    ((s \ t : L.DefinableSet A α) : Set (α → M)) = (s : Set (α → M)) \ (t : Set (α → M)) := by sorry

@[simp, norm_cast]
lemma coe_himp (s t : L.DefinableSet A α) : ↑(s ⇨ t) = (s ⇨ t : Set (α → M)) := rfl

noncomputable instance instBooleanAlgebra : BooleanAlgebra (L.DefinableSet A α) :=
  Function.Injective.booleanAlgebra (α := L.DefinableSet A α) _ Subtype.coe_injective
    coe_sup coe_inf coe_top coe_bot coe_compl coe_sdiff coe_himp

end DefinableSet

end Language

end FirstOrder
