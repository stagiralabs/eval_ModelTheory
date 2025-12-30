// Lean compiler output
// Module: Mathlib.ModelTheory.Quotients
// Imports: Init VerifiedAgora.tagger Mathlib.Data.Fintype.Quotient Mathlib.ModelTheory.Semantics
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
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_quotientStructure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_Pi_tail___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_quotientStructure___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_quotientStructure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_apply_2(x_3, x_4, lean_box(0));
return x_7;
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4___rarg(x_3, x_5, x_6, x_7, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_apply_2(x_3, x_4, lean_box(0));
return x_7;
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6___rarg(x_3, x_5, x_6, x_7, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_internal_panic_unreachable();
}
}
static lean_object* _init_l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___closed__1;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_6);
x_8 = lean_apply_2(x_4, x_6, lean_box(0));
x_9 = lean_alloc_closure((void*)(l_List_Pi_tail___rarg), 3, 1);
lean_closure_set(x_9, 0, x_4);
lean_inc(x_7);
lean_inc(x_2);
x_10 = l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg(x_1, x_2, x_7, x_9);
x_11 = lean_alloc_closure((void*)(l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__5___boxed), 8, 6);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, lean_box(0));
lean_closure_set(x_11, 2, x_6);
lean_closure_set(x_11, 3, x_7);
lean_closure_set(x_11, 4, x_8);
lean_closure_set(x_11, 5, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg(x_1, x_2, x_3, x_4);
x_7 = lean_apply_2(x_6, x_5, lean_box(0));
return x_7;
}
}
static lean_object* _init_l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___closed__1;
lean_inc(x_2);
x_5 = l_List_ofFn___rarg(x_2, x_4);
x_6 = lean_alloc_closure((void*)(l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_3);
x_7 = lean_alloc_closure((void*)(l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_5);
lean_closure_set(x_7, 3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_quotientStructure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_6 = l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg(x_1, x_3, x_5);
x_7 = lean_apply_3(x_2, x_3, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_quotientStructure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FirstOrder_Language_quotientStructure___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__4(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_Pi_cons___at_FirstOrder_Language_quotientStructure___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_quotientStructure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FirstOrder_Language_quotientStructure(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_VerifiedAgora_tagger(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Quotient(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_ModelTheory_Semantics(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_ModelTheory_Quotients(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_VerifiedAgora_tagger(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Quotient(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_ModelTheory_Semantics(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___closed__1 = _init_l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___closed__1();
lean_mark_persistent(l_Quotient_listChoice___at_FirstOrder_Language_quotientStructure___spec__2___rarg___closed__1);
l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___closed__1 = _init_l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___closed__1();
lean_mark_persistent(l_Quotient_finChoice___at_FirstOrder_Language_quotientStructure___spec__1___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
