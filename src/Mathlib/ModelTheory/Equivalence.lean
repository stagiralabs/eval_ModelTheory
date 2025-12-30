import VerifiedAgora.tagger
/-
Copyright (c) 2021 Aaron Anderson. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Aaron Anderson
-/
import Mathlib.ModelTheory.Satisfiability

/-!
# Equivalence of Formulas

## Main Definitions
- `FirstOrder.Language.Theory.Imp`: `φ ⟹[T] ψ` indicates that `φ` implies `ψ` in models of `T`.
- `FirstOrder.Language.Theory.Iff`: `φ ⇔[T] ψ` indicates that `φ` and `ψ` are equivalent formulas or
  sentences in models of `T`.

## TODO
- Define the quotient of `L.Formula α` modulo `⇔[T]` and its Boolean Algebra structure.

-/

universe u v w w'

open Cardinal CategoryTheory

open Cardinal FirstOrder

namespace FirstOrder

namespace Language

variable {L : Language.{u, v}} {T : L.Theory} {α : Type w} {n : ℕ}
variable {M : Type*} [Nonempty M] [L.Structure M] [M ⊨ T]

namespace Theory

/-- `φ ⟹[T] ψ` indicates that `φ` implies `ψ` in models of `T`. -/
protected def Imp (T : L.Theory) (φ ψ : L.BoundedFormula α n) : Prop :=
  T ⊨ᵇ φ.imp ψ

@[inherit_doc FirstOrder.Language.Theory.Imp]
scoped[FirstOrder] notation:51 φ:50 " ⟹[" T "] " ψ:51 => Language.Theory.Imp T φ ψ

namespace Imp

@[refl]
protected theorem refl (φ : L.BoundedFormula α n) : φ ⟹[T] φ := fun _ _ _ => id

instance : IsRefl (L.BoundedFormula α n) T.Imp := ⟨Imp.refl⟩

@[trans]
protected theorem trans {φ ψ θ : L.BoundedFormula α n} (h1 : φ ⟹[T] ψ) (h2 : ψ ⟹[T] θ) :
    φ ⟹[T] θ := fun M v xs => (h2 M v xs) ∘ (h1 M v xs)

instance : IsTrans (L.BoundedFormula α n) T.Imp := ⟨fun _ _ _ => Imp.trans⟩

end Imp

section Imp

@[target]
lemma bot_imp (φ : L.BoundedFormula α n) : ⊥ ⟹[T] φ := by sorry

@[target]
lemma imp_top (φ : L.BoundedFormula α n) : φ ⟹[T] ⊤ := by sorry

@[target]
lemma imp_sup_left (φ ψ : L.BoundedFormula α n) : φ ⟹[T] φ ⊔ ψ := by sorry

@[target]
lemma imp_sup_right (φ ψ : L.BoundedFormula α n) : ψ ⟹[T] φ ⊔ ψ := by sorry

@[target]
lemma sup_imp {φ ψ θ : L.BoundedFormula α n} (h₁ : φ ⟹[T] θ) (h₂ : ψ ⟹[T] θ) :
    φ ⊔ ψ ⟹[T] θ := by sorry

@[target]
lemma sup_imp_iff {φ ψ θ : L.BoundedFormula α n} :
    (φ ⊔ ψ ⟹[T] θ) ↔ (φ ⟹[T] θ) ∧ (ψ ⟹[T] θ) := by sorry

@[target]
lemma inf_imp_left (φ ψ : L.BoundedFormula α n) : φ ⊓ ψ ⟹[T] φ := by sorry

lemma inf_imp_right (φ ψ : L.BoundedFormula α n) : φ ⊓ ψ ⟹[T] ψ := fun M v xs => by
  simp only [BoundedFormula.realize_imp, BoundedFormula.realize_inf]
  exact And.right

@[target]
lemma imp_inf {φ ψ θ : L.BoundedFormula α n} (h₁ : φ ⟹[T] ψ) (h₂ : φ ⟹[T] θ) :
    φ ⟹[T] ψ ⊓ θ := by sorry

