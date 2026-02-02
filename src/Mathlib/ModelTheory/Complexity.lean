import VerifiedAgora.tagger
/-
Copyright (c) 2021 Aaron Anderson. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Aaron Anderson
-/
import Mathlib.ModelTheory.Equivalence

/-!
# Quantifier Complexity

This file defines quantifier complexity of first-order formulas, and constructs prenex normal forms.

## Main Definitions

- `FirstOrder.Language.BoundedFormula.IsAtomic` defines atomic formulas - those which are
  constructed only from terms and relations.
- `FirstOrder.Language.BoundedFormula.IsQF` defines quantifier-free formulas - those which are
  constructed only from atomic formulas and boolean operations.
- `FirstOrder.Language.BoundedFormula.IsPrenex` defines when a formula is in prenex normal form -
  when it consists of a series of quantifiers applied to a quantifier-free formula.
- `FirstOrder.Language.BoundedFormula.toPrenex` constructs a prenex normal form of a given formula.


## Main Results

- `FirstOrder.Language.BoundedFormula.realize_toPrenex` shows that the prenex normal form of a
  formula has the same realization as the original formula.

-/

universe u v w u' v'

namespace FirstOrder

namespace Language

variable {L : Language.{u, v}} {M : Type w} [L.Structure M] {α : Type u'} {β : Type v'}
variable {n l : ℕ} {φ : L.BoundedFormula α l}

open FirstOrder Structure Fin

namespace BoundedFormula

/-- An atomic formula is either equality or a relation symbol applied to terms.
Note that `⊥` and `⊤` are not considered atomic in this convention. -/
inductive IsAtomic : L.BoundedFormula α n → Prop
  | equal (t₁ t₂ : L.Term (α ⊕ (Fin n))) : IsAtomic (t₁.bdEqual t₂)
  | rel {l : ℕ} (R : L.Relations l) (ts : Fin l → L.Term (α ⊕ (Fin n))) :
    IsAtomic (R.boundedFormula ts)

@[target]
theorem not_all_isAtomic (φ : L.BoundedFormula α (n + 1)) : ¬φ.all.IsAtomic := by sorry

@[target]
theorem not_ex_isAtomic (φ : L.BoundedFormula α (n + 1)) : ¬φ.ex.IsAtomic := by sorry

@[target]
theorem IsAtomic.relabel {m : ℕ} {φ : L.BoundedFormula α m} (h : φ.IsAtomic)
    (f : α → β ⊕ (Fin n)) : (φ.relabel f).IsAtomic := by sorry

@[target]
theorem IsAtomic.liftAt {k m : ℕ} (h : IsAtomic φ) : (φ.liftAt k m).IsAtomic := by sorry

theorem IsAtomic.castLE {h : l ≤ n} (hφ : IsAtomic φ) : (φ.castLE h).IsAtomic :=
  IsAtomic.recOn hφ (fun _ _ => IsAtomic.equal _ _) fun _ _ => IsAtomic.rel _ _

/-- A quantifier-free formula is a formula defined without quantifiers. These are all equivalent
to boolean combinations of atomic formulas. -/
inductive IsQF : L.BoundedFormula α n → Prop
  | falsum : IsQF falsum
  | of_isAtomic {φ} (h : IsAtomic φ) : IsQF φ
  | imp {φ₁ φ₂} (h₁ : IsQF φ₁) (h₂ : IsQF φ₂) : IsQF (φ₁.imp φ₂)

@[target]
theorem IsAtomic.isQF {φ : L.BoundedFormula α n} : IsAtomic φ → IsQF φ := by sorry

@[target]
theorem isQF_bot : IsQF (⊥ : L.BoundedFormula α n) := by sorry

namespace IsQF

@[target]
theorem not {φ : L.BoundedFormula α n} (h : IsQF φ) : IsQF φ.not := by sorry

@[target]
theorem top : IsQF (⊤ : L.BoundedFormula α n) := by sorry

@[target]
theorem sup {φ ψ : L.BoundedFormula α n} (hφ : IsQF φ) (hψ : IsQF ψ) : IsQF (φ ⊔ ψ) := by sorry

@[target]
theorem inf {φ ψ : L.BoundedFormula α n} (hφ : IsQF φ) (hψ : IsQF ψ) : IsQF (φ ⊓ ψ) := by sorry

@[target]

protected theorem relabel {m : ℕ} {φ : L.BoundedFormula α m} (h : φ.IsQF) (f : α → β ⊕ (Fin n)) :
    (φ.relabel f).IsQF :=
  IsQF.recOn h isQF_bot (fun h => (h.relabel f).isQF) fun _ _ h1 h2 => h1.imp h2

