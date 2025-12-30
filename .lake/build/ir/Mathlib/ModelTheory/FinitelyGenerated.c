// Lean compiler output
// Module: Mathlib.ModelTheory.FinitelyGenerated
// Imports: Init VerifiedAgora.tagger Mathlib.Data.Set.Finite.Lemmas Mathlib.ModelTheory.Substructures
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_FirstOrder_Language_Substructure_instInhabited__fg(lean_object*, lean_object*, lean_object*);
lean_object* l_FirstOrder_Language_Substructure_instCompleteLattice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_Substructure_instInhabited__fg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_FirstOrder_Language_Substructure_instCompleteLattice(x_1, lean_box(0), x_3);
x_5 = lean_ctor_get(x_4, 4);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_VerifiedAgora_tagger(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_ModelTheory_Substructures(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_ModelTheory_FinitelyGenerated(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_VerifiedAgora_tagger(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_ModelTheory_Substructures(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
