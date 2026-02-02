import VerifiedAgora.tagger
/-
Copyright (c) 2021 Aaron Anderson. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Aaron Anderson, Gabin Kolly
-/
import Mathlib.Data.Fintype.Order
import Mathlib.Order.Closure
import Mathlib.ModelTheory.Semantics
import Mathlib.ModelTheory.Encoding

/-!
# First-Order Substructures

This file defines substructures of first-order structures in a similar manner to the various
substructures appearing in the algebra library.

## Main Definitions

- A `FirstOrder.Language.Substructure` is defined so that `L.Substructure M` is the type of all
    substructures of the `L`-structure `M`.
- `FirstOrder.Language.Substructure.closure` is defined so that if `s : Set M`, `closure L s` is
    the least substructure of `M` containing `s`.
- `FirstOrder.Language.Substructure.comap` is defined so that `s.comap f` is the preimage of the
    substructure `s` under the homomorphism `f`, as a substructure.
- `FirstOrder.Language.Substructure.map` is defined so that `s.map f` is the image of the
    substructure `s` under the homomorphism `f`, as a substructure.
- `FirstOrder.Language.Hom.range` is defined so that `f.range` is the range of the
    homomorphism `f`, as a substructure.
- `FirstOrder.Language.Hom.domRestrict` and `FirstOrder.Language.Hom.codRestrict` restrict
    the domain and codomain respectively of first-order homomorphisms to substructures.
- `FirstOrder.Language.Embedding.domRestrict` and `FirstOrder.Language.Embedding.codRestrict`
    restrict the domain and codomain respectively of first-order embeddings to substructures.
- `FirstOrder.Language.Substructure.inclusion` is the inclusion embedding between substructures.
- `FirstOrder.Language.Substructure.PartialEquiv` is defined so that `PartialEquiv L M N` is
  the type of equivalences between substructures of `M` and `N`.

## Main Results

- `L.Substructure M` forms a `CompleteLattice`.
-/

universe u v w

namespace FirstOrder

namespace Language

variable {L : Language.{u, v}} {M : Type w} {N P : Type*}
variable [L.Structure M] [L.Structure N] [L.Structure P]

open FirstOrder Cardinal

open Structure Cardinal

section ClosedUnder

open Set

variable {n : ℕ} (f : L.Functions n) (s : Set M)

/-- Indicates that a set in a given structure is a closed under a function symbol. -/
def ClosedUnder : Prop :=
  ∀ x : Fin n → M, (∀ i : Fin n, x i ∈ s) → funMap f x ∈ s

variable (L)

@[target, simp]
theorem closedUnder_univ : ClosedUnder f (univ : Set M) := by sorry

variable {L f s} {t : Set M}

namespace ClosedUnder

@[target]
theorem inter (hs : ClosedUnder f s) (ht : ClosedUnder f t) : ClosedUnder f (s ∩ t) := by sorry

@[target]
theorem inf (hs : ClosedUnder f s) (ht : ClosedUnder f t) : ClosedUnder f (s ⊓ t) := by sorry

variable {S : Set (Set M)}

theorem sInf (hS : ∀ s, s ∈ S → ClosedUnder f s) : ClosedUnder f (sInf S) := fun x h s hs =>
  hS s hs x fun i => h i s hs

end ClosedUnder

end ClosedUnder

variable (L) (M)

/-- A substructure of a structure `M` is a set closed under application of function symbols. -/
structure Substructure where
  carrier : Set M
  fun_mem : ∀ {n}, ∀ f : L.Functions n, ClosedUnder f carrier

variable {L} {M}

namespace Substructure

attribute [coe] Substructure.carrier

instance instSetLike : SetLike (L.Substructure M) M :=
  ⟨Substructure.carrier, fun p q h => by cases p; cases q; congr⟩

/-- See Note [custom simps projection] -/
def Simps.coe (S : L.Substructure M) : Set M :=
  S

initialize_simps_projections Substructure (carrier → coe, as_prefix coe)

@[target, simp]
theorem mem_carrier {s : L.Substructure M} {x : M} : x ∈ s.carrier ↔ x ∈ s := by sorry

/-- Two substructures are equal if they have the same elements. -/
@[target, ext]
theorem ext {S T : L.Substructure M} (h : ∀ x, x ∈ S ↔ x ∈ T) : S = T := by sorry

/-- Copy a substructure replacing `carrier` with a set that is equal to it. -/
protected def copy (S : L.Substructure M) (s : Set M) (hs : s = S) : L.Substructure M where
  carrier := s
  fun_mem _ f := hs.symm ▸ S.fun_mem _ f

end Substructure

variable {S : L.Substructure M}

@[target]
theorem Term.realize_mem {α : Type*} (t : L.Term α) (xs : α → M) (h : ∀ a, xs a ∈ S) :
    t.realize xs ∈ S := by sorry

namespace Substructure

@[target, simp]
theorem coe_copy {s : Set M} (hs : s = S) : (S.copy s hs : Set M) = s := by sorry