@[target]

protected theorem liftAt {k m : ℕ} (h : IsQF φ) : (φ.liftAt k m).IsQF :=
  IsQF.recOn h isQF_bot (fun ih => ih.liftAt.isQF) fun _ _ ih1 ih2 => ih1.imp ih2

@[target]

protected theorem castLE {h : l ≤ n} (hφ : IsQF φ) : (φ.castLE h).IsQF :=
  IsQF.recOn hφ isQF_bot (fun ih => ih.castLE.isQF) fun _ _ ih1 ih2 => ih1.imp ih2

end IsQF

@[target]
theorem not_all_isQF (φ : L.BoundedFormula α (n + 1)) : ¬φ.all.IsQF := by sorry

@[target]
theorem not_ex_isQF (φ : L.BoundedFormula α (n + 1)) : ¬φ.ex.IsQF := by sorry

/-- Indicates that a bounded formula is in prenex normal form - that is, it consists of quantifiers
  applied to a quantifier-free formula. -/
inductive IsPrenex : ∀ {n}, L.BoundedFormula α n → Prop
  | of_isQF {n} {φ : L.BoundedFormula α n} (h : IsQF φ) : IsPrenex φ
  | all {n} {φ : L.BoundedFormula α (n + 1)} (h : IsPrenex φ) : IsPrenex φ.all
  | ex {n} {φ : L.BoundedFormula α (n + 1)} (h : IsPrenex φ) : IsPrenex φ.ex

theorem IsQF.isPrenex {φ : L.BoundedFormula α n} : IsQF φ → IsPrenex φ :=
  IsPrenex.of_isQF

@[target]
theorem IsAtomic.isPrenex {φ : L.BoundedFormula α n} (h : IsAtomic φ) : IsPrenex φ := by sorry

theorem IsPrenex.induction_on_all_not {P : ∀ {n}, L.BoundedFormula α n → Prop}
    {φ : L.BoundedFormula α n} (h : IsPrenex φ)
    (hq : ∀ {m} {ψ : L.BoundedFormula α m}, ψ.IsQF → P ψ)
    (ha : ∀ {m} {ψ : L.BoundedFormula α (m + 1)}, P ψ → P ψ.all)
    (hn : ∀ {m} {ψ : L.BoundedFormula α m}, P ψ → P ψ.not) : P φ :=
  IsPrenex.recOn h hq (fun _ => ha) fun _ ih => hn (ha (hn ih))

theorem IsPrenex.relabel {m : ℕ} {φ : L.BoundedFormula α m} (h : φ.IsPrenex)
    (f : α → β ⊕ (Fin n)) : (φ.relabel f).IsPrenex :=
  IsPrenex.recOn h (fun h => (h.relabel f).isPrenex) (fun _ h => by simp [h.all])
    fun _ h => by simp [h.ex]

theorem IsPrenex.castLE (hφ : IsPrenex φ) : ∀ {n} {h : l ≤ n}, (φ.castLE h).IsPrenex :=
  IsPrenex.recOn (motive := @fun l φ _ => ∀ (n : ℕ) (h : l ≤ n), (φ.castLE h).IsPrenex) hφ
    (@fun _ _ ih _ _ => ih.castLE.isPrenex)
    (@fun _ _ _ ih _ _ => (ih _ _).all)
    (@fun _ _ _ ih _ _ => (ih _ _).ex) _ _

@[target]
theorem IsPrenex.liftAt {k m : ℕ} (h : IsPrenex φ) : (φ.liftAt k m).IsPrenex := by sorry

/-- An auxiliary operation to `FirstOrder.Language.BoundedFormula.toPrenex`.
  If `φ` is quantifier-free and `ψ` is in prenex normal form, then `φ.toPrenexImpRight ψ`
  is a prenex normal form for `φ.imp ψ`. -/
@[target]
def toPrenexImpRight : ∀ {n}, L.BoundedFormula α n → L.BoundedFormula α n → L.BoundedFormula α n
  | n, φ, BoundedFormula.ex ψ => ((φ.liftAt 1 n).toPrenexImpRight ψ).ex
  | n, φ, all ψ => ((φ.liftAt 1 n).toPrenexImpRight ψ).all
  | _n, φ, ψ => φ.imp ψ

@[target]
theorem IsQF.toPrenexImpRight {φ : L.BoundedFormula α n} :
    ∀ {ψ : L.BoundedFormula α n}, IsQF ψ → φ.toPrenexImpRight ψ = φ.imp ψ := by sorry

