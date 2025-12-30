import VerifiedAgora.tagger
/-
Copyright (c) 2024 Gabin Kolly. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Aaron Anderson, Gabin Kolly, David Wärn
-/
import Mathlib.ModelTheory.DirectLimit
import Mathlib.Order.Ideal

/-!
# Partial Isomorphisms
This file defines partial isomorphisms between first-order structures.

## Main Definitions
- `FirstOrder.Language.PartialEquiv` is defined so that `L.PartialEquiv M N`, annotated
  `M ≃ₚ[L] N`, is the type of equivalences between substructures of `M` and `N`. These can be
  ordered, with an order that is defined here in terms of a commutative square, but could also be
  defined as the order on the graphs of the partial equivalences under inclusion as subsets of
  `M × N`.
- `FirstOrder.Language.FGEquiv` is the type of partial equivalences `M ≃ₚ[L] N` with
  finitely-generated domain (or equivalently, codomain).
- `FirstOrder.Language.IsExtensionPair` is defined so that `L.IsExtensionPair M N` indicates that
  any finitely-generated partial equivalence from `M` to `N` can be extended to include an arbitrary
  element `m : M` in its domain.

## Main Results
- `FirstOrder.Language.embedding_from_cg` shows that if structures `M` and `N` form an equivalence
  pair with `M` countably-generated, then any finite-generated partial equivalence between them
  can be extended to an embedding `M ↪[L] N`.
- `FirstOrder.Language.equiv_from_cg` shows that if countably-generated structures `M` and `N` form
  an equivalence pair in both directions, then any finite-generated partial equivalence between them
  can be extended to an isomorphism `M ↪[L] N`.
- The proofs of these results are adapted in part from David Wärn's approach to countable dense
  linear orders, a special case of this phenomenon in the case where `L = Language.order`.

-/

universe u v w w'

namespace FirstOrder

namespace Language

