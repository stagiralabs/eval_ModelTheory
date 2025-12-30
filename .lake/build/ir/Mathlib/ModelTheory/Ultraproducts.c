// Lean compiler output
// Module: Mathlib.ModelTheory.Ultraproducts
// Imports: Init VerifiedAgora.tagger Mathlib.ModelTheory.Quotients Mathlib.Order.Filter.Finite Mathlib.Order.Filter.Germ.Basic Mathlib.Order.Filter.Ultrafilter.Defs
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
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_setoidPrestructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_FirstOrder_Language_quotientStructure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_setoidPrestructure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_setoidPrestructure___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_structure___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_structure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_setoidPrestructure(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_structure(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_setoidPrestructure___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_setoidPrestructure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_FirstOrder_Language_Ultraproduct_setoidPrestructure___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_4(x_1, x_5, x_2, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_setoidPrestructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_FirstOrder_Language_Ultraproduct_setoidPrestructure___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_setoidPrestructure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FirstOrder_Language_Ultraproduct_setoidPrestructure(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_structure___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_alloc_closure((void*)(l_FirstOrder_Language_Ultraproduct_setoidPrestructure___rarg), 5, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_FirstOrder_Language_quotientStructure___rarg), 5, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_structure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_FirstOrder_Language_Ultraproduct_structure___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_Ultraproduct_structure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FirstOrder_Language_Ultraproduct_structure(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_VerifiedAgora_tagger(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_ModelTheory_Quotients(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Germ_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Ultrafilter_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_ModelTheory_Ultraproducts(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_VerifiedAgora_tagger(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_ModelTheory_Quotients(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Germ_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Ultrafilter_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