@[target]
theorem isPrenex_toPrenexImpRight {φ ψ : L.BoundedFormula α n} (hφ : IsQF φ) (hψ : IsPrenex ψ) :
    IsPrenex (φ.toPrenexImpRight ψ) := by sorry

/-- An auxiliary operation to `FirstOrder.Language.BoundedFormula.toPrenex`.
  If `φ` and `ψ` are in prenex normal form, then `φ.toPrenexImp ψ`
  is a prenex normal form for `φ.imp ψ`. -/
@[target]
def toPrenexImp : ∀ {n}, L.BoundedFormula α n → L.BoundedFormula α n → L.BoundedFormula α n
  | n, BoundedFormula.ex φ, ψ => (φ.toPrenexImp (ψ.liftAt 1 n)).all
  | n, all φ, ψ => (φ.toPrenexImp (ψ.liftAt 1 n)).ex
  | _, φ, ψ => φ.toPrenexImpRight ψ

@[target]
theorem IsQF.toPrenexImp :
    ∀ {φ ψ : L.BoundedFormula α n}, φ.IsQF → φ.toPrenexImp ψ = φ.toPrenexImpRight ψ := by sorry

@[target]
theorem isPrenex_toPrenexImp {φ ψ : L.BoundedFormula α n} (hφ : IsPrenex φ) (hψ : IsPrenex ψ) :
    IsPrenex (φ.toPrenexImp ψ) := by sorry

/-- For any bounded formula `φ`, `φ.toPrenex` is a semantically-equivalent formula in prenex normal
  form. -/
def toPrenex : ∀ {n}, L.BoundedFormula α n → L.BoundedFormula α n
  | _, falsum => ⊥
  | _, equal t₁ t₂ => t₁.bdEqual t₂
  | _, rel R ts => rel R ts
  | _, imp f₁ f₂ => f₁.toPrenex.toPrenexImp f₂.toPrenex
  | _, all f => f.toPrenex.all

@[target]
theorem toPrenex_isPrenex (φ : L.BoundedFormula α n) : φ.toPrenex.IsPrenex := by sorry

variable [Nonempty M]

@[target]
theorem realize_toPrenexImpRight {φ ψ : L.BoundedFormula α n} (hφ : IsQF φ) (hψ : IsPrenex ψ)
    {v : α → M} {xs : Fin n → M} :
    (φ.toPrenexImpRight ψ).Realize v xs ↔ (φ.imp ψ).Realize v xs := by sorry

@[target]
theorem realize_toPrenexImp {φ ψ : L.BoundedFormula α n} (hφ : IsPrenex φ) (hψ : IsPrenex ψ)
    {v : α → M} {xs : Fin n → M} : (φ.toPrenexImp ψ).Realize v xs ↔ (φ.imp ψ).Realize v xs := by sorry

@[target, simp]
theorem realize_toPrenex (φ : L.BoundedFormula α n) {v : α → M} :
    ∀ {xs : Fin n → M}, φ.toPrenex.Realize v xs ↔ φ.Realize v xs := by sorry

@[target]
theorem IsQF.induction_on_sup_not {P : L.BoundedFormula α n → Prop} {φ : L.BoundedFormula α n}
    (h : IsQF φ) (hf : P (⊥ : L.BoundedFormula α n))
    (ha : ∀ ψ : L.BoundedFormula α n, IsAtomic ψ → P ψ)
    (hsup : ∀ {φ₁ φ₂}, P φ₁ → P φ₂ → P (φ₁ ⊔ φ₂)) (hnot : ∀ {φ}, P φ → P φ.not)
    (hse :
      ∀ {φ₁ φ₂ : L.BoundedFormula α n}, (φ₁ ⇔[∅] φ₂) → (P φ₁ ↔ P φ₂)) :
    P φ := by sorry

@[target]
theorem IsQF.induction_on_inf_not {P : L.BoundedFormula α n → Prop} {φ : L.BoundedFormula α n}
    (h : IsQF φ) (hf : P (⊥ : L.BoundedFormula α n))
    (ha : ∀ ψ : L.BoundedFormula α n, IsAtomic ψ → P ψ)
    (hinf : ∀ {φ₁ φ₂}, P φ₁ → P φ₂ → P (φ₁ ⊓ φ₂)) (hnot : ∀ {φ}, P φ → P φ.not)
    (hse :
      ∀ {φ₁ φ₂ : L.BoundedFormula α n}, (φ₁ ⇔[∅] φ₂) → (P φ₁ ↔ P φ₂)) :
    P φ := by sorry

@[target]
theorem iff_toPrenex (φ : L.BoundedFormula α n) :
    φ ⇔[∅] φ.toPrenex := by sorry