@[target]
theorem copy_eq {s : Set M} (hs : s = S) : S.copy s hs = S := by sorry

@[target]
theorem constants_mem (c : L.Constants) : (c : M) ∈ S := by sorry

/-- The substructure `M` of the structure `M`. -/
instance instTop : Top (L.Substructure M) :=
  ⟨{  carrier := Set.univ
      fun_mem := fun {_} _ _ _ => Set.mem_univ _ }⟩

instance instInhabited : Inhabited (L.Substructure M) :=
  ⟨⊤⟩

@[target, simp]
theorem mem_top (x : M) : x ∈ (⊤ : L.Substructure M) := by sorry

@[simp]
theorem coe_top : ((⊤ : L.Substructure M) : Set M) = Set.univ :=
  rfl

/-- The inf of two substructures is their intersection. -/
instance instInf : Min (L.Substructure M) :=
  ⟨fun S₁ S₂ =>
    { carrier := (S₁ : Set M) ∩ (S₂ : Set M)
      fun_mem := fun {_} f => (S₁.fun_mem f).inf (S₂.fun_mem f) }⟩

@[target, simp]
theorem coe_inf (p p' : L.Substructure M) :
    ((p ⊓ p' : L.Substructure M) : Set M) = (p : Set M) ∩ (p' : Set M) := by sorry

@[target, simp]
theorem mem_inf {p p' : L.Substructure M} {x : M} : x ∈ p ⊓ p' ↔ x ∈ p ∧ x ∈ p' := by sorry

instance instInfSet : InfSet (L.Substructure M) :=
  ⟨fun s =>
    { carrier := ⋂ t ∈ s, (t : Set M)
      fun_mem := fun {n} f =>
        ClosedUnder.sInf
          (by
            rintro _ ⟨t, rfl⟩
            by_cases h : t ∈ s
            · simpa [h] using t.fun_mem f
            · simp [h]) }⟩

@[target, simp, norm_cast]
theorem coe_sInf (S : Set (L.Substructure M)) :
    ((sInf S : L.Substructure M) : Set M) = ⋂ s ∈ S, (s : Set M) := by sorry

@[target]
theorem mem_sInf {S : Set (L.Substructure M)} {x : M} : x ∈ sInf S ↔ ∀ p ∈ S, x ∈ p := by sorry

@[target]
theorem mem_iInf {ι : Sort*} {S : ι → L.Substructure M} {x : M} :
    (x ∈ ⨅ i, S i) ↔ ∀ i, x ∈ S i := by sorry

@[target, simp, norm_cast]
theorem coe_iInf {ι : Sort*} {S : ι → L.Substructure M} :
    ((⨅ i, S i : L.Substructure M) : Set M) = ⋂ i, (S i : Set M) := by sorry

/-- Substructures of a structure form a complete lattice. -/
instance instCompleteLattice : CompleteLattice (L.Substructure M) :=
  { completeLatticeOfInf (L.Substructure M) fun _ =>
      IsGLB.of_image
        (fun {S T : L.Substructure M} => show (S : Set M) ≤ T ↔ S ≤ T from SetLike.coe_subset_coe)
        isGLB_biInf with
    le := (· ≤ ·)
    lt := (· < ·)
    top := ⊤
    le_top := fun _ x _ => mem_top x
    inf := (· ⊓ ·)
    sInf := InfSet.sInf
    le_inf := fun _a _b _c ha hb _x hx => ⟨ha hx, hb hx⟩
    inf_le_left := fun _ _ _ => And.left
    inf_le_right := fun _ _ _ => And.right }

variable (L)

/-- The `L.Substructure` generated by a set. -/
@[target]
def closure : LowerAdjoint ((↑) : L.Substructure M → Set M) :=
  ⟨fun s => sInf { S | s ⊆ S }, fun _ _ =>
    ⟨Set.Subset.trans fun _x hx => mem_sInf.2 fun _S hS => hS hx, fun h => sInf_le h⟩⟩

variable {L} {s : Set M}

@[target]
theorem mem_closure {x : M} : x ∈ closure L s ↔ ∀ S : L.Substructure M, s ⊆ S → x ∈ S := by sorry

/-- The substructure generated by a set includes the set. -/
@[target, simp]
theorem subset_closure : s ⊆ closure L s := by sorry

@[target]
theorem not_mem_of_not_mem_closure {P : M} (hP : P ∉ closure L s) : P ∉ s := by sorry

@[target, simp]
theorem closed (S : L.Substructure M) : (closure L).closed (S : Set M) := by sorry

open Set

/-- A substructure `S` includes `closure L s` if and only if it includes `s`. -/
@[target, simp] theorem closure_le : closure L s ≤ S ↔ s ⊆ S :=
  (closure L).closure_le_closed_iff_le s S.closed

/-- Substructure closure of a set is monotone in its argument: if `s ⊆ t`,
then `closure L s ≤ closure L t`. -/
@[target, gcongr]
theorem closure_mono ⦃s t : Set M⦄ (h : s ⊆ t) : closure L s ≤ closure L t := by sorry

@[target]
theorem closure_eq_of_le (h₁ : s ⊆ S) (h₂ : S ≤ closure L s) : closure L s = S := by sorry

@[target]
theorem coe_closure_eq_range_term_realize :
    (closure L s : Set M) = range (@Term.realize L _ _ _ ((↑) : s → M)) := by sorry

instance small_closure [Small.{u} s] : Small.{u} (closure L s) := by
  rw [← SetLike.coe_sort_coe, Substructure.coe_closure_eq_range_term_realize]
  exact small_range _

@[target]
theorem mem_closure_iff_exists_term {x : M} :
    x ∈ closure L s ↔ ∃ t : L.Term s, t.realize ((↑) : s → M) = x := by sorry

@[target]
theorem lift_card_closure_le_card_term : Cardinal.lift.{max u w} #(closure L s) ≤ #(L.Term s) := by sorry

@[target]
theorem lift_card_closure_le :
    Cardinal.lift.{u, w} #(closure L s) ≤
      max ℵ₀ (Cardinal.lift.{u, w} #s + Cardinal.lift.{w, u} #(Σi, L.Functions i)) := by sorry

@[target]

lemma mem_closed_iff (s : Set M) :
    s ∈ (closure L).closed ↔ ∀ {n}, ∀ f : L.Functions n, ClosedUnder f s := by
  refine ⟨fun h n f => ?_, fun h => ?_⟩
  · rw [← h]
    exact Substructure.fun_mem _ _
  · have h' : closure L s = ⟨s, h⟩ := closure_eq_of_le (refl _) subset_closure
    exact congr_arg _ h'

variable (L)

@[target]
lemma mem_closed_of_isRelational [L.IsRelational] (s : Set M) : s ∈ (closure L).closed := by sorry

@[target, simp]
lemma closure_eq_of_isRelational [L.IsRelational] (s : Set M) : closure L s = s := by sorry

@[target, simp] lemma mem_closure_iff_of_isRelational [L.IsRelational] (s : Set M) (m : M) :
    m ∈ closure L s ↔ m ∈ s := by
  rw [← SetLike.mem_coe, closure_eq_of_isRelational]

@[target]
theorem _root_.Set.Countable.substructure_closure
    [Countable (Σl, L.Functions l)] (h : s.Countable) : Countable.{w + 1} (closure L s) := by sorry

variable {L} (S)

/-- An induction principle for closure membership. If `p` holds for all elements of `s`, and
is preserved under function symbols, then `p` holds for all elements of the closure of `s`. -/
@[target, elab_as_elim]
theorem closure_induction {p : M → Prop} {x} (h : x ∈ closure L s) (Hs : ∀ x ∈ s, p x)
    (Hfun : ∀ {n : ℕ} (f : L.Functions n), ClosedUnder f (setOf p)) : p x := by sorry

/-- If `s` is a dense set in a structure `M`, `Substructure.closure L s = ⊤`, then in order to prove
that some predicate `p` holds for all `x : M` it suffices to verify `p x` for `x ∈ s`, and verify
that `p` is preserved under function symbols. -/
@[target, elab_as_elim] theorem dense_induction {p : M → Prop} (x : M) {s : Set M} (hs : closure L s = ⊤)
    (Hs : ∀ x ∈ s, p x) (Hfun : ∀ {n : ℕ} (f : L.Functions n), ClosedUnder f (setOf p)) : p x := by
  have : ∀ x ∈ closure L s, p x := fun x hx => closure_induction hx Hs fun {n} => Hfun
  simpa [hs] using this x

variable (L) (M)

/-- `closure` forms a Galois insertion with the coercion to set. -/
@[target]
protected def gi : GaloisInsertion (@closure L M _) (↑) where
  choice s _ := closure L s
  gc := (closure L).gc
  le_l_u _ := subset_closure
  choice_eq _ _ := rfl

variable {L} {M}

/-- Closure of a substructure `S` equals `S`. -/
@[target, simp]
theorem closure_eq : closure L (S : Set M) = S := by sorry

@[target, simp]
theorem closure_empty : closure L (∅ : Set M) = ⊥ := by sorry

@[target, simp]
theorem closure_univ : closure L (univ : Set M) = ⊤ := by sorry

@[target]

theorem closure_union (s t : Set M) : closure L (s ∪ t) = closure L s ⊔ closure L t :=
  (Substructure.gi L M).gc.l_sup

@[target]
theorem closure_iUnion {ι} (s : ι → Set M) : closure L (⋃ i, s i) = ⨆ i, closure L (s i) := by sorry

@[target]
theorem closure_insert (s : Set M) (m : M) : closure L (insert m s) = closure L {m} ⊔ closure L s := by sorry

instance small_bot : Small.{u} (⊥ : L.Substructure M) := by
  rw [← closure_empty]
  haveI : Small.{u} (∅ : Set M) := small_subsingleton _
  exact Substructure.small_closure

@[target]
theorem iSup_eq_closure {ι : Sort*} (S : ι → L.Substructure M) :
    ⨆ i, S i = closure L (⋃ i, (S i : Set M)) := by sorry

@[target]
theorem mem_iSup_of_directed {ι : Type*} [hι : Nonempty ι] {S : ι → L.Substructure M}
    (hS : Directed (· ≤ ·) S) {x : M} :
    x ∈ ⨆ i, S i ↔ ∃ i, x ∈ S i := by sorry

@[target]
theorem mem_sSup_of_directedOn {S : Set (L.Substructure M)} (Sne : S.Nonempty)
    (hS : DirectedOn (· ≤ ·) S) {x : M} :
    x ∈ sSup S ↔ ∃ s ∈ S, x ∈ s := by sorry

variable (L) (M)

instance [IsEmpty L.Constants] : IsEmpty (⊥ : L.Substructure M) := by
  refine (isEmpty_subtype _).2 (fun x => ?_)
  have h : (∅ : Set M) ∈ (closure L).closed := by
    rw [mem_closed_iff]
    intro n f
    cases n
    · exact isEmptyElim f
    · intro x hx
      simp only [mem_empty_iff_false, forall_const] at hx
  rw [← closure_empty, ← SetLike.mem_coe, h]
  exact Set.not_mem_empty _

variable {L} {M}

/-!
### `comap` and `map`
-/


/-- The preimage of a substructure along a homomorphism is a substructure. -/
@[simps]
def comap (φ : M →[L] N) (S : L.Substructure N) : L.Substructure M where
  carrier := φ ⁻¹' S
  fun_mem {n} f x hx := by
    rw [mem_preimage, φ.map_fun]
    exact S.fun_mem f (φ ∘ x) hx

@[target, simp]
theorem mem_comap {S : L.Substructure N} {f : M →[L] N} {x : M} : x ∈ S.comap f ↔ f x ∈ S := by sorry

@[target]
theorem comap_comap (S : L.Substructure P) (g : N →[L] P) (f : M →[L] N) :
    (S.comap g).comap f = S.comap (g.comp f) := by sorry

@[target, simp]
theorem comap_id (S : L.Substructure P) : S.comap (Hom.id _ _) = S := by sorry

/-- The image of a substructure along a homomorphism is a substructure. -/
@[simps]
def map (φ : M →[L] N) (S : L.Substructure M) : L.Substructure N where
  carrier := φ '' S
  fun_mem {n} f x hx :=
    (mem_image _ _ _).1
      ⟨funMap f fun i => Classical.choose (hx i),
        S.fun_mem f _ fun i => (Classical.choose_spec (hx i)).1, by
        simp only [Hom.map_fun, SetLike.mem_coe]
        exact congr rfl (funext fun i => (Classical.choose_spec (hx i)).2)⟩

@[target, simp]
theorem mem_map {f : M →[L] N} {S : L.Substructure M} {y : N} :
    y ∈ S.map f ↔ ∃ x ∈ S, f x = y := by sorry

@[target]
theorem mem_map_of_mem (f : M →[L] N) {S : L.Substructure M} {x : M} (hx : x ∈ S) : f x ∈ S.map f := by sorry

@[target]
theorem apply_coe_mem_map (f : M →[L] N) (S : L.Substructure M) (x : S) : f x ∈ S.map f := by sorry

@[target]
theorem map_map (g : N →[L] P) (f : M →[L] N) : (S.map f).map g = S.map (g.comp f) := by sorry

@[target]
theorem map_le_iff_le_comap {f : M →[L] N} {S : L.Substructure M} {T : L.Substructure N} :
    S.map f ≤ T ↔ S ≤ T.comap f := by sorry

@[target]
theorem gc_map_comap (f : M →[L] N) : GaloisConnection (map f) (comap f) := by sorry

@[target]
theorem map_le_of_le_comap {T : L.Substructure N} {f : M →[L] N} : S ≤ T.comap f → S.map f ≤ T := by sorry

@[target]
theorem le_comap_of_map_le {T : L.Substructure N} {f : M →[L] N} : S.map f ≤ T → S ≤ T.comap f := by sorry

@[target]

theorem le_comap_map {f : M →[L] N} : S ≤ (S.map f).comap f :=
  (gc_map_comap f).le_u_l _

@[target]
theorem map_comap_le {S : L.Substructure N} {f : M →[L] N} : (S.comap f).map f ≤ S := by sorry

@[target]

theorem monotone_map {f : M →[L] N} : Monotone (map f) :=
  (gc_map_comap f).monotone_l

@[target]
theorem monotone_comap {f : M →[L] N} : Monotone (comap f) := by sorry

@[target, simp]
theorem map_comap_map {f : M →[L] N} : ((S.map f).comap f).map f = S.map f := by sorry

@[target, simp]
theorem comap_map_comap {S : L.Substructure N} {f : M →[L] N} :
    ((S.comap f).map f).comap f = S.comap f := by sorry

@[target]
theorem map_sup (S T : L.Substructure M) (f : M →[L] N) : (S ⊔ T).map f = S.map f ⊔ T.map f := by sorry

@[target]
theorem map_iSup {ι : Sort*} (f : M →[L] N) (s : ι → L.Substructure M) :
    (⨆ i, s i).map f = ⨆ i, (s i).map f := by sorry

@[target]

theorem comap_inf (S T : L.Substructure N) (f : M →[L] N) :
    (S ⊓ T).comap f = S.comap f ⊓ T.comap f :=
  (gc_map_comap f).u_inf

@[target]
theorem comap_iInf {ι : Sort*} (f : M →[L] N) (s : ι → L.Substructure N) :
    (⨅ i, s i).comap f = ⨅ i, (s i).comap f := by sorry

@[target, simp]
theorem map_bot (f : M →[L] N) : (⊥ : L.Substructure M).map f = ⊥ := by sorry

@[target, simp]
theorem comap_top (f : M →[L] N) : (⊤ : L.Substructure N).comap f = ⊤ := by sorry

@[target, simp]
theorem map_id (S : L.Substructure M) : S.map (Hom.id L M) = S := by sorry

@[target]
theorem map_closure (f : M →[L] N) (s : Set M) : (closure L s).map f = closure L (f '' s) := by sorry

@[target, simp]
theorem closure_image (f : M →[L] N) : closure L (f '' s) = map f (closure L s) := by sorry

section GaloisCoinsertion

variable {ι : Type*} {f : M →[L] N}

/-- `map f` and `comap f` form a `GaloisCoinsertion` when `f` is injective. -/
@[target]
def gciMapComap (hf : Function.Injective f) : GaloisCoinsertion (map f) (comap f) :=
  (gc_map_comap f).toGaloisCoinsertion fun S x => by simp [mem_comap, mem_map, hf.eq_iff]

variable (hf : Function.Injective f)
include hf

@[target]
theorem comap_map_eq_of_injective (S : L.Substructure M) : (S.map f).comap f = S := by sorry

@[target]
theorem comap_surjective_of_injective : Function.Surjective (comap f) := by sorry

@[target]
theorem map_injective_of_injective : Function.Injective (map f) := by sorry

@[target]
theorem comap_inf_map_of_injective (S T : L.Substructure M) : (S.map f ⊓ T.map f).comap f = S ⊓ T := by sorry

@[target]
theorem comap_iInf_map_of_injective (S : ι → L.Substructure M) :
    (⨅ i, (S i).map f).comap f = ⨅ i, S i := by sorry

@[target]
theorem comap_sup_map_of_injective (S T : L.Substructure M) : (S.map f ⊔ T.map f).comap f = S ⊔ T := by sorry

@[target]
theorem comap_iSup_map_of_injective (S : ι → L.Substructure M) :
    (⨆ i, (S i).map f).comap f = ⨆ i, S i := by sorry

@[target]
theorem map_le_map_iff_of_injective {S T : L.Substructure M} : S.map f ≤ T.map f ↔ S ≤ T := by sorry

@[target]
theorem map_strictMono_of_injective : StrictMono (map f) := by sorry

end GaloisCoinsertion

section GaloisInsertion

variable {ι : Type*} {f : M →[L] N} (hf : Function.Surjective f)
include hf

/-- `map f` and `comap f` form a `GaloisInsertion` when `f` is surjective. -/
@[target]
def giMapComap : GaloisInsertion (map f) (comap f) :=
  (gc_map_comap f).toGaloisInsertion fun S x h =>
    let ⟨y, hy⟩ := hf x
    mem_map.2 ⟨y, by simp [hy, h]⟩

@[target]

theorem map_comap_eq_of_surjective (S : L.Substructure N) : (S.comap f).map f = S :=
  (giMapComap hf).l_u_eq _

@[target]
theorem map_surjective_of_surjective : Function.Surjective (map f) := by sorry

@[target]
theorem comap_injective_of_surjective : Function.Injective (comap f) := by sorry

@[target]
theorem map_inf_comap_of_surjective (S T : L.Substructure N) :
    (S.comap f ⊓ T.comap f).map f = S ⊓ T := by sorry

@[target]
theorem map_iInf_comap_of_surjective (S : ι → L.Substructure N) :
    (⨅ i, (S i).comap f).map f = ⨅ i, S i := by sorry

@[target]
theorem map_sup_comap_of_surjective (S T : L.Substructure N) :
    (S.comap f ⊔ T.comap f).map f = S ⊔ T := by sorry

@[target]
theorem map_iSup_comap_of_surjective (S : ι → L.Substructure N) :
    (⨆ i, (S i).comap f).map f = ⨆ i, S i := by sorry

@[target]
theorem comap_le_comap_iff_of_surjective {S T : L.Substructure N} : S.comap f ≤ T.comap f ↔ S ≤ T := by sorry

@[target]
theorem comap_strictMono_of_surjective : StrictMono (comap f) := by sorry

end GaloisInsertion

instance inducedStructure {S : L.Substructure M} : L.Structure S where
  funMap {_} f x := ⟨funMap f fun i => x i, S.fun_mem f (fun i => x i) fun i => (x i).2⟩
  RelMap {_} r x := RelMap r fun i => (x i : M)

/-- The natural embedding of an `L.Substructure` of `M` into `M`. -/
def subtype (S : L.Substructure M) : S ↪[L] M where
  toFun := (↑)
  inj' := Subtype.coe_injective

@[simp]
theorem subtype_apply {S : L.Substructure M} {x : S} : subtype S x = x :=
  rfl

@[target]
theorem subtype_injective (S : L.Substructure M): Function.Injective (subtype S) := by sorry

@[target, simp]
theorem coe_subtype : ⇑S.subtype = ((↑) : S → M) := by sorry

@[deprecated (since := "2025-02-18")]
alias coeSubtype := coe_subtype

/-- The equivalence between the maximal substructure of a structure and the structure itself. -/
@[target]
def topEquiv : (⊤ : L.Substructure M) ≃[L] M where
  toFun := subtype ⊤
  invFun m := ⟨m, mem_top m⟩
  left_inv m := by simp
  right_inv _ := rfl

@[target, simp]
theorem coe_topEquiv :
    ⇑(topEquiv : (⊤ : L.Substructure M) ≃[L] M) = ((↑) : (⊤ : L.Substructure M) → M) := by sorry

@[target, simp] theorem realize_boundedFormula_top {α : Type*} {n : ℕ} {φ : L.BoundedFormula α n}
    {v : α → (⊤ : L.Substructure M)} {xs : Fin n → (⊤ : L.Substructure M)} :
    φ.Realize v xs ↔ φ.Realize (((↑) : _ → M) ∘ v) ((↑) ∘ xs) := by
  rw [← StrongHomClass.realize_boundedFormula Substructure.topEquiv φ]
  simp

@[target, simp]
theorem realize_formula_top {α : Type*} {φ : L.Formula α} {v : α → (⊤ : L.Substructure M)} :
    φ.Realize v ↔ φ.Realize (((↑) : (⊤ : L.Substructure M) → M) ∘ v) := by sorry

/-- A dependent version of `Substructure.closure_induction`. -/
@[target, elab_as_elim]
theorem closure_induction' (s : Set M) {p : ∀ x, x ∈ closure L s → Prop}
    (Hs : ∀ (x) (h : x ∈ s), p x (subset_closure h))
    (Hfun : ∀ {n : ℕ} (f : L.Functions n), ClosedUnder f { x | ∃ hx, p x hx }) {x}
    (hx : x ∈ closure L s) : p x hx := by sorry

end Substructure

open Substructure

namespace LHom

variable {L' : Language} [L'.Structure M]

/-- Reduces the language of a substructure along a language hom. -/
@[target]
def substructureReduct (φ : L →ᴸ L') [φ.IsExpansionOn M] :
    L'.Substructure M ↪o L.Substructure M where
  toFun S :=
    { carrier := S
      fun_mem := fun {n} f x hx => by
        have h := S.fun_mem (φ.onFunction f) x hx
        simp only [LHom.map_onFunction, Substructure.mem_carrier] at h
        exact h }
  inj' S T h := by
    simp only [SetLike.coe_set_eq, Substructure.mk.injEq] at h
    exact h
  map_rel_iff' {_ _} := Iff.rfl

variable (φ : L →ᴸ L') [φ.IsExpansionOn M]

@[target, simp] theorem mem_substructureReduct {x : M} {S : L'.Substructure M} :
    x ∈ φ.substructureReduct S ↔ x ∈ S :=
  Iff.rfl

@[target, simp]
theorem coe_substructureReduct {S : L'.Substructure M} : (φ.substructureReduct S : Set M) = ↑S := by sorry

end LHom

namespace Substructure

/-- Turns any substructure containing a constant set `A` into a `L[[A]]`-substructure. -/
def withConstants (S : L.Substructure M) {A : Set M} (h : A ⊆ S) : L[[A]].Substructure M where
  carrier := S
  fun_mem {n} f := by
    obtain f | f := f
    · exact S.fun_mem f
    · cases n
      · exact fun _ _ => h f.2
      · exact isEmptyElim f

variable {A : Set M} {s : Set M} (h : A ⊆ S)

@[target, simp]
theorem mem_withConstants {x : M} : x ∈ S.withConstants h ↔ x ∈ S := by sorry

@[target, simp]
theorem coe_withConstants : (S.withConstants h : Set M) = ↑S := by sorry

@[target, simp]
theorem reduct_withConstants :
    (L.lhomWithConstants A).substructureReduct (S.withConstants h) = S := by sorry

@[target]
theorem subset_closure_withConstants : A ⊆ closure (L[[A]]) s := by sorry

@[target]
theorem closure_withConstants_eq :
    closure (L[[A]]) s =
      (closure L (A ∪ s)).withConstants ((A.subset_union_left).trans subset_closure) := by sorry

end Substructure

namespace Hom

/-- The restriction of a first-order hom to a substructure `s ⊆ M` gives a hom `s → N`. -/
@[simps!]
def domRestrict (f : M →[L] N) (p : L.Substructure M) : p →[L] N :=
  f.comp p.subtype.toHom

/-- A first-order hom `f : M → N` whose values lie in a substructure `p ⊆ N` can be restricted to a
hom `M → p`. -/
@[target, simps] def codRestrict (p : L.Substructure N) (f : M →[L] N) (h : ∀ c, f c ∈ p) : M →[L] p where
  toFun c := ⟨f c, h c⟩
  map_fun' {n} f x := by aesop
  map_rel' {_} R x h := f.map_rel R x h

@[target, simp]
theorem comp_codRestrict (f : M →[L] N) (g : N →[L] P) (p : L.Substructure P) (h : ∀ b, g b ∈ p) :
    ((codRestrict p g h).comp f : M →[L] p) = codRestrict p (g.comp f) fun _ => h _ := by sorry

@[target, simp]
theorem subtype_comp_codRestrict (f : M →[L] N) (p : L.Substructure N) (h : ∀ b, f b ∈ p) :
    p.subtype.toHom.comp (codRestrict p f h) = f := by sorry

/-- The range of a first-order hom `f : M → N` is a submodule of `N`.
See Note [range copy pattern]. -/
def range (f : M →[L] N) : L.Substructure N :=
  (map f ⊤).copy (Set.range f) Set.image_univ.symm

@[target]
theorem range_coe (f : M →[L] N) : (range f : Set N) = Set.range f := by sorry

@[target, simp]
theorem mem_range {f : M →[L] N} {x} : x ∈ range f ↔ ∃ y, f y = x := by sorry

@[target]
theorem range_eq_map (f : M →[L] N) : f.range = map f ⊤ := by sorry

@[target]
theorem mem_range_self (f : M →[L] N) (x : M) : f x ∈ f.range := by sorry

@[simp]
theorem range_id : range (id L M) = ⊤ :=
  SetLike.coe_injective Set.range_id

@[target]
theorem range_comp (f : M →[L] N) (g : N →[L] P) : range (g.comp f : M →[L] P) = map g (range f) := by sorry

@[target]
theorem range_comp_le_range (f : M →[L] N) (g : N →[L] P) : range (g.comp f : M →[L] P) ≤ range g := by sorry

@[target]
theorem range_eq_top {f : M →[L] N} : range f = ⊤ ↔ Function.Surjective f := by sorry

@[target]
theorem range_le_iff_comap {f : M →[L] N} {p : L.Substructure N} : range f ≤ p ↔ comap f p = ⊤ := by sorry

@[target]
theorem map_le_range {f : M →[L] N} {p : L.Substructure M} : map f p ≤ range f := by sorry

/-- The substructure of elements `x : M` such that `f x = g x` -/
def eqLocus (f g : M →[L] N) : Substructure L M where
  carrier := { x : M | f x = g x }
  fun_mem {n} fn x hx := by
    have h : f ∘ x = g ∘ x := by
      ext
      repeat' rw [Function.comp_apply]
      apply hx
    simp [h]

/-- If two `L.Hom`s are equal on a set, then they are equal on its substructure closure. -/
@[target]
theorem eqOn_closure {f g : M →[L] N} {s : Set M} (h : Set.EqOn f g s) :
    Set.EqOn f g (closure L s) := by sorry

@[target]
theorem eq_of_eqOn_top {f g : M →[L] N} (h : Set.EqOn f g (⊤ : Substructure L M)) : f = g := by sorry

variable {s : Set M}

@[target]
theorem eq_of_eqOn_dense (hs : closure L s = ⊤) {f g : M →[L] N} (h : s.EqOn f g) : f = g := by sorry

end Hom

namespace Embedding

/-- The restriction of a first-order embedding to a substructure `s ⊆ M` gives an embedding `s → N`.
-/
def domRestrict (f : M ↪[L] N) (p : L.Substructure M) : p ↪[L] N :=
  f.comp p.subtype

@[target, simp]
theorem domRestrict_apply (f : M ↪[L] N) (p : L.Substructure M) (x : p) : f.domRestrict p x = f x := by sorry

/-- A first-order embedding `f : M → N` whose values lie in a substructure `p ⊆ N` can be restricted
to an embedding `M → p`. -/
def codRestrict (p : L.Substructure N) (f : M ↪[L] N) (h : ∀ c, f c ∈ p) : M ↪[L] p where
  toFun := f.toHom.codRestrict p h
  inj' _ _ ab := f.injective (Subtype.mk_eq_mk.1 ab)
  map_fun' {_} F x := (f.toHom.codRestrict p h).map_fun' F x
  map_rel' {n} r x := by
    simp only
    rw [← p.subtype.map_rel]
    change RelMap r (Hom.comp p.subtype.toHom (f.toHom.codRestrict p h) ∘ x) ↔ _
    rw [Hom.subtype_comp_codRestrict, ← f.map_rel]
    rfl

@[target, simp]
theorem codRestrict_apply (p : L.Substructure N) (f : M ↪[L] N) {h} (x : M) :
    (codRestrict p f h x : N) = f x := by sorry

@[target, simp]
theorem codRestrict_apply' (p : L.Substructure N) (f : M ↪[L] N) {h} (x : M) :
    codRestrict p f h x = ⟨f x, h x⟩ := by sorry

@[target, simp]
theorem comp_codRestrict (f : M ↪[L] N) (g : N ↪[L] P) (p : L.Substructure P) (h : ∀ b, g b ∈ p) :
    ((codRestrict p g h).comp f : M ↪[L] p) = codRestrict p (g.comp f) fun _ => h _ := by sorry

@[target, simp]
theorem subtype_comp_codRestrict (f : M ↪[L] N) (p : L.Substructure N) (h : ∀ b, f b ∈ p) :
    p.subtype.comp (codRestrict p f h) = f := by sorry

/-- The equivalence between a substructure `s` and its image `s.map f.toHom`, where `f` is an
  embedding. -/
noncomputable def substructureEquivMap (f : M ↪[L] N) (s : L.Substructure M) :
    s ≃[L] s.map f.toHom where
  toFun := codRestrict (s.map f.toHom) (f.domRestrict s) fun ⟨m, hm⟩ => ⟨m, hm, rfl⟩
  invFun n := ⟨Classical.choose n.2, (Classical.choose_spec n.2).1⟩
  left_inv := fun ⟨m, hm⟩ =>
    Subtype.mk_eq_mk.2
      (f.injective
        (Classical.choose_spec
            (codRestrict (s.map f.toHom) (f.domRestrict s) (fun ⟨m, hm⟩ => ⟨m, hm, rfl⟩)
                ⟨m, hm⟩).2).2)
  right_inv := fun ⟨_, hn⟩ => Subtype.mk_eq_mk.2 (Classical.choose_spec hn).2
  map_fun' {n} f x := by simp
  map_rel' {n} R x := by simp

@[target, simp] theorem substructureEquivMap_apply (f : M ↪[L] N) (p : L.Substructure M) (x : p) :
    (f.substructureEquivMap p x : N) = f x :=
  rfl

@[target, simp]
theorem subtype_substructureEquivMap (f : M ↪[L] N) (s : L.Substructure M) :
    (subtype _).comp (f.substructureEquivMap s).toEmbedding = f.comp (subtype _) := by sorry

/-- The equivalence between the domain and the range of an embedding `f`. -/
@[simps toEquiv_apply] noncomputable def equivRange (f : M ↪[L] N) : M ≃[L] f.toHom.range where
  toFun := codRestrict f.toHom.range f f.toHom.mem_range_self
  invFun n := Classical.choose n.2
  left_inv m :=
    f.injective (Classical.choose_spec (codRestrict f.toHom.range f f.toHom.mem_range_self m).2)
  right_inv := fun ⟨_, hn⟩ => Subtype.mk_eq_mk.2 (Classical.choose_spec hn)
  map_fun' {n} f x := by simp
  map_rel' {n} R x := by simp

@[target, simp]
theorem equivRange_apply (f : M ↪[L] N) (x : M) : (f.equivRange x : N) = f x := by sorry

@[target, simp]
theorem subtype_equivRange (f : M ↪[L] N) : (subtype _).comp f.equivRange.toEmbedding = f := by sorry

end Embedding

namespace Equiv

@[target]
theorem toHom_range (f : M ≃[L] N) : f.toHom.range = ⊤ := by sorry

end Equiv

namespace Substructure

/-- The embedding associated to an inclusion of substructures. -/
@[target]
def inclusion {S T : L.Substructure M} (h : S ≤ T) : S ↪[L] T :=
  S.subtype.codRestrict _ fun x => h x.2

@[target, simp]
theorem inclusion_self (S : L.Substructure M) : inclusion (le_refl S) = Embedding.refl L S := by sorry

@[target, simp]
theorem coe_inclusion {S T : L.Substructure M} (h : S ≤ T) :
    (inclusion h : S → T) = Set.inclusion h := by sorry

@[target]
theorem range_subtype (S : L.Substructure M) : S.subtype.toHom.range = S := by sorry

@[target, simp]
lemma subtype_comp_inclusion {S T : L.Substructure M} (h : S ≤ T) :
    T.subtype.comp (inclusion h) = S.subtype := by sorry

end Substructure

end Language

end FirstOrder