@[target]
lemma imp_inf_iff {φ ψ θ : L.BoundedFormula α n} :
    (φ ⟹[T] ψ ⊓ θ) ↔ (φ ⟹[T] ψ) ∧ (φ ⟹[T] θ) := by sorry

end Imp

/-- Two (bounded) formulas are semantically equivalent over a theory `T` when they have the same
interpretation in every model of `T`. (This is also known as logical equivalence, which also has a
proof-theoretic definition.) -/
protected def Iff (T : L.Theory) (φ ψ : L.BoundedFormula α n) : Prop :=
  T ⊨ᵇ φ.iff ψ

@[inherit_doc FirstOrder.Language.Theory.Iff]
scoped[FirstOrder]
notation:51 φ:50 " ⇔[" T "] " ψ:51 => Language.Theory.Iff T φ ψ

@[target]
theorem iff_iff_imp_and_imp {φ ψ : L.BoundedFormula α n} :
    (φ ⇔[T] ψ) ↔ (φ ⟹[T] ψ) ∧ (ψ ⟹[T] φ) := by sorry

@[target]
theorem imp_antisymm {φ ψ : L.BoundedFormula α n} (h₁ : φ ⟹[T] ψ) (h₂ : ψ ⟹[T] φ) :
    φ ⇔[T] ψ := by sorry

namespace Iff

protected theorem mp {φ ψ : L.BoundedFormula α n} (h : φ ⇔[T] ψ) :
    φ ⟹[T] ψ := (iff_iff_imp_and_imp.1 h).1

protected theorem mpr {φ ψ : L.BoundedFormula α n} (h : φ ⇔[T] ψ) :
    ψ ⟹[T] φ := (iff_iff_imp_and_imp.1 h).2

@[refl]
protected theorem refl (φ : L.BoundedFormula α n) : φ ⇔[T] φ :=
  fun M v xs => by rw [BoundedFormula.realize_iff]

instance : IsRefl (L.BoundedFormula α n) T.Iff :=
  ⟨Iff.refl⟩

@[symm]
protected theorem symm {φ ψ : L.BoundedFormula α n}
    (h : φ ⇔[T] ψ) : ψ ⇔[T] φ := fun M v xs => by
  rw [BoundedFormula.realize_iff, Iff.comm, ← BoundedFormula.realize_iff]
  exact h M v xs

instance : IsSymm (L.BoundedFormula α n) T.Iff :=
  ⟨fun _ _ => Iff.symm⟩

@[trans]
protected theorem trans {φ ψ θ : L.BoundedFormula α n}
    (h1 : φ ⇔[T] ψ) (h2 : ψ ⇔[T] θ) :
    φ ⇔[T] θ := fun M v xs => by
  have h1' := h1 M v xs
  have h2' := h2 M v xs
  rw [BoundedFormula.realize_iff] at *
  exact ⟨h2'.1 ∘ h1'.1, h1'.2 ∘ h2'.2⟩

instance : IsTrans (L.BoundedFormula α n) T.Iff :=
  ⟨fun _ _ _ => Iff.trans⟩

@[target]
theorem realize_bd_iff {φ ψ : L.BoundedFormula α n} (h : φ ⇔[T] ψ)
    {v : α → M} {xs : Fin n → M} : φ.Realize v xs ↔ ψ.Realize v xs := by sorry

@[target]
theorem realize_iff {φ ψ : L.Formula α} {M : Type*} [Nonempty M]
    [L.Structure M] [M ⊨ T] (h : φ ⇔[T] ψ) {v : α → M} :
    φ.Realize v ↔ ψ.Realize v := by sorry

@[target]
theorem models_sentence_iff {φ ψ : L.Sentence} {M : Type*} [Nonempty M]
    [L.Structure M] [M ⊨ T] (h : φ ⇔[T] ψ) :
    M ⊨ φ ↔ M ⊨ ψ := by sorry