@[target]

theorem induction_on_all_ex {P : ∀ {m}, L.BoundedFormula α m → Prop} (φ : L.BoundedFormula α n)
    (hqf : ∀ {m} {ψ : L.BoundedFormula α m}, IsQF ψ → P ψ)
    (hall : ∀ {m} {ψ : L.BoundedFormula α (m + 1)}, P ψ → P ψ.all)
    (hex : ∀ {m} {φ : L.BoundedFormula α (m + 1)}, P φ → P φ.ex)
    (hse : ∀ {m} {φ₁ φ₂ : L.BoundedFormula α m},
      (φ₁ ⇔[∅] φ₂) → (P φ₁ ↔ P φ₂)) :
    P φ := by
  suffices h' : ∀ {m} {φ : L.BoundedFormula α m}, φ.IsPrenex → P φ from
    (hse φ.iff_toPrenex).2 (h' φ.toPrenex_isPrenex)
  intro m φ hφ
  induction hφ with
  | of_isQF hφ => exact hqf hφ
  | all _ hφ => exact hall hφ
  | ex _ hφ => exact hex hφ

@[target]
theorem induction_on_exists_not {P : ∀ {m}, L.BoundedFormula α m → Prop} (φ : L.BoundedFormula α n)
    (hqf : ∀ {m} {ψ : L.BoundedFormula α m}, IsQF ψ → P ψ)
    (hnot : ∀ {m} {φ : L.BoundedFormula α m}, P φ → P φ.not)
    (hex : ∀ {m} {φ : L.BoundedFormula α (m + 1)}, P φ → P φ.ex)
    (hse : ∀ {m} {φ₁ φ₂ : L.BoundedFormula α m},
      (φ₁ ⇔[∅] φ₂) → (P φ₁ ↔ P φ₂)) :
    P φ := by sorry

/-- A universal formula is a formula defined by applying only universal quantifiers to a
quantifier-free formula. -/
inductive IsUniversal : ∀ {n}, L.BoundedFormula α n → Prop
  | of_isQF {n} {φ : L.BoundedFormula α n} (h : IsQF φ) : IsUniversal φ
  | all {n} {φ : L.BoundedFormula α (n + 1)} (h : IsUniversal φ) : IsUniversal φ.all

@[target]
lemma IsQF.isUniversal {φ : L.BoundedFormula α n} : IsQF φ → IsUniversal φ := by sorry

@[target]
lemma IsAtomic.isUniversal {φ : L.BoundedFormula α n} (h : IsAtomic φ) : IsUniversal φ := by sorry

/-- An existential formula is a formula defined by applying only existential quantifiers to a
quantifier-free formula. -/
inductive IsExistential : ∀ {n}, L.BoundedFormula α n → Prop
  | of_isQF {n} {φ : L.BoundedFormula α n} (h : IsQF φ) : IsExistential φ
  | ex {n} {φ : L.BoundedFormula α (n + 1)} (h : IsExistential φ) : IsExistential φ.ex

@[target]
lemma IsQF.isExistential {φ : L.BoundedFormula α n} : IsQF φ → IsExistential φ := by sorry

@[target]
lemma IsAtomic.isExistential {φ : L.BoundedFormula α n} (h : IsAtomic φ) : IsExistential φ := by sorry

section Preservation

variable {M : Type*} [L.Structure M] {N : Type*} [L.Structure N]
variable {F : Type*} [FunLike F M N]

lemma IsAtomic.realize_comp_of_injective {φ : L.BoundedFormula α n} (hA : φ.IsAtomic)
    [L.HomClass F M N] {f : F} (hInj : Function.Injective f) {v : α → M} {xs : Fin n → M} :
    φ.Realize v xs → φ.Realize (f ∘ v) (f ∘ xs) := by
  induction hA with
  | equal t₁ t₂ => simp only [realize_bdEqual, ← Sum.comp_elim, HomClass.realize_term, hInj.eq_iff,
    imp_self]
  | rel R ts =>
    simp only [realize_rel, ← Sum.comp_elim, HomClass.realize_term]
    exact HomClass.map_rel f R (fun i => Term.realize (Sum.elim v xs) (ts i))

@[target]
lemma IsAtomic.realize_comp {φ : L.BoundedFormula α n} (hA : φ.IsAtomic)
    [EmbeddingLike F M N] [L.HomClass F M N] (f : F) {v : α → M} {xs : Fin n → M} :
    φ.Realize v xs → φ.Realize (f ∘ v) (f ∘ xs) := by sorry

variable [EmbeddingLike F M N] [L.StrongHomClass F M N]

lemma IsQF.realize_embedding {φ : L.BoundedFormula α n} (hQF : φ.IsQF)
    (f : F) {v : α → M} {xs : Fin n → M} :
    φ.Realize (f ∘ v) (f ∘ xs) ↔ φ.Realize v xs := by
  induction hQF with
  | falsum => rfl
  | of_isAtomic hA => induction hA with
    | equal t₁ t₂ => simp only [realize_bdEqual, ← Sum.comp_elim, HomClass.realize_term,
        (EmbeddingLike.injective f).eq_iff]
    | rel R ts =>
      simp only [realize_rel, ← Sum.comp_elim, HomClass.realize_term]
      exact StrongHomClass.map_rel f R (fun i => Term.realize (Sum.elim v xs) (ts i))
  | imp _ _ ihφ ihψ => simp only [realize_imp, ihφ, ihψ]

@[target]
lemma IsUniversal.realize_embedding {φ : L.BoundedFormula α n} (hU : φ.IsUniversal)
    (f : F) {v : α → M} {xs : Fin n → M} :
    φ.Realize (f ∘ v) (f ∘ xs) → φ.Realize v xs := by sorry

@[target]
lemma IsExistential.realize_embedding {φ : L.BoundedFormula α n} (hE : φ.IsExistential)
    (f : F) {v : α → M} {xs : Fin n → M} :
    φ.Realize v xs → φ.Realize (f ∘ v) (f ∘ xs) := by sorry

end Preservation

end BoundedFormula

/-- A theory is universal when it is comprised only of universal sentences - these theories apply
also to substructures. -/
class Theory.IsUniversal (T : L.Theory) : Prop where
  isUniversal_of_mem : ∀ ⦃φ⦄, φ ∈ T → φ.IsUniversal

lemma Theory.IsUniversal.models_of_embedding {T : L.Theory} [hT : T.IsUniversal]
    {N : Type*} [L.Structure N] [N ⊨ T] (f : M ↪[L] N) : M ⊨ T := by
  simp only [model_iff]
  refine fun φ hφ => (hT.isUniversal_of_mem hφ).realize_embedding f (?_)
  rw [Subsingleton.elim (f ∘ default) default, Subsingleton.elim (f ∘ default) default]
  exact Theory.realize_sentence_of_mem T hφ

instance Substructure.models_of_isUniversal
    (S : L.Substructure M) (T : L.Theory) [T.IsUniversal] [M ⊨ T] : S ⊨ T :=
  Theory.IsUniversal.models_of_embedding (Substructure.subtype S)

lemma Theory.IsUniversal.insert
    {T : L.Theory} [hT : T.IsUniversal] {φ : L.Sentence} (hφ : φ.IsUniversal) :
    (insert φ T).IsUniversal := ⟨by
  simp only [Set.mem_insert_iff, forall_eq_or_imp, hφ, true_and]
  exact hT.isUniversal_of_mem⟩

namespace Relations

open BoundedFormula

lemma isAtomic (r : L.Relations l) (ts : Fin l → L.Term (α ⊕ (Fin n))) :
    IsAtomic (r.boundedFormula ts) := IsAtomic.rel r ts

@[target]
lemma isQF (r : L.Relations l) (ts : Fin l → L.Term (α ⊕ (Fin n))) :
    IsQF (r.boundedFormula ts) := by sorry

variable (r : L.Relations 2)

@[target]

protected lemma isUniversal_reflexive : r.reflexive.IsUniversal :=
  (r.isQF _).isUniversal.all

@[target]

protected lemma isUniversal_irreflexive : r.irreflexive.IsUniversal :=
  (r.isAtomic _).isQF.not.isUniversal.all

@[target]

protected lemma isUniversal_symmetric : r.symmetric.IsUniversal :=
  ((r.isQF _).imp (r.isQF _)).isUniversal.all.all

@[target]

protected lemma isUniversal_antisymmetric : r.antisymmetric.IsUniversal :=
  ((r.isQF _).imp ((r.isQF _).imp (IsAtomic.equal _ _).isQF)).isUniversal.all.all

@[target]

protected lemma isUniversal_transitive : r.transitive.IsUniversal :=
  ((r.isQF _).imp ((r.isQF _).imp (r.isQF _))).isUniversal.all.all.all

@[target]

protected lemma isUniversal_total : r.total.IsUniversal :=
  ((r.isQF _).sup (r.isQF _)).isUniversal.all.all

end Relations

theorem Formula.isAtomic_graph (f : L.Functions n) : (Formula.graph f).IsAtomic :=
  BoundedFormula.IsAtomic.equal _ _

end Language

end FirstOrder