variable (L : Language.{u, v}) (M : Type w) (N : Type w')
variable [L.Structure M] [L.Structure N]

open FirstOrder Structure Substructure

/-- A partial `L`-equivalence, implemented as an equivalence between substructures. -/
structure PartialEquiv where
  /-- The substructure which is the domain of the equivalence. -/
  dom : L.Substructure M
  /-- The substructure which is the codomain of the equivalence. -/
  cod : L.Substructure N
  /-- The equivalence between the two subdomains. -/
  toEquiv : dom ≃[L] cod

@[inherit_doc]
scoped[FirstOrder] notation:25 M " ≃ₚ[" L "] " N =>
  FirstOrder.Language.PartialEquiv L M N

variable {L M N}

namespace PartialEquiv

noncomputable instance instInhabited_self : Inhabited (M ≃ₚ[L] M) :=
  ⟨⊤, ⊤, Equiv.refl L (⊤ : L.Substructure M)⟩

/-- Maps to the symmetric partial equivalence. -/
def symm (f : M ≃ₚ[L] N) : N ≃ₚ[L] M where
  dom := f.cod
  cod := f.dom
  toEquiv := f.toEquiv.symm

@[target, simp]
theorem symm_symm (f : M ≃ₚ[L] N) : f.symm.symm = f := by sorry

@[target]
theorem symm_bijective : Function.Bijective (symm : (M ≃ₚ[L] N) → _) := by sorry

@[target, simp]
theorem symm_apply (f : M ≃ₚ[L] N) (x : f.cod) : f.symm.toEquiv x = f.toEquiv.symm x := by sorry

instance : LE (M ≃ₚ[L] N) :=
  ⟨fun f g ↦ ∃ h : f.dom ≤ g.dom,
    (subtype _).comp (g.toEquiv.toEmbedding.comp (Substructure.inclusion h)) =
      (subtype _).comp f.toEquiv.toEmbedding⟩

@[target]
theorem le_def (f g : M ≃ₚ[L] N) : f ≤ g ↔ ∃ h : f.dom ≤ g.dom,
    (subtype _).comp (g.toEquiv.toEmbedding.comp (Substructure.inclusion h)) =
      (subtype _).comp f.toEquiv.toEmbedding := by sorry

@[gcongr] theorem dom_le_dom {f g : M ≃ₚ[L] N} : f ≤ g → f.dom ≤ g.dom := fun ⟨le, _⟩ ↦ le

@[gcongr] theorem cod_le_cod {f g : M ≃ₚ[L] N} : f ≤ g → f.cod ≤ g.cod := by
  rintro ⟨_, eq_fun⟩ n hn
  let m := f.toEquiv.symm ⟨n, hn⟩
  have  : ((subtype _).comp f.toEquiv.toEmbedding) m = n := by simp only [m, Embedding.comp_apply,
    Equiv.coe_toEmbedding, Equiv.apply_symm_apply, coe_subtype]
  rw [← this, ← eq_fun]
  simp only [Embedding.comp_apply, coe_inclusion, Equiv.coe_toEmbedding, coe_subtype,
    SetLike.coe_mem]

@[target]
theorem subtype_toEquiv_inclusion {f g : M ≃ₚ[L] N} (h : f ≤ g) :
    (subtype _).comp (g.toEquiv.toEmbedding.comp (Substructure.inclusion (dom_le_dom h))) =
      (subtype _).comp f.toEquiv.toEmbedding := by sorry

@[target]
theorem toEquiv_inclusion {f g : M ≃ₚ[L] N} (h : f ≤ g) :
    g.toEquiv.toEmbedding.comp (Substructure.inclusion (dom_le_dom h)) =
      (Substructure.inclusion (cod_le_cod h)).comp f.toEquiv.toEmbedding := by sorry

@[target]
theorem toEquiv_inclusion_apply {f g : M ≃ₚ[L] N} (h : f ≤ g) (x : f.dom) :
    g.toEquiv (Substructure.inclusion (dom_le_dom h) x) =
      Substructure.inclusion (cod_le_cod h) (f.toEquiv x) := by sorry

@[target]
theorem le_iff {f g : M ≃ₚ[L] N} : f ≤ g ↔
    ∃ dom_le_dom : f.dom ≤ g.dom,
    ∃ cod_le_cod : f.cod ≤ g.cod,
    ∀ x, inclusion cod_le_cod (f.toEquiv x) = g.toEquiv (inclusion dom_le_dom x) := by sorry

@[target]
theorem le_trans (f g h : M ≃ₚ[L] N) : f ≤ g → g ≤ h → f ≤ h := by sorry

private theorem le_refl (f : M ≃ₚ[L] N) : f ≤ f := ⟨le_rfl, rfl⟩

private theorem le_antisymm (f g : M ≃ₚ[L] N) (le_fg : f ≤ g) (le_gf : g ≤ f) : f = g := by
  let ⟨dom_f, cod_f, equiv_f⟩ := f
  cases _root_.le_antisymm (dom_le_dom le_fg) (dom_le_dom le_gf)
  cases _root_.le_antisymm (cod_le_cod le_fg) (cod_le_cod le_gf)
  convert rfl
  exact Equiv.injective_toEmbedding ((subtype _).comp_injective (subtype_toEquiv_inclusion le_fg))

instance : PartialOrder (M ≃ₚ[L] N) where
  le_refl := le_refl
  le_trans := le_trans
  le_antisymm := le_antisymm

@[gcongr] lemma symm_le_symm {f g : M ≃ₚ[L] N} (hfg : f ≤ g) : f.symm ≤ g.symm := by
  rw [le_iff]
  refine ⟨cod_le_cod hfg, dom_le_dom hfg, ?_⟩
  intro x
  apply g.toEquiv.injective
  change g.toEquiv (inclusion _ (f.toEquiv.symm x)) = g.toEquiv (g.toEquiv.symm _)
  rw [g.toEquiv.apply_symm_apply, (Equiv.apply_symm_apply f.toEquiv x).symm,
    f.toEquiv.symm_apply_apply]
  exact toEquiv_inclusion_apply hfg _

@[target]
theorem monotone_symm : Monotone (fun (f : M ≃ₚ[L] N) ↦ f.symm) := by sorry

@[target]
theorem symm_le_iff {f : M ≃ₚ[L] N} {g : N ≃ₚ[L] M} : f.symm ≤ g ↔ f ≤ g.symm := by sorry

@[target]
theorem ext {f g : M ≃ₚ[L] N} (h_dom : f.dom = g.dom) : (∀ x : M, ∀ h : x ∈ f.dom,
    subtype _ (f.toEquiv ⟨x, h⟩) = subtype _ (g.toEquiv ⟨x, (h_dom ▸ h)⟩)) → f = g := by sorry

@[target]
theorem ext_iff {f g : M ≃ₚ[L] N} : f = g ↔ ∃ h_dom : f.dom = g.dom,
    ∀ x : M, ∀ h : x ∈ f.dom,
    subtype _ (f.toEquiv ⟨x, h⟩) = subtype _ (g.toEquiv ⟨x, (h_dom ▸ h)⟩) := by sorry

theorem monotone_dom : Monotone (fun f : M ≃ₚ[L] N ↦ f.dom) := fun _ _ ↦ dom_le_dom

@[target]
theorem monotone_cod : Monotone (fun f : M ≃ₚ[L] N ↦ f.cod) := by sorry

/-- Restriction of a partial equivalence to a substructure of the domain. -/
noncomputable def domRestrict (f : M ≃ₚ[L] N) {A : L.Substructure M} (h : A ≤ f.dom) :
    M ≃ₚ[L] N := by
  let g := (subtype _).comp (f.toEquiv.toEmbedding.comp (A.inclusion h))
  exact {
    dom := A
    cod := g.toHom.range
    toEquiv := g.equivRange
  }

@[target]
theorem domRestrict_le (f : M ≃ₚ[L] N) {A : L.Substructure M} (h : A ≤ f.dom) :
    f.domRestrict h ≤ f := by sorry

@[target]
theorem le_domRestrict (f g : M ≃ₚ[L] N) {A : L.Substructure M} (hf : f.dom ≤ A)
    (hg : A ≤ g.dom) (hfg : f ≤ g) : f ≤ g.domRestrict hg := by sorry

/-- Restriction of a partial equivalence to a substructure of the codomain. -/
noncomputable def codRestrict (f : M ≃ₚ[L] N) {A : L.Substructure N} (h : A ≤ f.cod) :
    M ≃ₚ[L] N :=
  (f.symm.domRestrict h).symm

@[target]
theorem codRestrict_le (f : M ≃ₚ[L] N) {A : L.Substructure N} (h : A ≤ f.cod) :
    codRestrict f h ≤ f := by sorry

@[target]
theorem le_codRestrict (f g : M ≃ₚ[L] N) {A : L.Substructure N} (hf : f.cod ≤ A)
    (hg : A ≤ g.cod) (hfg : f ≤ g) : f ≤ g.codRestrict hg := by sorry

/-- A partial equivalence as an embedding from its domain. -/
def toEmbedding (f : M ≃ₚ[L] N) : f.dom ↪[L] N :=
  (subtype _).comp f.toEquiv.toEmbedding

@[target, simp]
theorem toEmbedding_apply {f : M ≃ₚ[L] N} (m : f.dom) :
    f.toEmbedding m = f.toEquiv m := by sorry

/-- Given a partial equivalence which has the whole structure as domain,
  returns the corresponding embedding. -/
def toEmbeddingOfEqTop {f : M ≃ₚ[L] N} (h : f.dom = ⊤) : M ↪[L] N :=
  (h ▸ f.toEmbedding).comp topEquiv.symm.toEmbedding

@[target, simp]
theorem toEmbeddingOfEqTop_apply {f : M ≃ₚ[L] N} (h : f.dom = ⊤) (m : M) :
    toEmbeddingOfEqTop h m = f.toEquiv ⟨m, h.symm ▸ mem_top m⟩ := by sorry

set_option linter.style.nameCheck false in
@[deprecated (since := "2024-11-30")] alias toEmbeddingOfEqTop__apply := toEmbeddingOfEqTop_apply

/-- Given a partial equivalence which has the whole structure as domain and
  as codomain, returns the corresponding equivalence. -/
def toEquivOfEqTop {f : M ≃ₚ[L] N} (h_dom : f.dom = ⊤)
    (h_cod : f.cod = ⊤) : M ≃[L] N :=
  (topEquiv (M := N)).comp ((h_dom ▸ h_cod ▸ f.toEquiv).comp (topEquiv (M := M)).symm)

@[target, simp]
theorem toEquivOfEqTop_toEmbedding {f : M ≃ₚ[L] N} (h_dom : f.dom = ⊤)
    (h_cod : f.cod = ⊤) :
    (toEquivOfEqTop h_dom h_cod).toEmbedding = toEmbeddingOfEqTop h_dom := by sorry

@[target]
theorem dom_fg_iff_cod_fg {N : Type*} [L.Structure N] (f : M ≃ₚ[L] N) :
    f.dom.FG ↔ f.cod.FG := by sorry

end PartialEquiv

namespace Embedding

/-- Given an embedding, returns the corresponding partial equivalence with `⊤` as domain. -/
noncomputable def toPartialEquiv (f : M ↪[L] N) : M ≃ₚ[L] N :=
  ⟨⊤, f.toHom.range, f.equivRange.comp (Substructure.topEquiv)⟩

@[target]
theorem toPartialEquiv_injective :
    Function.Injective (fun f : M ↪[L] N ↦ f.toPartialEquiv) := by sorry

@[simp]
theorem toEmbedding_toPartialEquiv (f : M ↪[L] N) :
    PartialEquiv.toEmbeddingOfEqTop (f := f.toPartialEquiv) rfl = f :=
  rfl

@[simp]
theorem toPartialEquiv_toEmbedding {f :  M ≃ₚ[L] N} (h : f.dom = ⊤) :
    (PartialEquiv.toEmbeddingOfEqTop h).toPartialEquiv = f := by
  rcases f with ⟨_, _, _⟩
  cases h
  apply PartialEquiv.ext
  · intro _ _
    rfl
  · rfl

end Embedding

namespace DirectLimit

open PartialEquiv

variable {ι : Type*} [Preorder ι] [Nonempty ι] [IsDirected ι (· ≤ ·)]
variable (S : ι →o M ≃ₚ[L] N)

instance : DirectedSystem (fun i ↦ (S i).dom)
    (fun _ _ h ↦ Substructure.inclusion (dom_le_dom (S.monotone h))) where
  map_self _ _ := rfl
  map_map _ _ _ _ _ _ := rfl

instance : DirectedSystem (fun i ↦ (S i).cod)
    (fun _ _ h ↦ Substructure.inclusion (cod_le_cod (S.monotone h))) where
  map_self _ _ := rfl
  map_map _ _ _ _ _ _ := rfl

/-- The limit of a directed system of PartialEquivs. -/
noncomputable def partialEquivLimit : M ≃ₚ[L] N where
  dom := iSup (fun i ↦ (S i).dom)
  cod := iSup (fun i ↦ (S i).cod)
  toEquiv :=
    (Equiv_iSup {
      toFun := (fun i ↦ (S i).cod)
      monotone' := monotone_cod.comp S.monotone}
    ).comp
      ((DirectLimit.equiv_lift L ι (fun i ↦ (S i).dom)
        (fun _ _ hij ↦ Substructure.inclusion (dom_le_dom (S.monotone hij)))
        (fun i ↦ (S i).cod)
        (fun _ _ hij ↦ Substructure.inclusion (cod_le_cod (S.monotone hij)))
        (fun i ↦ (S i).toEquiv)
        (fun _ _ hij _ ↦ toEquiv_inclusion_apply (S.monotone hij) _)
      ).comp
        (Equiv_iSup {
          toFun := (fun i ↦ (S i).dom)
          monotone' := monotone_dom.comp S.monotone}).symm)

@[target, simp]
theorem dom_partialEquivLimit : (partialEquivLimit S).dom = iSup (fun x ↦ (S x).dom) := by sorry

@[target, simp]
theorem cod_partialEquivLimit : (partialEquivLimit S).cod = iSup (fun x ↦ (S x).cod) := by sorry

@[target, simp]
lemma partialEquivLimit_comp_inclusion {i : ι} :
    (partialEquivLimit S).toEquiv.toEmbedding.comp (Substructure.inclusion (le_iSup _ i)) =
    (Substructure.inclusion (le_iSup _ i)).comp (S i).toEquiv.toEmbedding := by sorry

@[target]
theorem le_partialEquivLimit (i : ι) : S i ≤ partialEquivLimit S := by sorry

end DirectLimit

section FGEquiv

open PartialEquiv Set DirectLimit

variable (M) (N) (L)

/-- The type of equivalences between finitely generated substructures. -/
abbrev FGEquiv := {f : M ≃ₚ[L] N // f.dom.FG}

/-- Two structures `M` and `N` form an extension pair if the domain of any finitely-generated map
from `M` to `N` can be extended to include any element of `M`. -/
def IsExtensionPair : Prop := ∀ (f : L.FGEquiv M N) (m : M), ∃ g, m ∈ g.1.dom ∧ f ≤ g

variable {M N L}

@[target]
theorem countable_self_fgequiv_of_countable [Countable M] :
    Countable (L.FGEquiv M M) := by sorry

instance inhabited_self_FGEquiv : Inhabited (L.FGEquiv M M) :=
  ⟨⟨⟨⊥, ⊥, Equiv.refl L (⊥ : L.Substructure M)⟩, fg_bot⟩⟩

instance inhabited_FGEquiv_of_IsEmpty_Constants_and_Relations
    [IsEmpty L.Constants] [IsEmpty (L.Relations 0)] [L.Structure N] :
    Inhabited (L.FGEquiv M N) :=
  ⟨⟨⟨⊥, ⊥, {
      toFun := isEmptyElim
      invFun := isEmptyElim
      left_inv := isEmptyElim
      right_inv := isEmptyElim
      map_fun' := fun {n} f x => by
        cases n
        · exact isEmptyElim f
        · exact isEmptyElim (x 0)
      map_rel' := fun {n} r x => by
        cases n
        · exact isEmptyElim r
        · exact isEmptyElim (x 0)
    }⟩, fg_bot⟩⟩

/-- Maps to the symmetric finitely-generated partial equivalence. -/
@[simps]
def FGEquiv.symm (f : L.FGEquiv M N) : L.FGEquiv N M := ⟨f.1.symm, f.1.dom_fg_iff_cod_fg.1 f.2⟩

lemma isExtensionPair_iff_cod : L.IsExtensionPair M N ↔
    ∀ (f : L.FGEquiv N M) (m : M), ∃ g, m ∈ g.1.cod ∧ f ≤ g := by
  refine Iff.intro ?_ ?_ <;>
  · intro h f m
    obtain ⟨g, h1, h2⟩ := h f.symm m
    exact ⟨g.symm, h1, monotone_symm h2⟩

/-- An alternate characterization of an extension pair is that every finitely generated partial
isomorphism can be extended to include any particular element of the domain. -/
@[target]
theorem isExtensionPair_iff_exists_embedding_closure_singleton_sup :
    L.IsExtensionPair M N ↔
    ∀ (S : L.Substructure M) (_ : S.FG) (f : S ↪[L] N) (m : M),
      ∃ g : (closure L {m} ⊔ S : L.Substructure M) ↪[L] N, f =
        g.comp (Substructure.inclusion le_sup_right) := by sorry

namespace IsExtensionPair

protected alias ⟨cod, _⟩ := isExtensionPair_iff_cod

/-- The cofinal set of finite equivalences with a given element in their domain. -/
def definedAtLeft
    (h : L.IsExtensionPair M N) (m : M) : Order.Cofinal (FGEquiv L M N) where
  carrier := {f | m ∈ f.val.dom}
  isCofinal := fun f => h f m

/-- The cofinal set of finite equivalences with a given element in their codomain. -/
def definedAtRight
    (h : L.IsExtensionPair N M) (n : N) : Order.Cofinal (FGEquiv L M N) where
  carrier := {f | n ∈ f.val.cod}
  isCofinal := fun f => h.cod f n

end IsExtensionPair

/-- For a countably generated structure `M` and a structure `N`, if any partial equivalence
between finitely generated substructures can be extended to any element in the domain,
then there exists an embedding of `M` in `N`. -/
@[target]
theorem embedding_from_cg (M_cg : Structure.CG L M) (g : L.FGEquiv M N)
    (H : L.IsExtensionPair M N) :
    ∃ f : M ↪[L] N, g ≤ f.toPartialEquiv := by sorry

/-- For two countably generated structure `M` and `N`, if any PartialEquiv
between finitely generated substructures can be extended to any element in the domain and to
any element in the codomain, then there exists an equivalence between `M` and `N`. -/
@[target]
theorem equiv_between_cg (M_cg : Structure.CG L M) (N_cg : Structure.CG L N)
    (g : L.FGEquiv M N)
    (ext_dom : L.IsExtensionPair M N)
    (ext_cod : L.IsExtensionPair N M) :
    ∃ f : M ≃[L] N, g ≤ f.toEmbedding.toPartialEquiv := by sorry

end FGEquiv

end Language

end FirstOrder