protected theorem all {φ ψ : L.BoundedFormula α (n + 1)}
    (h : φ ⇔[T] ψ) : φ.all ⇔[T] ψ.all := by
  simp_rw [Theory.Iff, ModelsBoundedFormula, BoundedFormula.realize_iff,
    BoundedFormula.realize_all]
  exact fun M v xs => forall_congr' fun a => h.realize_bd_iff

protected theorem ex {φ ψ : L.BoundedFormula α (n + 1)} (h : φ ⇔[T] ψ) :
    φ.ex ⇔[T] ψ.ex := by
  simp_rw [Theory.Iff, ModelsBoundedFormula, BoundedFormula.realize_iff,
    BoundedFormula.realize_ex]
  exact fun M v xs => exists_congr fun a => h.realize_bd_iff

protected theorem not {φ ψ : L.BoundedFormula α n} (h : φ ⇔[T] ψ) :
    φ.not ⇔[T] ψ.not := by
  simp_rw [Theory.Iff, ModelsBoundedFormula, BoundedFormula.realize_iff,
    BoundedFormula.realize_not]
  exact fun M v xs => not_congr h.realize_bd_iff

protected theorem imp {φ ψ φ' ψ' : L.BoundedFormula α n} (h : φ ⇔[T] ψ) (h' : φ' ⇔[T] ψ') :
    (φ.imp φ') ⇔[T] (ψ.imp ψ') := by
  simp_rw [Theory.Iff, ModelsBoundedFormula, BoundedFormula.realize_iff,
    BoundedFormula.realize_imp]
  exact fun M v xs => imp_congr h.realize_bd_iff h'.realize_bd_iff

end Iff

/-- Semantic equivalence forms an equivalence relation on formulas. -/
def iffSetoid (T : L.Theory) : Setoid (L.BoundedFormula α n) where
  r := T.Iff
  iseqv := ⟨fun _ => refl _, fun {_ _} h => h.symm, fun {_ _ _} h1 h2 => h1.trans h2⟩

end Theory

namespace BoundedFormula

variable (φ ψ : L.BoundedFormula α n)

@[target]
theorem iff_not_not : φ ⇔[T] φ.not.not := by sorry

@[target]
theorem imp_iff_not_sup : (φ.imp ψ) ⇔[T] (φ.not ⊔ ψ) := by sorry

theorem sup_iff_not_inf_not : (φ ⊔ ψ) ⇔[T] (φ.not ⊓ ψ.not).not :=
  fun M v xs => by simp [imp_iff_not_or]

@[target]
theorem inf_iff_not_sup_not : (φ ⊓ ψ) ⇔[T] (φ.not ⊔ ψ.not).not := by sorry

@[target]
theorem all_iff_not_ex_not (φ : L.BoundedFormula α (n + 1)) :
    φ.all ⇔[T] φ.not.ex.not := by sorry

theorem ex_iff_not_all_not (φ : L.BoundedFormula α (n + 1)) :
    φ.ex ⇔[T] φ.not.all.not := fun M v xs => by simp

@[target]
theorem iff_all_liftAt : φ ⇔[T] (φ.liftAt 1 n).all := by sorry

lemma inf_not_iff_bot :
    φ ⊓ ∼φ ⇔[T] ⊥ := fun M v xs => by
  simp only [realize_iff, realize_inf, realize_not, and_not_self, realize_bot]

@[target]
lemma sup_not_iff_top :
    φ ⊔ ∼φ ⇔[T] ⊤ := by sorry

end BoundedFormula

namespace Formula

variable (φ ψ : L.Formula α)

theorem iff_not_not : φ ⇔[T] φ.not.not :=
  BoundedFormula.iff_not_not φ

@[target]
theorem imp_iff_not_sup : (φ.imp ψ) ⇔[T] (φ.not ⊔ ψ) := by sorry

@[target]
theorem sup_iff_not_inf_not : (φ ⊔ ψ) ⇔[T] (φ.not ⊓ ψ.not).not := by sorry

@[target]
theorem inf_iff_not_sup_not : (φ ⊓ ψ) ⇔[T] (φ.not ⊔ ψ.not).not := by sorry

end Formula

end Language

end FirstOrder
