// Lean compiler output
// Module: Mathlib.ModelTheory.Complexity
// Imports: Init VerifiedAgora.tagger Mathlib.ModelTheory.Equivalence
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
LEAN_EXPORT lean_object* l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_FirstOrder_Language_BoundedFormula_ex(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_BoundedFormula_toPrenex(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_FirstOrder_Language_BoundedFormula_liftAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_BoundedFormula_toPrenexImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_5)) {
case 0:
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_8 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_inc(x_3);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_3);
x_10 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_4);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
case 1:
{
uint8_t x_11; 
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_5, 0);
lean_dec(x_12);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_13 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_4);
lean_ctor_set(x_13, 2, x_5);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_5, 1);
x_15 = lean_ctor_get(x_5, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
lean_inc(x_3);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_3);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_17, 0, x_3);
lean_ctor_set(x_17, 1, x_4);
lean_ctor_set(x_17, 2, x_16);
return x_17;
}
}
case 2:
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_5);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_5, 0);
lean_dec(x_19);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_20 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_4);
lean_ctor_set(x_20, 2, x_5);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_5, 1);
x_22 = lean_ctor_get(x_5, 2);
x_23 = lean_ctor_get(x_5, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_5);
lean_inc(x_3);
x_24 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_25, 0, x_3);
lean_ctor_set(x_25, 1, x_4);
lean_ctor_set(x_25, 2, x_24);
return x_25;
}
}
case 3:
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_5, 1);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 0:
{
uint8_t x_27; 
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = !lean_is_exclusive(x_5);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_5, 1);
lean_dec(x_30);
x_31 = lean_ctor_get(x_5, 0);
lean_dec(x_31);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_32 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_32, 0, x_3);
lean_ctor_set(x_32, 1, x_4);
lean_ctor_set(x_32, 2, x_5);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_5, 2);
lean_inc(x_33);
lean_dec(x_5);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
x_34 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_34, 0, x_3);
lean_ctor_set(x_34, 1, x_26);
lean_ctor_set(x_34, 2, x_33);
x_35 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_35, 0, x_3);
lean_ctor_set(x_35, 1, x_4);
lean_ctor_set(x_35, 2, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_26);
x_36 = lean_ctor_get(x_5, 2);
lean_inc(x_36);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 x_37 = x_5;
} else {
 lean_dec_ref(x_5);
 x_37 = lean_box(0);
}
lean_inc(x_3);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_37)) {
 x_39 = lean_alloc_ctor(3, 3, 0);
} else {
 x_39 = x_37;
}
lean_ctor_set(x_39, 0, x_3);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_36);
x_40 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_40, 0, x_3);
lean_ctor_set(x_40, 1, x_4);
lean_ctor_set(x_40, 2, x_39);
return x_40;
}
}
case 1:
{
uint8_t x_41; 
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_5);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_5, 1);
lean_dec(x_42);
x_43 = lean_ctor_get(x_5, 0);
lean_dec(x_43);
x_44 = !lean_is_exclusive(x_26);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_26, 0);
lean_dec(x_45);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_46 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_46, 0, x_3);
lean_ctor_set(x_46, 1, x_4);
lean_ctor_set(x_46, 2, x_5);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_26, 1);
x_48 = lean_ctor_get(x_26, 2);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_26);
lean_inc(x_3);
x_49 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_49, 0, x_3);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 2, x_48);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_49);
lean_ctor_set(x_5, 0, x_3);
x_50 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_50, 0, x_3);
lean_ctor_set(x_50, 1, x_4);
lean_ctor_set(x_50, 2, x_5);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_5, 2);
lean_inc(x_51);
lean_dec(x_5);
x_52 = lean_ctor_get(x_26, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_26, 2);
lean_inc(x_53);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 x_54 = x_26;
} else {
 lean_dec_ref(x_26);
 x_54 = lean_box(0);
}
lean_inc(x_3);
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 3, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_3);
lean_ctor_set(x_55, 1, x_52);
lean_ctor_set(x_55, 2, x_53);
lean_inc(x_3);
x_56 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_56, 0, x_3);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_56, 2, x_51);
x_57 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_57, 0, x_3);
lean_ctor_set(x_57, 1, x_4);
lean_ctor_set(x_57, 2, x_56);
return x_57;
}
}
case 2:
{
uint8_t x_58; 
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_5);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_59 = lean_ctor_get(x_5, 1);
lean_dec(x_59);
x_60 = lean_ctor_get(x_5, 0);
lean_dec(x_60);
x_61 = !lean_is_exclusive(x_26);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_26, 0);
lean_dec(x_62);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_63 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_63, 0, x_3);
lean_ctor_set(x_63, 1, x_4);
lean_ctor_set(x_63, 2, x_5);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_26, 1);
x_65 = lean_ctor_get(x_26, 2);
x_66 = lean_ctor_get(x_26, 3);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_26);
lean_inc(x_3);
x_67 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_67, 0, x_3);
lean_ctor_set(x_67, 1, x_64);
lean_ctor_set(x_67, 2, x_65);
lean_ctor_set(x_67, 3, x_66);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_67);
lean_ctor_set(x_5, 0, x_3);
x_68 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_68, 0, x_3);
lean_ctor_set(x_68, 1, x_4);
lean_ctor_set(x_68, 2, x_5);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_69 = lean_ctor_get(x_5, 2);
lean_inc(x_69);
lean_dec(x_5);
x_70 = lean_ctor_get(x_26, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_26, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_26, 3);
lean_inc(x_72);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 lean_ctor_release(x_26, 3);
 x_73 = x_26;
} else {
 lean_dec_ref(x_26);
 x_73 = lean_box(0);
}
lean_inc(x_3);
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(2, 4, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_3);
lean_ctor_set(x_74, 1, x_70);
lean_ctor_set(x_74, 2, x_71);
lean_ctor_set(x_74, 3, x_72);
lean_inc(x_3);
x_75 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_75, 0, x_3);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_75, 2, x_69);
x_76 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_76, 0, x_3);
lean_ctor_set(x_76, 1, x_4);
lean_ctor_set(x_76, 2, x_75);
return x_76;
}
}
case 3:
{
uint8_t x_77; 
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_5);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_5, 1);
lean_dec(x_78);
x_79 = lean_ctor_get(x_5, 0);
lean_dec(x_79);
x_80 = !lean_is_exclusive(x_26);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_26, 0);
lean_dec(x_81);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_82 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_82, 0, x_3);
lean_ctor_set(x_82, 1, x_4);
lean_ctor_set(x_82, 2, x_5);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_26, 1);
x_84 = lean_ctor_get(x_26, 2);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_26);
lean_inc(x_3);
x_85 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_85, 0, x_3);
lean_ctor_set(x_85, 1, x_83);
lean_ctor_set(x_85, 2, x_84);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_85);
lean_ctor_set(x_5, 0, x_3);
x_86 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_86, 0, x_3);
lean_ctor_set(x_86, 1, x_4);
lean_ctor_set(x_86, 2, x_5);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_87 = lean_ctor_get(x_5, 2);
lean_inc(x_87);
lean_dec(x_5);
x_88 = lean_ctor_get(x_26, 1);
lean_inc(x_88);
x_89 = lean_ctor_get(x_26, 2);
lean_inc(x_89);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 x_90 = x_26;
} else {
 lean_dec_ref(x_26);
 x_90 = lean_box(0);
}
lean_inc(x_3);
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(3, 3, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_3);
lean_ctor_set(x_91, 1, x_88);
lean_ctor_set(x_91, 2, x_89);
lean_inc(x_3);
x_92 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_92, 0, x_3);
lean_ctor_set(x_92, 1, x_91);
lean_ctor_set(x_92, 2, x_87);
x_93 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_93, 0, x_3);
lean_ctor_set(x_93, 1, x_4);
lean_ctor_set(x_93, 2, x_92);
return x_93;
}
}
default: 
{
uint8_t x_94; 
x_94 = !lean_is_exclusive(x_5);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_95 = lean_ctor_get(x_5, 2);
x_96 = lean_ctor_get(x_5, 1);
lean_dec(x_96);
x_97 = lean_ctor_get(x_5, 0);
lean_dec(x_97);
x_98 = !lean_is_exclusive(x_26);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_26, 1);
x_100 = lean_ctor_get(x_26, 0);
lean_dec(x_100);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_nat_add(x_3, x_101);
switch (lean_obj_tag(x_99)) {
case 0:
{
uint8_t x_103; 
lean_dec(x_1);
x_103 = !lean_is_exclusive(x_99);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_99, 0);
lean_dec(x_104);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_105 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_105, 0, x_3);
lean_ctor_set(x_105, 1, x_4);
lean_ctor_set(x_105, 2, x_5);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; 
lean_dec(x_99);
x_106 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_106, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_106);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_107 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_107, 0, x_3);
lean_ctor_set(x_107, 1, x_4);
lean_ctor_set(x_107, 2, x_5);
return x_107;
}
}
case 1:
{
uint8_t x_108; 
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_99);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_99, 0);
lean_dec(x_109);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_110 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_110, 0, x_3);
lean_ctor_set(x_110, 1, x_4);
lean_ctor_set(x_110, 2, x_5);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_99, 1);
x_112 = lean_ctor_get(x_99, 2);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_99);
x_113 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_113, 0, x_102);
lean_ctor_set(x_113, 1, x_111);
lean_ctor_set(x_113, 2, x_112);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_113);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_114 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_114, 0, x_3);
lean_ctor_set(x_114, 1, x_4);
lean_ctor_set(x_114, 2, x_5);
return x_114;
}
}
case 2:
{
uint8_t x_115; 
lean_dec(x_1);
x_115 = !lean_is_exclusive(x_99);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_99, 0);
lean_dec(x_116);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_117 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_117, 0, x_3);
lean_ctor_set(x_117, 1, x_4);
lean_ctor_set(x_117, 2, x_5);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_118 = lean_ctor_get(x_99, 1);
x_119 = lean_ctor_get(x_99, 2);
x_120 = lean_ctor_get(x_99, 3);
lean_inc(x_120);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_99);
x_121 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_121, 0, x_102);
lean_ctor_set(x_121, 1, x_118);
lean_ctor_set(x_121, 2, x_119);
lean_ctor_set(x_121, 3, x_120);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_121);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_122 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_122, 0, x_3);
lean_ctor_set(x_122, 1, x_4);
lean_ctor_set(x_122, 2, x_5);
return x_122;
}
}
case 3:
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_99, 2);
lean_inc(x_123);
switch (lean_obj_tag(x_123)) {
case 0:
{
uint8_t x_124; 
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; 
x_125 = lean_ctor_get(x_123, 0);
lean_dec(x_125);
switch (lean_obj_tag(x_95)) {
case 0:
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
lean_free_object(x_123);
lean_free_object(x_26);
lean_free_object(x_5);
lean_dec(x_95);
x_126 = lean_ctor_get(x_99, 1);
lean_inc(x_126);
lean_dec(x_99);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_127 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_101, x_3, x_4);
lean_inc(x_1);
x_128 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_102, x_127, x_126);
x_129 = l_FirstOrder_Language_BoundedFormula_ex(x_1, lean_box(0), x_3, x_128);
lean_dec(x_1);
return x_129;
}
case 1:
{
uint8_t x_130; 
lean_dec(x_1);
x_130 = !lean_is_exclusive(x_99);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_131 = lean_ctor_get(x_99, 1);
x_132 = lean_ctor_get(x_99, 2);
lean_dec(x_132);
x_133 = lean_ctor_get(x_99, 0);
lean_dec(x_133);
x_134 = !lean_is_exclusive(x_95);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_135 = lean_ctor_get(x_95, 1);
x_136 = lean_ctor_get(x_95, 2);
x_137 = lean_ctor_get(x_95, 0);
lean_dec(x_137);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set_tag(x_95, 3);
lean_ctor_set(x_95, 2, x_123);
lean_ctor_set(x_95, 1, x_131);
lean_ctor_set(x_95, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_95);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set_tag(x_99, 1);
lean_ctor_set(x_99, 2, x_136);
lean_ctor_set(x_99, 1, x_135);
lean_ctor_set(x_99, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_99);
lean_ctor_set(x_5, 0, x_3);
x_138 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_138, 0, x_3);
lean_ctor_set(x_138, 1, x_4);
lean_ctor_set(x_138, 2, x_5);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_139 = lean_ctor_get(x_95, 1);
x_140 = lean_ctor_get(x_95, 2);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_95);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
x_141 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_141, 0, x_102);
lean_ctor_set(x_141, 1, x_131);
lean_ctor_set(x_141, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_141);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set_tag(x_99, 1);
lean_ctor_set(x_99, 2, x_140);
lean_ctor_set(x_99, 1, x_139);
lean_ctor_set(x_99, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_99);
lean_ctor_set(x_5, 0, x_3);
x_142 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_142, 0, x_3);
lean_ctor_set(x_142, 1, x_4);
lean_ctor_set(x_142, 2, x_5);
return x_142;
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_143 = lean_ctor_get(x_99, 1);
lean_inc(x_143);
lean_dec(x_99);
x_144 = lean_ctor_get(x_95, 1);
lean_inc(x_144);
x_145 = lean_ctor_get(x_95, 2);
lean_inc(x_145);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_146 = x_95;
} else {
 lean_dec_ref(x_95);
 x_146 = lean_box(0);
}
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
if (lean_is_scalar(x_146)) {
 x_147 = lean_alloc_ctor(3, 3, 0);
} else {
 x_147 = x_146;
 lean_ctor_set_tag(x_147, 3);
}
lean_ctor_set(x_147, 0, x_102);
lean_ctor_set(x_147, 1, x_143);
lean_ctor_set(x_147, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_147);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
x_148 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_148, 0, x_3);
lean_ctor_set(x_148, 1, x_144);
lean_ctor_set(x_148, 2, x_145);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_148);
lean_ctor_set(x_5, 0, x_3);
x_149 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_149, 0, x_3);
lean_ctor_set(x_149, 1, x_4);
lean_ctor_set(x_149, 2, x_5);
return x_149;
}
}
case 2:
{
uint8_t x_150; 
lean_dec(x_1);
x_150 = !lean_is_exclusive(x_99);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_151 = lean_ctor_get(x_99, 2);
lean_dec(x_151);
x_152 = lean_ctor_get(x_99, 0);
lean_dec(x_152);
x_153 = !lean_is_exclusive(x_95);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; 
x_154 = lean_ctor_get(x_95, 0);
lean_dec(x_154);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_95, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_155 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_155, 0, x_3);
lean_ctor_set(x_155, 1, x_4);
lean_ctor_set(x_155, 2, x_5);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_156 = lean_ctor_get(x_95, 1);
x_157 = lean_ctor_get(x_95, 2);
x_158 = lean_ctor_get(x_95, 3);
lean_inc(x_158);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_95);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
x_159 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_159, 0, x_3);
lean_ctor_set(x_159, 1, x_156);
lean_ctor_set(x_159, 2, x_157);
lean_ctor_set(x_159, 3, x_158);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_159);
lean_ctor_set(x_5, 0, x_3);
x_160 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_160, 0, x_3);
lean_ctor_set(x_160, 1, x_4);
lean_ctor_set(x_160, 2, x_5);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_161 = lean_ctor_get(x_99, 1);
lean_inc(x_161);
lean_dec(x_99);
x_162 = lean_ctor_get(x_95, 1);
lean_inc(x_162);
x_163 = lean_ctor_get(x_95, 2);
lean_inc(x_163);
x_164 = lean_ctor_get(x_95, 3);
lean_inc(x_164);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 lean_ctor_release(x_95, 3);
 x_165 = x_95;
} else {
 lean_dec_ref(x_95);
 x_165 = lean_box(0);
}
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
x_166 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_166, 0, x_102);
lean_ctor_set(x_166, 1, x_161);
lean_ctor_set(x_166, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_166);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_165)) {
 x_167 = lean_alloc_ctor(2, 4, 0);
} else {
 x_167 = x_165;
}
lean_ctor_set(x_167, 0, x_3);
lean_ctor_set(x_167, 1, x_162);
lean_ctor_set(x_167, 2, x_163);
lean_ctor_set(x_167, 3, x_164);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_167);
lean_ctor_set(x_5, 0, x_3);
x_168 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_168, 0, x_3);
lean_ctor_set(x_168, 1, x_4);
lean_ctor_set(x_168, 2, x_5);
return x_168;
}
}
case 3:
{
uint8_t x_169; 
lean_dec(x_1);
x_169 = !lean_is_exclusive(x_99);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_170 = lean_ctor_get(x_99, 1);
x_171 = lean_ctor_get(x_99, 2);
lean_dec(x_171);
x_172 = lean_ctor_get(x_99, 0);
lean_dec(x_172);
x_173 = !lean_is_exclusive(x_95);
if (x_173 == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_174 = lean_ctor_get(x_95, 1);
x_175 = lean_ctor_get(x_95, 2);
x_176 = lean_ctor_get(x_95, 0);
lean_dec(x_176);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_95, 2, x_123);
lean_ctor_set(x_95, 1, x_170);
lean_ctor_set(x_95, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_95);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_99, 2, x_175);
lean_ctor_set(x_99, 1, x_174);
lean_ctor_set(x_99, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_99);
lean_ctor_set(x_5, 0, x_3);
x_177 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_177, 0, x_3);
lean_ctor_set(x_177, 1, x_4);
lean_ctor_set(x_177, 2, x_5);
return x_177;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_178 = lean_ctor_get(x_95, 1);
x_179 = lean_ctor_get(x_95, 2);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_95);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
x_180 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_180, 0, x_102);
lean_ctor_set(x_180, 1, x_170);
lean_ctor_set(x_180, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_180);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_99, 2, x_179);
lean_ctor_set(x_99, 1, x_178);
lean_ctor_set(x_99, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_99);
lean_ctor_set(x_5, 0, x_3);
x_181 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_181, 0, x_3);
lean_ctor_set(x_181, 1, x_4);
lean_ctor_set(x_181, 2, x_5);
return x_181;
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_182 = lean_ctor_get(x_99, 1);
lean_inc(x_182);
lean_dec(x_99);
x_183 = lean_ctor_get(x_95, 1);
lean_inc(x_183);
x_184 = lean_ctor_get(x_95, 2);
lean_inc(x_184);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_185 = x_95;
} else {
 lean_dec_ref(x_95);
 x_185 = lean_box(0);
}
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(3, 3, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_102);
lean_ctor_set(x_186, 1, x_182);
lean_ctor_set(x_186, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_186);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
x_187 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_187, 0, x_3);
lean_ctor_set(x_187, 1, x_183);
lean_ctor_set(x_187, 2, x_184);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_187);
lean_ctor_set(x_5, 0, x_3);
x_188 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_188, 0, x_3);
lean_ctor_set(x_188, 1, x_4);
lean_ctor_set(x_188, 2, x_5);
return x_188;
}
}
default: 
{
uint8_t x_189; 
lean_dec(x_1);
x_189 = !lean_is_exclusive(x_99);
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_190 = lean_ctor_get(x_99, 2);
lean_dec(x_190);
x_191 = lean_ctor_get(x_99, 0);
lean_dec(x_191);
x_192 = !lean_is_exclusive(x_95);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_95, 1);
x_194 = lean_ctor_get(x_95, 0);
lean_dec(x_194);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_95, 1, x_99);
lean_ctor_set(x_95, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_193);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_26);
lean_ctor_set(x_5, 1, x_95);
lean_ctor_set(x_5, 0, x_3);
x_195 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_195, 0, x_3);
lean_ctor_set(x_195, 1, x_4);
lean_ctor_set(x_195, 2, x_5);
return x_195;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_95, 1);
lean_inc(x_196);
lean_dec(x_95);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
x_197 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_197, 0, x_3);
lean_ctor_set(x_197, 1, x_99);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_196);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_26);
lean_ctor_set(x_5, 1, x_197);
lean_ctor_set(x_5, 0, x_3);
x_198 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_198, 0, x_3);
lean_ctor_set(x_198, 1, x_4);
lean_ctor_set(x_198, 2, x_5);
return x_198;
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_199 = lean_ctor_get(x_99, 1);
lean_inc(x_199);
lean_dec(x_99);
x_200 = lean_ctor_get(x_95, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_201 = x_95;
} else {
 lean_dec_ref(x_95);
 x_201 = lean_box(0);
}
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
x_202 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_202, 0, x_102);
lean_ctor_set(x_202, 1, x_199);
lean_ctor_set(x_202, 2, x_123);
lean_inc(x_3);
if (lean_is_scalar(x_201)) {
 x_203 = lean_alloc_ctor(4, 2, 0);
} else {
 x_203 = x_201;
}
lean_ctor_set(x_203, 0, x_3);
lean_ctor_set(x_203, 1, x_202);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_200);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_26);
lean_ctor_set(x_5, 1, x_203);
lean_ctor_set(x_5, 0, x_3);
x_204 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_204, 0, x_3);
lean_ctor_set(x_204, 1, x_4);
lean_ctor_set(x_204, 2, x_5);
return x_204;
}
}
}
}
else
{
lean_dec(x_123);
switch (lean_obj_tag(x_95)) {
case 0:
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
lean_free_object(x_26);
lean_free_object(x_5);
lean_dec(x_95);
x_205 = lean_ctor_get(x_99, 1);
lean_inc(x_205);
lean_dec(x_99);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_206 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_101, x_3, x_4);
lean_inc(x_1);
x_207 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_102, x_206, x_205);
x_208 = l_FirstOrder_Language_BoundedFormula_ex(x_1, lean_box(0), x_3, x_207);
lean_dec(x_1);
return x_208;
}
case 1:
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_dec(x_1);
x_209 = lean_ctor_get(x_99, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 x_210 = x_99;
} else {
 lean_dec_ref(x_99);
 x_210 = lean_box(0);
}
x_211 = lean_ctor_get(x_95, 1);
lean_inc(x_211);
x_212 = lean_ctor_get(x_95, 2);
lean_inc(x_212);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_213 = x_95;
} else {
 lean_dec_ref(x_95);
 x_213 = lean_box(0);
}
lean_inc(x_102);
x_214 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_214, 0, x_102);
if (lean_is_scalar(x_213)) {
 x_215 = lean_alloc_ctor(3, 3, 0);
} else {
 x_215 = x_213;
 lean_ctor_set_tag(x_215, 3);
}
lean_ctor_set(x_215, 0, x_102);
lean_ctor_set(x_215, 1, x_209);
lean_ctor_set(x_215, 2, x_214);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_215);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_210)) {
 x_216 = lean_alloc_ctor(1, 3, 0);
} else {
 x_216 = x_210;
 lean_ctor_set_tag(x_216, 1);
}
lean_ctor_set(x_216, 0, x_3);
lean_ctor_set(x_216, 1, x_211);
lean_ctor_set(x_216, 2, x_212);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_216);
lean_ctor_set(x_5, 0, x_3);
x_217 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_217, 0, x_3);
lean_ctor_set(x_217, 1, x_4);
lean_ctor_set(x_217, 2, x_5);
return x_217;
}
case 2:
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_1);
x_218 = lean_ctor_get(x_99, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 x_219 = x_99;
} else {
 lean_dec_ref(x_99);
 x_219 = lean_box(0);
}
x_220 = lean_ctor_get(x_95, 1);
lean_inc(x_220);
x_221 = lean_ctor_get(x_95, 2);
lean_inc(x_221);
x_222 = lean_ctor_get(x_95, 3);
lean_inc(x_222);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 lean_ctor_release(x_95, 3);
 x_223 = x_95;
} else {
 lean_dec_ref(x_95);
 x_223 = lean_box(0);
}
lean_inc(x_102);
x_224 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_224, 0, x_102);
if (lean_is_scalar(x_219)) {
 x_225 = lean_alloc_ctor(3, 3, 0);
} else {
 x_225 = x_219;
}
lean_ctor_set(x_225, 0, x_102);
lean_ctor_set(x_225, 1, x_218);
lean_ctor_set(x_225, 2, x_224);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_225);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_223)) {
 x_226 = lean_alloc_ctor(2, 4, 0);
} else {
 x_226 = x_223;
}
lean_ctor_set(x_226, 0, x_3);
lean_ctor_set(x_226, 1, x_220);
lean_ctor_set(x_226, 2, x_221);
lean_ctor_set(x_226, 3, x_222);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_226);
lean_ctor_set(x_5, 0, x_3);
x_227 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_227, 0, x_3);
lean_ctor_set(x_227, 1, x_4);
lean_ctor_set(x_227, 2, x_5);
return x_227;
}
case 3:
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_1);
x_228 = lean_ctor_get(x_99, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 x_229 = x_99;
} else {
 lean_dec_ref(x_99);
 x_229 = lean_box(0);
}
x_230 = lean_ctor_get(x_95, 1);
lean_inc(x_230);
x_231 = lean_ctor_get(x_95, 2);
lean_inc(x_231);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_232 = x_95;
} else {
 lean_dec_ref(x_95);
 x_232 = lean_box(0);
}
lean_inc(x_102);
x_233 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_233, 0, x_102);
if (lean_is_scalar(x_232)) {
 x_234 = lean_alloc_ctor(3, 3, 0);
} else {
 x_234 = x_232;
}
lean_ctor_set(x_234, 0, x_102);
lean_ctor_set(x_234, 1, x_228);
lean_ctor_set(x_234, 2, x_233);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_234);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_229)) {
 x_235 = lean_alloc_ctor(3, 3, 0);
} else {
 x_235 = x_229;
}
lean_ctor_set(x_235, 0, x_3);
lean_ctor_set(x_235, 1, x_230);
lean_ctor_set(x_235, 2, x_231);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_235);
lean_ctor_set(x_5, 0, x_3);
x_236 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_236, 0, x_3);
lean_ctor_set(x_236, 1, x_4);
lean_ctor_set(x_236, 2, x_5);
return x_236;
}
default: 
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_1);
x_237 = lean_ctor_get(x_99, 1);
lean_inc(x_237);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 x_238 = x_99;
} else {
 lean_dec_ref(x_99);
 x_238 = lean_box(0);
}
x_239 = lean_ctor_get(x_95, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_240 = x_95;
} else {
 lean_dec_ref(x_95);
 x_240 = lean_box(0);
}
lean_inc(x_102);
x_241 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_241, 0, x_102);
if (lean_is_scalar(x_238)) {
 x_242 = lean_alloc_ctor(3, 3, 0);
} else {
 x_242 = x_238;
}
lean_ctor_set(x_242, 0, x_102);
lean_ctor_set(x_242, 1, x_237);
lean_ctor_set(x_242, 2, x_241);
lean_inc(x_3);
if (lean_is_scalar(x_240)) {
 x_243 = lean_alloc_ctor(4, 2, 0);
} else {
 x_243 = x_240;
}
lean_ctor_set(x_243, 0, x_3);
lean_ctor_set(x_243, 1, x_242);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_239);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_26);
lean_ctor_set(x_5, 1, x_243);
lean_ctor_set(x_5, 0, x_3);
x_244 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_244, 0, x_3);
lean_ctor_set(x_244, 1, x_4);
lean_ctor_set(x_244, 2, x_5);
return x_244;
}
}
}
}
case 1:
{
uint8_t x_245; 
lean_dec(x_1);
x_245 = !lean_is_exclusive(x_99);
if (x_245 == 0)
{
lean_object* x_246; lean_object* x_247; uint8_t x_248; 
x_246 = lean_ctor_get(x_99, 2);
lean_dec(x_246);
x_247 = lean_ctor_get(x_99, 0);
lean_dec(x_247);
x_248 = !lean_is_exclusive(x_123);
if (x_248 == 0)
{
lean_object* x_249; lean_object* x_250; 
x_249 = lean_ctor_get(x_123, 0);
lean_dec(x_249);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_250 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_250, 0, x_3);
lean_ctor_set(x_250, 1, x_4);
lean_ctor_set(x_250, 2, x_5);
return x_250;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
x_251 = lean_ctor_get(x_123, 1);
x_252 = lean_ctor_get(x_123, 2);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_123);
lean_inc(x_102);
x_253 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_253, 0, x_102);
lean_ctor_set(x_253, 1, x_251);
lean_ctor_set(x_253, 2, x_252);
lean_ctor_set(x_99, 2, x_253);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_254 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_254, 0, x_3);
lean_ctor_set(x_254, 1, x_4);
lean_ctor_set(x_254, 2, x_5);
return x_254;
}
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_255 = lean_ctor_get(x_99, 1);
lean_inc(x_255);
lean_dec(x_99);
x_256 = lean_ctor_get(x_123, 1);
lean_inc(x_256);
x_257 = lean_ctor_get(x_123, 2);
lean_inc(x_257);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 lean_ctor_release(x_123, 2);
 x_258 = x_123;
} else {
 lean_dec_ref(x_123);
 x_258 = lean_box(0);
}
lean_inc(x_102);
if (lean_is_scalar(x_258)) {
 x_259 = lean_alloc_ctor(1, 3, 0);
} else {
 x_259 = x_258;
}
lean_ctor_set(x_259, 0, x_102);
lean_ctor_set(x_259, 1, x_256);
lean_ctor_set(x_259, 2, x_257);
x_260 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_260, 0, x_102);
lean_ctor_set(x_260, 1, x_255);
lean_ctor_set(x_260, 2, x_259);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_260);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_261 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_261, 0, x_3);
lean_ctor_set(x_261, 1, x_4);
lean_ctor_set(x_261, 2, x_5);
return x_261;
}
}
case 2:
{
uint8_t x_262; 
lean_dec(x_1);
x_262 = !lean_is_exclusive(x_99);
if (x_262 == 0)
{
lean_object* x_263; lean_object* x_264; uint8_t x_265; 
x_263 = lean_ctor_get(x_99, 2);
lean_dec(x_263);
x_264 = lean_ctor_get(x_99, 0);
lean_dec(x_264);
x_265 = !lean_is_exclusive(x_123);
if (x_265 == 0)
{
lean_object* x_266; lean_object* x_267; 
x_266 = lean_ctor_get(x_123, 0);
lean_dec(x_266);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_267 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_267, 0, x_3);
lean_ctor_set(x_267, 1, x_4);
lean_ctor_set(x_267, 2, x_5);
return x_267;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_268 = lean_ctor_get(x_123, 1);
x_269 = lean_ctor_get(x_123, 2);
x_270 = lean_ctor_get(x_123, 3);
lean_inc(x_270);
lean_inc(x_269);
lean_inc(x_268);
lean_dec(x_123);
lean_inc(x_102);
x_271 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_271, 0, x_102);
lean_ctor_set(x_271, 1, x_268);
lean_ctor_set(x_271, 2, x_269);
lean_ctor_set(x_271, 3, x_270);
lean_ctor_set(x_99, 2, x_271);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_272 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_272, 0, x_3);
lean_ctor_set(x_272, 1, x_4);
lean_ctor_set(x_272, 2, x_5);
return x_272;
}
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_273 = lean_ctor_get(x_99, 1);
lean_inc(x_273);
lean_dec(x_99);
x_274 = lean_ctor_get(x_123, 1);
lean_inc(x_274);
x_275 = lean_ctor_get(x_123, 2);
lean_inc(x_275);
x_276 = lean_ctor_get(x_123, 3);
lean_inc(x_276);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 lean_ctor_release(x_123, 2);
 lean_ctor_release(x_123, 3);
 x_277 = x_123;
} else {
 lean_dec_ref(x_123);
 x_277 = lean_box(0);
}
lean_inc(x_102);
if (lean_is_scalar(x_277)) {
 x_278 = lean_alloc_ctor(2, 4, 0);
} else {
 x_278 = x_277;
}
lean_ctor_set(x_278, 0, x_102);
lean_ctor_set(x_278, 1, x_274);
lean_ctor_set(x_278, 2, x_275);
lean_ctor_set(x_278, 3, x_276);
x_279 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_279, 0, x_102);
lean_ctor_set(x_279, 1, x_273);
lean_ctor_set(x_279, 2, x_278);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_279);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_280 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_280, 0, x_3);
lean_ctor_set(x_280, 1, x_4);
lean_ctor_set(x_280, 2, x_5);
return x_280;
}
}
case 3:
{
uint8_t x_281; 
lean_dec(x_1);
x_281 = !lean_is_exclusive(x_99);
if (x_281 == 0)
{
lean_object* x_282; lean_object* x_283; uint8_t x_284; 
x_282 = lean_ctor_get(x_99, 2);
lean_dec(x_282);
x_283 = lean_ctor_get(x_99, 0);
lean_dec(x_283);
x_284 = !lean_is_exclusive(x_123);
if (x_284 == 0)
{
lean_object* x_285; lean_object* x_286; 
x_285 = lean_ctor_get(x_123, 0);
lean_dec(x_285);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_286 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_286, 0, x_3);
lean_ctor_set(x_286, 1, x_4);
lean_ctor_set(x_286, 2, x_5);
return x_286;
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_287 = lean_ctor_get(x_123, 1);
x_288 = lean_ctor_get(x_123, 2);
lean_inc(x_288);
lean_inc(x_287);
lean_dec(x_123);
lean_inc(x_102);
x_289 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_289, 0, x_102);
lean_ctor_set(x_289, 1, x_287);
lean_ctor_set(x_289, 2, x_288);
lean_ctor_set(x_99, 2, x_289);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_290 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_290, 0, x_3);
lean_ctor_set(x_290, 1, x_4);
lean_ctor_set(x_290, 2, x_5);
return x_290;
}
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; 
x_291 = lean_ctor_get(x_99, 1);
lean_inc(x_291);
lean_dec(x_99);
x_292 = lean_ctor_get(x_123, 1);
lean_inc(x_292);
x_293 = lean_ctor_get(x_123, 2);
lean_inc(x_293);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 lean_ctor_release(x_123, 2);
 x_294 = x_123;
} else {
 lean_dec_ref(x_123);
 x_294 = lean_box(0);
}
lean_inc(x_102);
if (lean_is_scalar(x_294)) {
 x_295 = lean_alloc_ctor(3, 3, 0);
} else {
 x_295 = x_294;
}
lean_ctor_set(x_295, 0, x_102);
lean_ctor_set(x_295, 1, x_292);
lean_ctor_set(x_295, 2, x_293);
x_296 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_296, 0, x_102);
lean_ctor_set(x_296, 1, x_291);
lean_ctor_set(x_296, 2, x_295);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_296);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_297 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_297, 0, x_3);
lean_ctor_set(x_297, 1, x_4);
lean_ctor_set(x_297, 2, x_5);
return x_297;
}
}
default: 
{
uint8_t x_298; 
lean_dec(x_1);
x_298 = !lean_is_exclusive(x_99);
if (x_298 == 0)
{
lean_object* x_299; lean_object* x_300; uint8_t x_301; 
x_299 = lean_ctor_get(x_99, 2);
lean_dec(x_299);
x_300 = lean_ctor_get(x_99, 0);
lean_dec(x_300);
x_301 = !lean_is_exclusive(x_123);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; 
x_302 = lean_ctor_get(x_123, 0);
lean_dec(x_302);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_303 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_303, 0, x_3);
lean_ctor_set(x_303, 1, x_4);
lean_ctor_set(x_303, 2, x_5);
return x_303;
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_304 = lean_ctor_get(x_123, 1);
lean_inc(x_304);
lean_dec(x_123);
lean_inc(x_102);
x_305 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_305, 0, x_102);
lean_ctor_set(x_305, 1, x_304);
lean_ctor_set(x_99, 2, x_305);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_306 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_306, 0, x_3);
lean_ctor_set(x_306, 1, x_4);
lean_ctor_set(x_306, 2, x_5);
return x_306;
}
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
x_307 = lean_ctor_get(x_99, 1);
lean_inc(x_307);
lean_dec(x_99);
x_308 = lean_ctor_get(x_123, 1);
lean_inc(x_308);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_309 = x_123;
} else {
 lean_dec_ref(x_123);
 x_309 = lean_box(0);
}
lean_inc(x_102);
if (lean_is_scalar(x_309)) {
 x_310 = lean_alloc_ctor(4, 2, 0);
} else {
 x_310 = x_309;
}
lean_ctor_set(x_310, 0, x_102);
lean_ctor_set(x_310, 1, x_308);
x_311 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_311, 0, x_102);
lean_ctor_set(x_311, 1, x_307);
lean_ctor_set(x_311, 2, x_310);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_311);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_312 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_312, 0, x_3);
lean_ctor_set(x_312, 1, x_4);
lean_ctor_set(x_312, 2, x_5);
return x_312;
}
}
}
}
default: 
{
uint8_t x_313; 
lean_dec(x_1);
x_313 = !lean_is_exclusive(x_99);
if (x_313 == 0)
{
lean_object* x_314; lean_object* x_315; 
x_314 = lean_ctor_get(x_99, 0);
lean_dec(x_314);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_315 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_315, 0, x_3);
lean_ctor_set(x_315, 1, x_4);
lean_ctor_set(x_315, 2, x_5);
return x_315;
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
x_316 = lean_ctor_get(x_99, 1);
lean_inc(x_316);
lean_dec(x_99);
x_317 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_317, 0, x_102);
lean_ctor_set(x_317, 1, x_316);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_317);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_5, 0, x_3);
x_318 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_318, 0, x_3);
lean_ctor_set(x_318, 1, x_4);
lean_ctor_set(x_318, 2, x_5);
return x_318;
}
}
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_319 = lean_ctor_get(x_26, 1);
lean_inc(x_319);
lean_dec(x_26);
x_320 = lean_unsigned_to_nat(1u);
x_321 = lean_nat_add(x_3, x_320);
switch (lean_obj_tag(x_319)) {
case 0:
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
lean_dec(x_1);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 x_322 = x_319;
} else {
 lean_dec_ref(x_319);
 x_322 = lean_box(0);
}
if (lean_is_scalar(x_322)) {
 x_323 = lean_alloc_ctor(0, 1, 0);
} else {
 x_323 = x_322;
}
lean_ctor_set(x_323, 0, x_321);
lean_inc(x_3);
x_324 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_324, 0, x_3);
lean_ctor_set(x_324, 1, x_323);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_324);
lean_ctor_set(x_5, 0, x_3);
x_325 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_325, 0, x_3);
lean_ctor_set(x_325, 1, x_4);
lean_ctor_set(x_325, 2, x_5);
return x_325;
}
case 1:
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
lean_dec(x_1);
x_326 = lean_ctor_get(x_319, 1);
lean_inc(x_326);
x_327 = lean_ctor_get(x_319, 2);
lean_inc(x_327);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 x_328 = x_319;
} else {
 lean_dec_ref(x_319);
 x_328 = lean_box(0);
}
if (lean_is_scalar(x_328)) {
 x_329 = lean_alloc_ctor(1, 3, 0);
} else {
 x_329 = x_328;
}
lean_ctor_set(x_329, 0, x_321);
lean_ctor_set(x_329, 1, x_326);
lean_ctor_set(x_329, 2, x_327);
lean_inc(x_3);
x_330 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_330, 0, x_3);
lean_ctor_set(x_330, 1, x_329);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_330);
lean_ctor_set(x_5, 0, x_3);
x_331 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_331, 0, x_3);
lean_ctor_set(x_331, 1, x_4);
lean_ctor_set(x_331, 2, x_5);
return x_331;
}
case 2:
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_1);
x_332 = lean_ctor_get(x_319, 1);
lean_inc(x_332);
x_333 = lean_ctor_get(x_319, 2);
lean_inc(x_333);
x_334 = lean_ctor_get(x_319, 3);
lean_inc(x_334);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 lean_ctor_release(x_319, 3);
 x_335 = x_319;
} else {
 lean_dec_ref(x_319);
 x_335 = lean_box(0);
}
if (lean_is_scalar(x_335)) {
 x_336 = lean_alloc_ctor(2, 4, 0);
} else {
 x_336 = x_335;
}
lean_ctor_set(x_336, 0, x_321);
lean_ctor_set(x_336, 1, x_332);
lean_ctor_set(x_336, 2, x_333);
lean_ctor_set(x_336, 3, x_334);
lean_inc(x_3);
x_337 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_337, 0, x_3);
lean_ctor_set(x_337, 1, x_336);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_337);
lean_ctor_set(x_5, 0, x_3);
x_338 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_338, 0, x_3);
lean_ctor_set(x_338, 1, x_4);
lean_ctor_set(x_338, 2, x_5);
return x_338;
}
case 3:
{
lean_object* x_339; 
x_339 = lean_ctor_get(x_319, 2);
lean_inc(x_339);
switch (lean_obj_tag(x_339)) {
case 0:
{
lean_object* x_340; 
if (lean_is_exclusive(x_339)) {
 lean_ctor_release(x_339, 0);
 x_340 = x_339;
} else {
 lean_dec_ref(x_339);
 x_340 = lean_box(0);
}
switch (lean_obj_tag(x_95)) {
case 0:
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
lean_dec(x_340);
lean_free_object(x_5);
lean_dec(x_95);
x_341 = lean_ctor_get(x_319, 1);
lean_inc(x_341);
lean_dec(x_319);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_342 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_320, x_3, x_4);
lean_inc(x_1);
x_343 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_321, x_342, x_341);
x_344 = l_FirstOrder_Language_BoundedFormula_ex(x_1, lean_box(0), x_3, x_343);
lean_dec(x_1);
return x_344;
}
case 1:
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; 
lean_dec(x_1);
x_345 = lean_ctor_get(x_319, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 x_346 = x_319;
} else {
 lean_dec_ref(x_319);
 x_346 = lean_box(0);
}
x_347 = lean_ctor_get(x_95, 1);
lean_inc(x_347);
x_348 = lean_ctor_get(x_95, 2);
lean_inc(x_348);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_349 = x_95;
} else {
 lean_dec_ref(x_95);
 x_349 = lean_box(0);
}
lean_inc(x_321);
if (lean_is_scalar(x_340)) {
 x_350 = lean_alloc_ctor(0, 1, 0);
} else {
 x_350 = x_340;
}
lean_ctor_set(x_350, 0, x_321);
if (lean_is_scalar(x_349)) {
 x_351 = lean_alloc_ctor(3, 3, 0);
} else {
 x_351 = x_349;
 lean_ctor_set_tag(x_351, 3);
}
lean_ctor_set(x_351, 0, x_321);
lean_ctor_set(x_351, 1, x_345);
lean_ctor_set(x_351, 2, x_350);
lean_inc(x_3);
x_352 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_352, 0, x_3);
lean_ctor_set(x_352, 1, x_351);
lean_inc(x_3);
if (lean_is_scalar(x_346)) {
 x_353 = lean_alloc_ctor(1, 3, 0);
} else {
 x_353 = x_346;
 lean_ctor_set_tag(x_353, 1);
}
lean_ctor_set(x_353, 0, x_3);
lean_ctor_set(x_353, 1, x_347);
lean_ctor_set(x_353, 2, x_348);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_353);
lean_ctor_set(x_5, 1, x_352);
lean_ctor_set(x_5, 0, x_3);
x_354 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_354, 0, x_3);
lean_ctor_set(x_354, 1, x_4);
lean_ctor_set(x_354, 2, x_5);
return x_354;
}
case 2:
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; 
lean_dec(x_1);
x_355 = lean_ctor_get(x_319, 1);
lean_inc(x_355);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 x_356 = x_319;
} else {
 lean_dec_ref(x_319);
 x_356 = lean_box(0);
}
x_357 = lean_ctor_get(x_95, 1);
lean_inc(x_357);
x_358 = lean_ctor_get(x_95, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_95, 3);
lean_inc(x_359);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 lean_ctor_release(x_95, 3);
 x_360 = x_95;
} else {
 lean_dec_ref(x_95);
 x_360 = lean_box(0);
}
lean_inc(x_321);
if (lean_is_scalar(x_340)) {
 x_361 = lean_alloc_ctor(0, 1, 0);
} else {
 x_361 = x_340;
}
lean_ctor_set(x_361, 0, x_321);
if (lean_is_scalar(x_356)) {
 x_362 = lean_alloc_ctor(3, 3, 0);
} else {
 x_362 = x_356;
}
lean_ctor_set(x_362, 0, x_321);
lean_ctor_set(x_362, 1, x_355);
lean_ctor_set(x_362, 2, x_361);
lean_inc(x_3);
x_363 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_363, 0, x_3);
lean_ctor_set(x_363, 1, x_362);
lean_inc(x_3);
if (lean_is_scalar(x_360)) {
 x_364 = lean_alloc_ctor(2, 4, 0);
} else {
 x_364 = x_360;
}
lean_ctor_set(x_364, 0, x_3);
lean_ctor_set(x_364, 1, x_357);
lean_ctor_set(x_364, 2, x_358);
lean_ctor_set(x_364, 3, x_359);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_364);
lean_ctor_set(x_5, 1, x_363);
lean_ctor_set(x_5, 0, x_3);
x_365 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_365, 0, x_3);
lean_ctor_set(x_365, 1, x_4);
lean_ctor_set(x_365, 2, x_5);
return x_365;
}
case 3:
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; 
lean_dec(x_1);
x_366 = lean_ctor_get(x_319, 1);
lean_inc(x_366);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 x_367 = x_319;
} else {
 lean_dec_ref(x_319);
 x_367 = lean_box(0);
}
x_368 = lean_ctor_get(x_95, 1);
lean_inc(x_368);
x_369 = lean_ctor_get(x_95, 2);
lean_inc(x_369);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_370 = x_95;
} else {
 lean_dec_ref(x_95);
 x_370 = lean_box(0);
}
lean_inc(x_321);
if (lean_is_scalar(x_340)) {
 x_371 = lean_alloc_ctor(0, 1, 0);
} else {
 x_371 = x_340;
}
lean_ctor_set(x_371, 0, x_321);
if (lean_is_scalar(x_370)) {
 x_372 = lean_alloc_ctor(3, 3, 0);
} else {
 x_372 = x_370;
}
lean_ctor_set(x_372, 0, x_321);
lean_ctor_set(x_372, 1, x_366);
lean_ctor_set(x_372, 2, x_371);
lean_inc(x_3);
x_373 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_373, 0, x_3);
lean_ctor_set(x_373, 1, x_372);
lean_inc(x_3);
if (lean_is_scalar(x_367)) {
 x_374 = lean_alloc_ctor(3, 3, 0);
} else {
 x_374 = x_367;
}
lean_ctor_set(x_374, 0, x_3);
lean_ctor_set(x_374, 1, x_368);
lean_ctor_set(x_374, 2, x_369);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_374);
lean_ctor_set(x_5, 1, x_373);
lean_ctor_set(x_5, 0, x_3);
x_375 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_375, 0, x_3);
lean_ctor_set(x_375, 1, x_4);
lean_ctor_set(x_375, 2, x_5);
return x_375;
}
default: 
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
lean_dec(x_1);
x_376 = lean_ctor_get(x_319, 1);
lean_inc(x_376);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 x_377 = x_319;
} else {
 lean_dec_ref(x_319);
 x_377 = lean_box(0);
}
x_378 = lean_ctor_get(x_95, 1);
lean_inc(x_378);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_379 = x_95;
} else {
 lean_dec_ref(x_95);
 x_379 = lean_box(0);
}
lean_inc(x_321);
if (lean_is_scalar(x_340)) {
 x_380 = lean_alloc_ctor(0, 1, 0);
} else {
 x_380 = x_340;
}
lean_ctor_set(x_380, 0, x_321);
if (lean_is_scalar(x_377)) {
 x_381 = lean_alloc_ctor(3, 3, 0);
} else {
 x_381 = x_377;
}
lean_ctor_set(x_381, 0, x_321);
lean_ctor_set(x_381, 1, x_376);
lean_ctor_set(x_381, 2, x_380);
lean_inc(x_3);
if (lean_is_scalar(x_379)) {
 x_382 = lean_alloc_ctor(4, 2, 0);
} else {
 x_382 = x_379;
}
lean_ctor_set(x_382, 0, x_3);
lean_ctor_set(x_382, 1, x_381);
lean_inc(x_3);
x_383 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_383, 0, x_3);
lean_ctor_set(x_383, 1, x_378);
lean_inc(x_3);
lean_ctor_set(x_5, 2, x_383);
lean_ctor_set(x_5, 1, x_382);
lean_ctor_set(x_5, 0, x_3);
x_384 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_384, 0, x_3);
lean_ctor_set(x_384, 1, x_4);
lean_ctor_set(x_384, 2, x_5);
return x_384;
}
}
}
case 1:
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; 
lean_dec(x_1);
x_385 = lean_ctor_get(x_319, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 x_386 = x_319;
} else {
 lean_dec_ref(x_319);
 x_386 = lean_box(0);
}
x_387 = lean_ctor_get(x_339, 1);
lean_inc(x_387);
x_388 = lean_ctor_get(x_339, 2);
lean_inc(x_388);
if (lean_is_exclusive(x_339)) {
 lean_ctor_release(x_339, 0);
 lean_ctor_release(x_339, 1);
 lean_ctor_release(x_339, 2);
 x_389 = x_339;
} else {
 lean_dec_ref(x_339);
 x_389 = lean_box(0);
}
lean_inc(x_321);
if (lean_is_scalar(x_389)) {
 x_390 = lean_alloc_ctor(1, 3, 0);
} else {
 x_390 = x_389;
}
lean_ctor_set(x_390, 0, x_321);
lean_ctor_set(x_390, 1, x_387);
lean_ctor_set(x_390, 2, x_388);
if (lean_is_scalar(x_386)) {
 x_391 = lean_alloc_ctor(3, 3, 0);
} else {
 x_391 = x_386;
}
lean_ctor_set(x_391, 0, x_321);
lean_ctor_set(x_391, 1, x_385);
lean_ctor_set(x_391, 2, x_390);
lean_inc(x_3);
x_392 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_392, 0, x_3);
lean_ctor_set(x_392, 1, x_391);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_392);
lean_ctor_set(x_5, 0, x_3);
x_393 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_393, 0, x_3);
lean_ctor_set(x_393, 1, x_4);
lean_ctor_set(x_393, 2, x_5);
return x_393;
}
case 2:
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; 
lean_dec(x_1);
x_394 = lean_ctor_get(x_319, 1);
lean_inc(x_394);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 x_395 = x_319;
} else {
 lean_dec_ref(x_319);
 x_395 = lean_box(0);
}
x_396 = lean_ctor_get(x_339, 1);
lean_inc(x_396);
x_397 = lean_ctor_get(x_339, 2);
lean_inc(x_397);
x_398 = lean_ctor_get(x_339, 3);
lean_inc(x_398);
if (lean_is_exclusive(x_339)) {
 lean_ctor_release(x_339, 0);
 lean_ctor_release(x_339, 1);
 lean_ctor_release(x_339, 2);
 lean_ctor_release(x_339, 3);
 x_399 = x_339;
} else {
 lean_dec_ref(x_339);
 x_399 = lean_box(0);
}
lean_inc(x_321);
if (lean_is_scalar(x_399)) {
 x_400 = lean_alloc_ctor(2, 4, 0);
} else {
 x_400 = x_399;
}
lean_ctor_set(x_400, 0, x_321);
lean_ctor_set(x_400, 1, x_396);
lean_ctor_set(x_400, 2, x_397);
lean_ctor_set(x_400, 3, x_398);
if (lean_is_scalar(x_395)) {
 x_401 = lean_alloc_ctor(3, 3, 0);
} else {
 x_401 = x_395;
}
lean_ctor_set(x_401, 0, x_321);
lean_ctor_set(x_401, 1, x_394);
lean_ctor_set(x_401, 2, x_400);
lean_inc(x_3);
x_402 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_402, 0, x_3);
lean_ctor_set(x_402, 1, x_401);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_402);
lean_ctor_set(x_5, 0, x_3);
x_403 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_403, 0, x_3);
lean_ctor_set(x_403, 1, x_4);
lean_ctor_set(x_403, 2, x_5);
return x_403;
}
case 3:
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; 
lean_dec(x_1);
x_404 = lean_ctor_get(x_319, 1);
lean_inc(x_404);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 x_405 = x_319;
} else {
 lean_dec_ref(x_319);
 x_405 = lean_box(0);
}
x_406 = lean_ctor_get(x_339, 1);
lean_inc(x_406);
x_407 = lean_ctor_get(x_339, 2);
lean_inc(x_407);
if (lean_is_exclusive(x_339)) {
 lean_ctor_release(x_339, 0);
 lean_ctor_release(x_339, 1);
 lean_ctor_release(x_339, 2);
 x_408 = x_339;
} else {
 lean_dec_ref(x_339);
 x_408 = lean_box(0);
}
lean_inc(x_321);
if (lean_is_scalar(x_408)) {
 x_409 = lean_alloc_ctor(3, 3, 0);
} else {
 x_409 = x_408;
}
lean_ctor_set(x_409, 0, x_321);
lean_ctor_set(x_409, 1, x_406);
lean_ctor_set(x_409, 2, x_407);
if (lean_is_scalar(x_405)) {
 x_410 = lean_alloc_ctor(3, 3, 0);
} else {
 x_410 = x_405;
}
lean_ctor_set(x_410, 0, x_321);
lean_ctor_set(x_410, 1, x_404);
lean_ctor_set(x_410, 2, x_409);
lean_inc(x_3);
x_411 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_411, 0, x_3);
lean_ctor_set(x_411, 1, x_410);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_411);
lean_ctor_set(x_5, 0, x_3);
x_412 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_412, 0, x_3);
lean_ctor_set(x_412, 1, x_4);
lean_ctor_set(x_412, 2, x_5);
return x_412;
}
default: 
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; 
lean_dec(x_1);
x_413 = lean_ctor_get(x_319, 1);
lean_inc(x_413);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 x_414 = x_319;
} else {
 lean_dec_ref(x_319);
 x_414 = lean_box(0);
}
x_415 = lean_ctor_get(x_339, 1);
lean_inc(x_415);
if (lean_is_exclusive(x_339)) {
 lean_ctor_release(x_339, 0);
 lean_ctor_release(x_339, 1);
 x_416 = x_339;
} else {
 lean_dec_ref(x_339);
 x_416 = lean_box(0);
}
lean_inc(x_321);
if (lean_is_scalar(x_416)) {
 x_417 = lean_alloc_ctor(4, 2, 0);
} else {
 x_417 = x_416;
}
lean_ctor_set(x_417, 0, x_321);
lean_ctor_set(x_417, 1, x_415);
if (lean_is_scalar(x_414)) {
 x_418 = lean_alloc_ctor(3, 3, 0);
} else {
 x_418 = x_414;
}
lean_ctor_set(x_418, 0, x_321);
lean_ctor_set(x_418, 1, x_413);
lean_ctor_set(x_418, 2, x_417);
lean_inc(x_3);
x_419 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_419, 0, x_3);
lean_ctor_set(x_419, 1, x_418);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_419);
lean_ctor_set(x_5, 0, x_3);
x_420 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_420, 0, x_3);
lean_ctor_set(x_420, 1, x_4);
lean_ctor_set(x_420, 2, x_5);
return x_420;
}
}
}
default: 
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
lean_dec(x_1);
x_421 = lean_ctor_get(x_319, 1);
lean_inc(x_421);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 x_422 = x_319;
} else {
 lean_dec_ref(x_319);
 x_422 = lean_box(0);
}
if (lean_is_scalar(x_422)) {
 x_423 = lean_alloc_ctor(4, 2, 0);
} else {
 x_423 = x_422;
}
lean_ctor_set(x_423, 0, x_321);
lean_ctor_set(x_423, 1, x_421);
lean_inc(x_3);
x_424 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_424, 0, x_3);
lean_ctor_set(x_424, 1, x_423);
lean_inc(x_3);
lean_ctor_set(x_5, 1, x_424);
lean_ctor_set(x_5, 0, x_3);
x_425 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_425, 0, x_3);
lean_ctor_set(x_425, 1, x_4);
lean_ctor_set(x_425, 2, x_5);
return x_425;
}
}
}
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; 
x_426 = lean_ctor_get(x_5, 2);
lean_inc(x_426);
lean_dec(x_5);
x_427 = lean_ctor_get(x_26, 1);
lean_inc(x_427);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_428 = x_26;
} else {
 lean_dec_ref(x_26);
 x_428 = lean_box(0);
}
x_429 = lean_unsigned_to_nat(1u);
x_430 = lean_nat_add(x_3, x_429);
switch (lean_obj_tag(x_427)) {
case 0:
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; 
lean_dec(x_1);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 x_431 = x_427;
} else {
 lean_dec_ref(x_427);
 x_431 = lean_box(0);
}
if (lean_is_scalar(x_431)) {
 x_432 = lean_alloc_ctor(0, 1, 0);
} else {
 x_432 = x_431;
}
lean_ctor_set(x_432, 0, x_430);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_433 = lean_alloc_ctor(4, 2, 0);
} else {
 x_433 = x_428;
}
lean_ctor_set(x_433, 0, x_3);
lean_ctor_set(x_433, 1, x_432);
lean_inc(x_3);
x_434 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_434, 0, x_3);
lean_ctor_set(x_434, 1, x_433);
lean_ctor_set(x_434, 2, x_426);
x_435 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_435, 0, x_3);
lean_ctor_set(x_435, 1, x_4);
lean_ctor_set(x_435, 2, x_434);
return x_435;
}
case 1:
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; 
lean_dec(x_1);
x_436 = lean_ctor_get(x_427, 1);
lean_inc(x_436);
x_437 = lean_ctor_get(x_427, 2);
lean_inc(x_437);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 x_438 = x_427;
} else {
 lean_dec_ref(x_427);
 x_438 = lean_box(0);
}
if (lean_is_scalar(x_438)) {
 x_439 = lean_alloc_ctor(1, 3, 0);
} else {
 x_439 = x_438;
}
lean_ctor_set(x_439, 0, x_430);
lean_ctor_set(x_439, 1, x_436);
lean_ctor_set(x_439, 2, x_437);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_440 = lean_alloc_ctor(4, 2, 0);
} else {
 x_440 = x_428;
}
lean_ctor_set(x_440, 0, x_3);
lean_ctor_set(x_440, 1, x_439);
lean_inc(x_3);
x_441 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_441, 0, x_3);
lean_ctor_set(x_441, 1, x_440);
lean_ctor_set(x_441, 2, x_426);
x_442 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_442, 0, x_3);
lean_ctor_set(x_442, 1, x_4);
lean_ctor_set(x_442, 2, x_441);
return x_442;
}
case 2:
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
lean_dec(x_1);
x_443 = lean_ctor_get(x_427, 1);
lean_inc(x_443);
x_444 = lean_ctor_get(x_427, 2);
lean_inc(x_444);
x_445 = lean_ctor_get(x_427, 3);
lean_inc(x_445);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 lean_ctor_release(x_427, 3);
 x_446 = x_427;
} else {
 lean_dec_ref(x_427);
 x_446 = lean_box(0);
}
if (lean_is_scalar(x_446)) {
 x_447 = lean_alloc_ctor(2, 4, 0);
} else {
 x_447 = x_446;
}
lean_ctor_set(x_447, 0, x_430);
lean_ctor_set(x_447, 1, x_443);
lean_ctor_set(x_447, 2, x_444);
lean_ctor_set(x_447, 3, x_445);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_448 = lean_alloc_ctor(4, 2, 0);
} else {
 x_448 = x_428;
}
lean_ctor_set(x_448, 0, x_3);
lean_ctor_set(x_448, 1, x_447);
lean_inc(x_3);
x_449 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_449, 0, x_3);
lean_ctor_set(x_449, 1, x_448);
lean_ctor_set(x_449, 2, x_426);
x_450 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_450, 0, x_3);
lean_ctor_set(x_450, 1, x_4);
lean_ctor_set(x_450, 2, x_449);
return x_450;
}
case 3:
{
lean_object* x_451; 
x_451 = lean_ctor_get(x_427, 2);
lean_inc(x_451);
switch (lean_obj_tag(x_451)) {
case 0:
{
lean_object* x_452; 
if (lean_is_exclusive(x_451)) {
 lean_ctor_release(x_451, 0);
 x_452 = x_451;
} else {
 lean_dec_ref(x_451);
 x_452 = lean_box(0);
}
switch (lean_obj_tag(x_426)) {
case 0:
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; 
lean_dec(x_452);
lean_dec(x_428);
lean_dec(x_426);
x_453 = lean_ctor_get(x_427, 1);
lean_inc(x_453);
lean_dec(x_427);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_454 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_429, x_3, x_4);
lean_inc(x_1);
x_455 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_430, x_454, x_453);
x_456 = l_FirstOrder_Language_BoundedFormula_ex(x_1, lean_box(0), x_3, x_455);
lean_dec(x_1);
return x_456;
}
case 1:
{
lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; 
lean_dec(x_1);
x_457 = lean_ctor_get(x_427, 1);
lean_inc(x_457);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 x_458 = x_427;
} else {
 lean_dec_ref(x_427);
 x_458 = lean_box(0);
}
x_459 = lean_ctor_get(x_426, 1);
lean_inc(x_459);
x_460 = lean_ctor_get(x_426, 2);
lean_inc(x_460);
if (lean_is_exclusive(x_426)) {
 lean_ctor_release(x_426, 0);
 lean_ctor_release(x_426, 1);
 lean_ctor_release(x_426, 2);
 x_461 = x_426;
} else {
 lean_dec_ref(x_426);
 x_461 = lean_box(0);
}
lean_inc(x_430);
if (lean_is_scalar(x_452)) {
 x_462 = lean_alloc_ctor(0, 1, 0);
} else {
 x_462 = x_452;
}
lean_ctor_set(x_462, 0, x_430);
if (lean_is_scalar(x_461)) {
 x_463 = lean_alloc_ctor(3, 3, 0);
} else {
 x_463 = x_461;
 lean_ctor_set_tag(x_463, 3);
}
lean_ctor_set(x_463, 0, x_430);
lean_ctor_set(x_463, 1, x_457);
lean_ctor_set(x_463, 2, x_462);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_464 = lean_alloc_ctor(4, 2, 0);
} else {
 x_464 = x_428;
}
lean_ctor_set(x_464, 0, x_3);
lean_ctor_set(x_464, 1, x_463);
lean_inc(x_3);
if (lean_is_scalar(x_458)) {
 x_465 = lean_alloc_ctor(1, 3, 0);
} else {
 x_465 = x_458;
 lean_ctor_set_tag(x_465, 1);
}
lean_ctor_set(x_465, 0, x_3);
lean_ctor_set(x_465, 1, x_459);
lean_ctor_set(x_465, 2, x_460);
lean_inc(x_3);
x_466 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_466, 0, x_3);
lean_ctor_set(x_466, 1, x_464);
lean_ctor_set(x_466, 2, x_465);
x_467 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_467, 0, x_3);
lean_ctor_set(x_467, 1, x_4);
lean_ctor_set(x_467, 2, x_466);
return x_467;
}
case 2:
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; 
lean_dec(x_1);
x_468 = lean_ctor_get(x_427, 1);
lean_inc(x_468);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 x_469 = x_427;
} else {
 lean_dec_ref(x_427);
 x_469 = lean_box(0);
}
x_470 = lean_ctor_get(x_426, 1);
lean_inc(x_470);
x_471 = lean_ctor_get(x_426, 2);
lean_inc(x_471);
x_472 = lean_ctor_get(x_426, 3);
lean_inc(x_472);
if (lean_is_exclusive(x_426)) {
 lean_ctor_release(x_426, 0);
 lean_ctor_release(x_426, 1);
 lean_ctor_release(x_426, 2);
 lean_ctor_release(x_426, 3);
 x_473 = x_426;
} else {
 lean_dec_ref(x_426);
 x_473 = lean_box(0);
}
lean_inc(x_430);
if (lean_is_scalar(x_452)) {
 x_474 = lean_alloc_ctor(0, 1, 0);
} else {
 x_474 = x_452;
}
lean_ctor_set(x_474, 0, x_430);
if (lean_is_scalar(x_469)) {
 x_475 = lean_alloc_ctor(3, 3, 0);
} else {
 x_475 = x_469;
}
lean_ctor_set(x_475, 0, x_430);
lean_ctor_set(x_475, 1, x_468);
lean_ctor_set(x_475, 2, x_474);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_476 = lean_alloc_ctor(4, 2, 0);
} else {
 x_476 = x_428;
}
lean_ctor_set(x_476, 0, x_3);
lean_ctor_set(x_476, 1, x_475);
lean_inc(x_3);
if (lean_is_scalar(x_473)) {
 x_477 = lean_alloc_ctor(2, 4, 0);
} else {
 x_477 = x_473;
}
lean_ctor_set(x_477, 0, x_3);
lean_ctor_set(x_477, 1, x_470);
lean_ctor_set(x_477, 2, x_471);
lean_ctor_set(x_477, 3, x_472);
lean_inc(x_3);
x_478 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_478, 0, x_3);
lean_ctor_set(x_478, 1, x_476);
lean_ctor_set(x_478, 2, x_477);
x_479 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_479, 0, x_3);
lean_ctor_set(x_479, 1, x_4);
lean_ctor_set(x_479, 2, x_478);
return x_479;
}
case 3:
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; 
lean_dec(x_1);
x_480 = lean_ctor_get(x_427, 1);
lean_inc(x_480);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 x_481 = x_427;
} else {
 lean_dec_ref(x_427);
 x_481 = lean_box(0);
}
x_482 = lean_ctor_get(x_426, 1);
lean_inc(x_482);
x_483 = lean_ctor_get(x_426, 2);
lean_inc(x_483);
if (lean_is_exclusive(x_426)) {
 lean_ctor_release(x_426, 0);
 lean_ctor_release(x_426, 1);
 lean_ctor_release(x_426, 2);
 x_484 = x_426;
} else {
 lean_dec_ref(x_426);
 x_484 = lean_box(0);
}
lean_inc(x_430);
if (lean_is_scalar(x_452)) {
 x_485 = lean_alloc_ctor(0, 1, 0);
} else {
 x_485 = x_452;
}
lean_ctor_set(x_485, 0, x_430);
if (lean_is_scalar(x_484)) {
 x_486 = lean_alloc_ctor(3, 3, 0);
} else {
 x_486 = x_484;
}
lean_ctor_set(x_486, 0, x_430);
lean_ctor_set(x_486, 1, x_480);
lean_ctor_set(x_486, 2, x_485);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_487 = lean_alloc_ctor(4, 2, 0);
} else {
 x_487 = x_428;
}
lean_ctor_set(x_487, 0, x_3);
lean_ctor_set(x_487, 1, x_486);
lean_inc(x_3);
if (lean_is_scalar(x_481)) {
 x_488 = lean_alloc_ctor(3, 3, 0);
} else {
 x_488 = x_481;
}
lean_ctor_set(x_488, 0, x_3);
lean_ctor_set(x_488, 1, x_482);
lean_ctor_set(x_488, 2, x_483);
lean_inc(x_3);
x_489 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_489, 0, x_3);
lean_ctor_set(x_489, 1, x_487);
lean_ctor_set(x_489, 2, x_488);
x_490 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_490, 0, x_3);
lean_ctor_set(x_490, 1, x_4);
lean_ctor_set(x_490, 2, x_489);
return x_490;
}
default: 
{
lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; 
lean_dec(x_1);
x_491 = lean_ctor_get(x_427, 1);
lean_inc(x_491);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 x_492 = x_427;
} else {
 lean_dec_ref(x_427);
 x_492 = lean_box(0);
}
x_493 = lean_ctor_get(x_426, 1);
lean_inc(x_493);
if (lean_is_exclusive(x_426)) {
 lean_ctor_release(x_426, 0);
 lean_ctor_release(x_426, 1);
 x_494 = x_426;
} else {
 lean_dec_ref(x_426);
 x_494 = lean_box(0);
}
lean_inc(x_430);
if (lean_is_scalar(x_452)) {
 x_495 = lean_alloc_ctor(0, 1, 0);
} else {
 x_495 = x_452;
}
lean_ctor_set(x_495, 0, x_430);
if (lean_is_scalar(x_492)) {
 x_496 = lean_alloc_ctor(3, 3, 0);
} else {
 x_496 = x_492;
}
lean_ctor_set(x_496, 0, x_430);
lean_ctor_set(x_496, 1, x_491);
lean_ctor_set(x_496, 2, x_495);
lean_inc(x_3);
if (lean_is_scalar(x_494)) {
 x_497 = lean_alloc_ctor(4, 2, 0);
} else {
 x_497 = x_494;
}
lean_ctor_set(x_497, 0, x_3);
lean_ctor_set(x_497, 1, x_496);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_498 = lean_alloc_ctor(4, 2, 0);
} else {
 x_498 = x_428;
}
lean_ctor_set(x_498, 0, x_3);
lean_ctor_set(x_498, 1, x_493);
lean_inc(x_3);
x_499 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_499, 0, x_3);
lean_ctor_set(x_499, 1, x_497);
lean_ctor_set(x_499, 2, x_498);
x_500 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_500, 0, x_3);
lean_ctor_set(x_500, 1, x_4);
lean_ctor_set(x_500, 2, x_499);
return x_500;
}
}
}
case 1:
{
lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; 
lean_dec(x_1);
x_501 = lean_ctor_get(x_427, 1);
lean_inc(x_501);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 x_502 = x_427;
} else {
 lean_dec_ref(x_427);
 x_502 = lean_box(0);
}
x_503 = lean_ctor_get(x_451, 1);
lean_inc(x_503);
x_504 = lean_ctor_get(x_451, 2);
lean_inc(x_504);
if (lean_is_exclusive(x_451)) {
 lean_ctor_release(x_451, 0);
 lean_ctor_release(x_451, 1);
 lean_ctor_release(x_451, 2);
 x_505 = x_451;
} else {
 lean_dec_ref(x_451);
 x_505 = lean_box(0);
}
lean_inc(x_430);
if (lean_is_scalar(x_505)) {
 x_506 = lean_alloc_ctor(1, 3, 0);
} else {
 x_506 = x_505;
}
lean_ctor_set(x_506, 0, x_430);
lean_ctor_set(x_506, 1, x_503);
lean_ctor_set(x_506, 2, x_504);
if (lean_is_scalar(x_502)) {
 x_507 = lean_alloc_ctor(3, 3, 0);
} else {
 x_507 = x_502;
}
lean_ctor_set(x_507, 0, x_430);
lean_ctor_set(x_507, 1, x_501);
lean_ctor_set(x_507, 2, x_506);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_508 = lean_alloc_ctor(4, 2, 0);
} else {
 x_508 = x_428;
}
lean_ctor_set(x_508, 0, x_3);
lean_ctor_set(x_508, 1, x_507);
lean_inc(x_3);
x_509 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_509, 0, x_3);
lean_ctor_set(x_509, 1, x_508);
lean_ctor_set(x_509, 2, x_426);
x_510 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_510, 0, x_3);
lean_ctor_set(x_510, 1, x_4);
lean_ctor_set(x_510, 2, x_509);
return x_510;
}
case 2:
{
lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; 
lean_dec(x_1);
x_511 = lean_ctor_get(x_427, 1);
lean_inc(x_511);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 x_512 = x_427;
} else {
 lean_dec_ref(x_427);
 x_512 = lean_box(0);
}
x_513 = lean_ctor_get(x_451, 1);
lean_inc(x_513);
x_514 = lean_ctor_get(x_451, 2);
lean_inc(x_514);
x_515 = lean_ctor_get(x_451, 3);
lean_inc(x_515);
if (lean_is_exclusive(x_451)) {
 lean_ctor_release(x_451, 0);
 lean_ctor_release(x_451, 1);
 lean_ctor_release(x_451, 2);
 lean_ctor_release(x_451, 3);
 x_516 = x_451;
} else {
 lean_dec_ref(x_451);
 x_516 = lean_box(0);
}
lean_inc(x_430);
if (lean_is_scalar(x_516)) {
 x_517 = lean_alloc_ctor(2, 4, 0);
} else {
 x_517 = x_516;
}
lean_ctor_set(x_517, 0, x_430);
lean_ctor_set(x_517, 1, x_513);
lean_ctor_set(x_517, 2, x_514);
lean_ctor_set(x_517, 3, x_515);
if (lean_is_scalar(x_512)) {
 x_518 = lean_alloc_ctor(3, 3, 0);
} else {
 x_518 = x_512;
}
lean_ctor_set(x_518, 0, x_430);
lean_ctor_set(x_518, 1, x_511);
lean_ctor_set(x_518, 2, x_517);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_519 = lean_alloc_ctor(4, 2, 0);
} else {
 x_519 = x_428;
}
lean_ctor_set(x_519, 0, x_3);
lean_ctor_set(x_519, 1, x_518);
lean_inc(x_3);
x_520 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_520, 0, x_3);
lean_ctor_set(x_520, 1, x_519);
lean_ctor_set(x_520, 2, x_426);
x_521 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_521, 0, x_3);
lean_ctor_set(x_521, 1, x_4);
lean_ctor_set(x_521, 2, x_520);
return x_521;
}
case 3:
{
lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; 
lean_dec(x_1);
x_522 = lean_ctor_get(x_427, 1);
lean_inc(x_522);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 x_523 = x_427;
} else {
 lean_dec_ref(x_427);
 x_523 = lean_box(0);
}
x_524 = lean_ctor_get(x_451, 1);
lean_inc(x_524);
x_525 = lean_ctor_get(x_451, 2);
lean_inc(x_525);
if (lean_is_exclusive(x_451)) {
 lean_ctor_release(x_451, 0);
 lean_ctor_release(x_451, 1);
 lean_ctor_release(x_451, 2);
 x_526 = x_451;
} else {
 lean_dec_ref(x_451);
 x_526 = lean_box(0);
}
lean_inc(x_430);
if (lean_is_scalar(x_526)) {
 x_527 = lean_alloc_ctor(3, 3, 0);
} else {
 x_527 = x_526;
}
lean_ctor_set(x_527, 0, x_430);
lean_ctor_set(x_527, 1, x_524);
lean_ctor_set(x_527, 2, x_525);
if (lean_is_scalar(x_523)) {
 x_528 = lean_alloc_ctor(3, 3, 0);
} else {
 x_528 = x_523;
}
lean_ctor_set(x_528, 0, x_430);
lean_ctor_set(x_528, 1, x_522);
lean_ctor_set(x_528, 2, x_527);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_529 = lean_alloc_ctor(4, 2, 0);
} else {
 x_529 = x_428;
}
lean_ctor_set(x_529, 0, x_3);
lean_ctor_set(x_529, 1, x_528);
lean_inc(x_3);
x_530 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_530, 0, x_3);
lean_ctor_set(x_530, 1, x_529);
lean_ctor_set(x_530, 2, x_426);
x_531 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_531, 0, x_3);
lean_ctor_set(x_531, 1, x_4);
lean_ctor_set(x_531, 2, x_530);
return x_531;
}
default: 
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; 
lean_dec(x_1);
x_532 = lean_ctor_get(x_427, 1);
lean_inc(x_532);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 lean_ctor_release(x_427, 2);
 x_533 = x_427;
} else {
 lean_dec_ref(x_427);
 x_533 = lean_box(0);
}
x_534 = lean_ctor_get(x_451, 1);
lean_inc(x_534);
if (lean_is_exclusive(x_451)) {
 lean_ctor_release(x_451, 0);
 lean_ctor_release(x_451, 1);
 x_535 = x_451;
} else {
 lean_dec_ref(x_451);
 x_535 = lean_box(0);
}
lean_inc(x_430);
if (lean_is_scalar(x_535)) {
 x_536 = lean_alloc_ctor(4, 2, 0);
} else {
 x_536 = x_535;
}
lean_ctor_set(x_536, 0, x_430);
lean_ctor_set(x_536, 1, x_534);
if (lean_is_scalar(x_533)) {
 x_537 = lean_alloc_ctor(3, 3, 0);
} else {
 x_537 = x_533;
}
lean_ctor_set(x_537, 0, x_430);
lean_ctor_set(x_537, 1, x_532);
lean_ctor_set(x_537, 2, x_536);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_538 = lean_alloc_ctor(4, 2, 0);
} else {
 x_538 = x_428;
}
lean_ctor_set(x_538, 0, x_3);
lean_ctor_set(x_538, 1, x_537);
lean_inc(x_3);
x_539 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_539, 0, x_3);
lean_ctor_set(x_539, 1, x_538);
lean_ctor_set(x_539, 2, x_426);
x_540 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_540, 0, x_3);
lean_ctor_set(x_540, 1, x_4);
lean_ctor_set(x_540, 2, x_539);
return x_540;
}
}
}
default: 
{
lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; 
lean_dec(x_1);
x_541 = lean_ctor_get(x_427, 1);
lean_inc(x_541);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 x_542 = x_427;
} else {
 lean_dec_ref(x_427);
 x_542 = lean_box(0);
}
if (lean_is_scalar(x_542)) {
 x_543 = lean_alloc_ctor(4, 2, 0);
} else {
 x_543 = x_542;
}
lean_ctor_set(x_543, 0, x_430);
lean_ctor_set(x_543, 1, x_541);
lean_inc(x_3);
if (lean_is_scalar(x_428)) {
 x_544 = lean_alloc_ctor(4, 2, 0);
} else {
 x_544 = x_428;
}
lean_ctor_set(x_544, 0, x_3);
lean_ctor_set(x_544, 1, x_543);
lean_inc(x_3);
x_545 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_545, 0, x_3);
lean_ctor_set(x_545, 1, x_544);
lean_ctor_set(x_545, 2, x_426);
x_546 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_546, 0, x_3);
lean_ctor_set(x_546, 1, x_4);
lean_ctor_set(x_546, 2, x_545);
return x_546;
}
}
}
}
}
}
default: 
{
uint8_t x_547; 
x_547 = !lean_is_exclusive(x_5);
if (x_547 == 0)
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; 
x_548 = lean_ctor_get(x_5, 1);
x_549 = lean_ctor_get(x_5, 0);
lean_dec(x_549);
x_550 = lean_unsigned_to_nat(1u);
x_551 = lean_nat_add(x_3, x_550);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_552 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_550, x_3, x_4);
x_553 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_551, x_552, x_548);
lean_ctor_set(x_5, 1, x_553);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; 
x_554 = lean_ctor_get(x_5, 1);
lean_inc(x_554);
lean_dec(x_5);
x_555 = lean_unsigned_to_nat(1u);
x_556 = lean_nat_add(x_3, x_555);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_557 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_555, x_3, x_4);
x_558 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_556, x_557, x_554);
x_559 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_559, 0, x_3);
lean_ctor_set(x_559, 1, x_558);
return x_559;
}
}
}
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_BoundedFormula_toPrenexImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_8 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_inc(x_3);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_3);
x_10 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_9, x_5);
return x_10;
}
}
case 1:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_4, 0);
lean_dec(x_12);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_13 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_ctor_get(x_4, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_4);
lean_inc(x_3);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_3);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
x_17 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_16, x_5);
return x_17;
}
}
case 2:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_4);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_4, 0);
lean_dec(x_19);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_20 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_4);
lean_inc(x_3);
x_24 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_24, x_5);
return x_25;
}
}
case 3:
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_4, 1);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 0:
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = !lean_is_exclusive(x_4);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_4, 1);
lean_dec(x_30);
x_31 = lean_ctor_get(x_4, 0);
lean_dec(x_31);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_32 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_4, 2);
lean_inc(x_33);
lean_dec(x_4);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
x_34 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_34, 0, x_3);
lean_ctor_set(x_34, 1, x_26);
lean_ctor_set(x_34, 2, x_33);
x_35 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_34, x_5);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_26);
x_36 = lean_ctor_get(x_4, 2);
lean_inc(x_36);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 x_37 = x_4;
} else {
 lean_dec_ref(x_4);
 x_37 = lean_box(0);
}
lean_inc(x_3);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_37)) {
 x_39 = lean_alloc_ctor(3, 3, 0);
} else {
 x_39 = x_37;
}
lean_ctor_set(x_39, 0, x_3);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_36);
x_40 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_39, x_5);
return x_40;
}
}
case 1:
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_4);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_4, 1);
lean_dec(x_42);
x_43 = lean_ctor_get(x_4, 0);
lean_dec(x_43);
x_44 = !lean_is_exclusive(x_26);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_26, 0);
lean_dec(x_45);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_46 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_26, 1);
x_48 = lean_ctor_get(x_26, 2);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_26);
lean_inc(x_3);
x_49 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_49, 0, x_3);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 2, x_48);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_49);
lean_ctor_set(x_4, 0, x_3);
x_50 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_4, 2);
lean_inc(x_51);
lean_dec(x_4);
x_52 = lean_ctor_get(x_26, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_26, 2);
lean_inc(x_53);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 x_54 = x_26;
} else {
 lean_dec_ref(x_26);
 x_54 = lean_box(0);
}
lean_inc(x_3);
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 3, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_3);
lean_ctor_set(x_55, 1, x_52);
lean_ctor_set(x_55, 2, x_53);
lean_inc(x_3);
x_56 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_56, 0, x_3);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_56, 2, x_51);
x_57 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_56, x_5);
return x_57;
}
}
case 2:
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_4);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_59 = lean_ctor_get(x_4, 1);
lean_dec(x_59);
x_60 = lean_ctor_get(x_4, 0);
lean_dec(x_60);
x_61 = !lean_is_exclusive(x_26);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_26, 0);
lean_dec(x_62);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_63 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_26, 1);
x_65 = lean_ctor_get(x_26, 2);
x_66 = lean_ctor_get(x_26, 3);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_26);
lean_inc(x_3);
x_67 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_67, 0, x_3);
lean_ctor_set(x_67, 1, x_64);
lean_ctor_set(x_67, 2, x_65);
lean_ctor_set(x_67, 3, x_66);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_67);
lean_ctor_set(x_4, 0, x_3);
x_68 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_69 = lean_ctor_get(x_4, 2);
lean_inc(x_69);
lean_dec(x_4);
x_70 = lean_ctor_get(x_26, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_26, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_26, 3);
lean_inc(x_72);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 lean_ctor_release(x_26, 3);
 x_73 = x_26;
} else {
 lean_dec_ref(x_26);
 x_73 = lean_box(0);
}
lean_inc(x_3);
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(2, 4, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_3);
lean_ctor_set(x_74, 1, x_70);
lean_ctor_set(x_74, 2, x_71);
lean_ctor_set(x_74, 3, x_72);
lean_inc(x_3);
x_75 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_75, 0, x_3);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_75, 2, x_69);
x_76 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_75, x_5);
return x_76;
}
}
case 3:
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_4);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_4, 1);
lean_dec(x_78);
x_79 = lean_ctor_get(x_4, 0);
lean_dec(x_79);
x_80 = !lean_is_exclusive(x_26);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_26, 0);
lean_dec(x_81);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_82 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_26, 1);
x_84 = lean_ctor_get(x_26, 2);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_26);
lean_inc(x_3);
x_85 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_85, 0, x_3);
lean_ctor_set(x_85, 1, x_83);
lean_ctor_set(x_85, 2, x_84);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_85);
lean_ctor_set(x_4, 0, x_3);
x_86 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_87 = lean_ctor_get(x_4, 2);
lean_inc(x_87);
lean_dec(x_4);
x_88 = lean_ctor_get(x_26, 1);
lean_inc(x_88);
x_89 = lean_ctor_get(x_26, 2);
lean_inc(x_89);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 x_90 = x_26;
} else {
 lean_dec_ref(x_26);
 x_90 = lean_box(0);
}
lean_inc(x_3);
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(3, 3, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_3);
lean_ctor_set(x_91, 1, x_88);
lean_ctor_set(x_91, 2, x_89);
lean_inc(x_3);
x_92 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_92, 0, x_3);
lean_ctor_set(x_92, 1, x_91);
lean_ctor_set(x_92, 2, x_87);
x_93 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_92, x_5);
return x_93;
}
}
default: 
{
uint8_t x_94; 
x_94 = !lean_is_exclusive(x_4);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_95 = lean_ctor_get(x_4, 2);
x_96 = lean_ctor_get(x_4, 1);
lean_dec(x_96);
x_97 = lean_ctor_get(x_4, 0);
lean_dec(x_97);
x_98 = !lean_is_exclusive(x_26);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_26, 1);
x_100 = lean_ctor_get(x_26, 0);
lean_dec(x_100);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_nat_add(x_3, x_101);
switch (lean_obj_tag(x_99)) {
case 0:
{
uint8_t x_103; 
x_103 = !lean_is_exclusive(x_99);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_99, 0);
lean_dec(x_104);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_105 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; 
lean_dec(x_99);
x_106 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_106, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_106);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_107 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_107;
}
}
case 1:
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_99);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_99, 0);
lean_dec(x_109);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_110 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_99, 1);
x_112 = lean_ctor_get(x_99, 2);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_99);
x_113 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_113, 0, x_102);
lean_ctor_set(x_113, 1, x_111);
lean_ctor_set(x_113, 2, x_112);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_113);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_114 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_114;
}
}
case 2:
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_99);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_99, 0);
lean_dec(x_116);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_117 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_118 = lean_ctor_get(x_99, 1);
x_119 = lean_ctor_get(x_99, 2);
x_120 = lean_ctor_get(x_99, 3);
lean_inc(x_120);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_99);
x_121 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_121, 0, x_102);
lean_ctor_set(x_121, 1, x_118);
lean_ctor_set(x_121, 2, x_119);
lean_ctor_set(x_121, 3, x_120);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_121);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_122 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_122;
}
}
case 3:
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_99, 2);
lean_inc(x_123);
switch (lean_obj_tag(x_123)) {
case 0:
{
uint8_t x_124; 
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; 
x_125 = lean_ctor_get(x_123, 0);
lean_dec(x_125);
switch (lean_obj_tag(x_95)) {
case 0:
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_free_object(x_123);
lean_free_object(x_4);
lean_dec(x_95);
x_126 = lean_ctor_get(x_99, 1);
lean_inc(x_126);
lean_dec(x_99);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_127 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_101, x_3, x_5);
x_128 = l_FirstOrder_Language_BoundedFormula_toPrenexImp(x_1, lean_box(0), x_102, x_126, x_127);
lean_ctor_set(x_26, 1, x_128);
lean_ctor_set(x_26, 0, x_3);
return x_26;
}
case 1:
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_99);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; 
x_130 = lean_ctor_get(x_99, 1);
x_131 = lean_ctor_get(x_99, 2);
lean_dec(x_131);
x_132 = lean_ctor_get(x_99, 0);
lean_dec(x_132);
x_133 = !lean_is_exclusive(x_95);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_134 = lean_ctor_get(x_95, 1);
x_135 = lean_ctor_get(x_95, 2);
x_136 = lean_ctor_get(x_95, 0);
lean_dec(x_136);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set_tag(x_95, 3);
lean_ctor_set(x_95, 2, x_123);
lean_ctor_set(x_95, 1, x_130);
lean_ctor_set(x_95, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_95);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set_tag(x_99, 1);
lean_ctor_set(x_99, 2, x_135);
lean_ctor_set(x_99, 1, x_134);
lean_ctor_set(x_99, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_99);
lean_ctor_set(x_4, 0, x_3);
x_137 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_137;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_138 = lean_ctor_get(x_95, 1);
x_139 = lean_ctor_get(x_95, 2);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_95);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
x_140 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_140, 0, x_102);
lean_ctor_set(x_140, 1, x_130);
lean_ctor_set(x_140, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_140);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set_tag(x_99, 1);
lean_ctor_set(x_99, 2, x_139);
lean_ctor_set(x_99, 1, x_138);
lean_ctor_set(x_99, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_99);
lean_ctor_set(x_4, 0, x_3);
x_141 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_142 = lean_ctor_get(x_99, 1);
lean_inc(x_142);
lean_dec(x_99);
x_143 = lean_ctor_get(x_95, 1);
lean_inc(x_143);
x_144 = lean_ctor_get(x_95, 2);
lean_inc(x_144);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_145 = x_95;
} else {
 lean_dec_ref(x_95);
 x_145 = lean_box(0);
}
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(3, 3, 0);
} else {
 x_146 = x_145;
 lean_ctor_set_tag(x_146, 3);
}
lean_ctor_set(x_146, 0, x_102);
lean_ctor_set(x_146, 1, x_142);
lean_ctor_set(x_146, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_146);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
x_147 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_147, 0, x_3);
lean_ctor_set(x_147, 1, x_143);
lean_ctor_set(x_147, 2, x_144);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_147);
lean_ctor_set(x_4, 0, x_3);
x_148 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_148;
}
}
case 2:
{
uint8_t x_149; 
x_149 = !lean_is_exclusive(x_99);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_150 = lean_ctor_get(x_99, 2);
lean_dec(x_150);
x_151 = lean_ctor_get(x_99, 0);
lean_dec(x_151);
x_152 = !lean_is_exclusive(x_95);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
x_153 = lean_ctor_get(x_95, 0);
lean_dec(x_153);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_95, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_154 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_154;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_155 = lean_ctor_get(x_95, 1);
x_156 = lean_ctor_get(x_95, 2);
x_157 = lean_ctor_get(x_95, 3);
lean_inc(x_157);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_95);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
x_158 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_158, 0, x_3);
lean_ctor_set(x_158, 1, x_155);
lean_ctor_set(x_158, 2, x_156);
lean_ctor_set(x_158, 3, x_157);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_158);
lean_ctor_set(x_4, 0, x_3);
x_159 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_159;
}
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_160 = lean_ctor_get(x_99, 1);
lean_inc(x_160);
lean_dec(x_99);
x_161 = lean_ctor_get(x_95, 1);
lean_inc(x_161);
x_162 = lean_ctor_get(x_95, 2);
lean_inc(x_162);
x_163 = lean_ctor_get(x_95, 3);
lean_inc(x_163);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 lean_ctor_release(x_95, 3);
 x_164 = x_95;
} else {
 lean_dec_ref(x_95);
 x_164 = lean_box(0);
}
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
x_165 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_165, 0, x_102);
lean_ctor_set(x_165, 1, x_160);
lean_ctor_set(x_165, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_165);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_164)) {
 x_166 = lean_alloc_ctor(2, 4, 0);
} else {
 x_166 = x_164;
}
lean_ctor_set(x_166, 0, x_3);
lean_ctor_set(x_166, 1, x_161);
lean_ctor_set(x_166, 2, x_162);
lean_ctor_set(x_166, 3, x_163);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_166);
lean_ctor_set(x_4, 0, x_3);
x_167 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_167;
}
}
case 3:
{
uint8_t x_168; 
x_168 = !lean_is_exclusive(x_99);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_169 = lean_ctor_get(x_99, 1);
x_170 = lean_ctor_get(x_99, 2);
lean_dec(x_170);
x_171 = lean_ctor_get(x_99, 0);
lean_dec(x_171);
x_172 = !lean_is_exclusive(x_95);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_173 = lean_ctor_get(x_95, 1);
x_174 = lean_ctor_get(x_95, 2);
x_175 = lean_ctor_get(x_95, 0);
lean_dec(x_175);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_95, 2, x_123);
lean_ctor_set(x_95, 1, x_169);
lean_ctor_set(x_95, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_95);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_99, 2, x_174);
lean_ctor_set(x_99, 1, x_173);
lean_ctor_set(x_99, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_99);
lean_ctor_set(x_4, 0, x_3);
x_176 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_176;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_177 = lean_ctor_get(x_95, 1);
x_178 = lean_ctor_get(x_95, 2);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_95);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
x_179 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_179, 0, x_102);
lean_ctor_set(x_179, 1, x_169);
lean_ctor_set(x_179, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_179);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_99, 2, x_178);
lean_ctor_set(x_99, 1, x_177);
lean_ctor_set(x_99, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_99);
lean_ctor_set(x_4, 0, x_3);
x_180 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_180;
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_181 = lean_ctor_get(x_99, 1);
lean_inc(x_181);
lean_dec(x_99);
x_182 = lean_ctor_get(x_95, 1);
lean_inc(x_182);
x_183 = lean_ctor_get(x_95, 2);
lean_inc(x_183);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_184 = x_95;
} else {
 lean_dec_ref(x_95);
 x_184 = lean_box(0);
}
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
if (lean_is_scalar(x_184)) {
 x_185 = lean_alloc_ctor(3, 3, 0);
} else {
 x_185 = x_184;
}
lean_ctor_set(x_185, 0, x_102);
lean_ctor_set(x_185, 1, x_181);
lean_ctor_set(x_185, 2, x_123);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_185);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
x_186 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_186, 0, x_3);
lean_ctor_set(x_186, 1, x_182);
lean_ctor_set(x_186, 2, x_183);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_186);
lean_ctor_set(x_4, 0, x_3);
x_187 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_187;
}
}
default: 
{
uint8_t x_188; 
x_188 = !lean_is_exclusive(x_99);
if (x_188 == 0)
{
lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_189 = lean_ctor_get(x_99, 2);
lean_dec(x_189);
x_190 = lean_ctor_get(x_99, 0);
lean_dec(x_190);
x_191 = !lean_is_exclusive(x_95);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_95, 1);
x_193 = lean_ctor_get(x_95, 0);
lean_dec(x_193);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_95, 1, x_99);
lean_ctor_set(x_95, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_192);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_26);
lean_ctor_set(x_4, 1, x_95);
lean_ctor_set(x_4, 0, x_3);
x_194 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_194;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_95, 1);
lean_inc(x_195);
lean_dec(x_95);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
x_196 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_196, 0, x_3);
lean_ctor_set(x_196, 1, x_99);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_195);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_26);
lean_ctor_set(x_4, 1, x_196);
lean_ctor_set(x_4, 0, x_3);
x_197 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_197;
}
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_198 = lean_ctor_get(x_99, 1);
lean_inc(x_198);
lean_dec(x_99);
x_199 = lean_ctor_get(x_95, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_200 = x_95;
} else {
 lean_dec_ref(x_95);
 x_200 = lean_box(0);
}
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
x_201 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_201, 0, x_102);
lean_ctor_set(x_201, 1, x_198);
lean_ctor_set(x_201, 2, x_123);
lean_inc(x_3);
if (lean_is_scalar(x_200)) {
 x_202 = lean_alloc_ctor(4, 2, 0);
} else {
 x_202 = x_200;
}
lean_ctor_set(x_202, 0, x_3);
lean_ctor_set(x_202, 1, x_201);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_199);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_26);
lean_ctor_set(x_4, 1, x_202);
lean_ctor_set(x_4, 0, x_3);
x_203 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_203;
}
}
}
}
else
{
lean_dec(x_123);
switch (lean_obj_tag(x_95)) {
case 0:
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
lean_free_object(x_4);
lean_dec(x_95);
x_204 = lean_ctor_get(x_99, 1);
lean_inc(x_204);
lean_dec(x_99);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_205 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_101, x_3, x_5);
x_206 = l_FirstOrder_Language_BoundedFormula_toPrenexImp(x_1, lean_box(0), x_102, x_204, x_205);
lean_ctor_set(x_26, 1, x_206);
lean_ctor_set(x_26, 0, x_3);
return x_26;
}
case 1:
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_207 = lean_ctor_get(x_99, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 x_208 = x_99;
} else {
 lean_dec_ref(x_99);
 x_208 = lean_box(0);
}
x_209 = lean_ctor_get(x_95, 1);
lean_inc(x_209);
x_210 = lean_ctor_get(x_95, 2);
lean_inc(x_210);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_211 = x_95;
} else {
 lean_dec_ref(x_95);
 x_211 = lean_box(0);
}
lean_inc(x_102);
x_212 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_212, 0, x_102);
if (lean_is_scalar(x_211)) {
 x_213 = lean_alloc_ctor(3, 3, 0);
} else {
 x_213 = x_211;
 lean_ctor_set_tag(x_213, 3);
}
lean_ctor_set(x_213, 0, x_102);
lean_ctor_set(x_213, 1, x_207);
lean_ctor_set(x_213, 2, x_212);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_213);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_208)) {
 x_214 = lean_alloc_ctor(1, 3, 0);
} else {
 x_214 = x_208;
 lean_ctor_set_tag(x_214, 1);
}
lean_ctor_set(x_214, 0, x_3);
lean_ctor_set(x_214, 1, x_209);
lean_ctor_set(x_214, 2, x_210);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_214);
lean_ctor_set(x_4, 0, x_3);
x_215 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_215;
}
case 2:
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_216 = lean_ctor_get(x_99, 1);
lean_inc(x_216);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 x_217 = x_99;
} else {
 lean_dec_ref(x_99);
 x_217 = lean_box(0);
}
x_218 = lean_ctor_get(x_95, 1);
lean_inc(x_218);
x_219 = lean_ctor_get(x_95, 2);
lean_inc(x_219);
x_220 = lean_ctor_get(x_95, 3);
lean_inc(x_220);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 lean_ctor_release(x_95, 3);
 x_221 = x_95;
} else {
 lean_dec_ref(x_95);
 x_221 = lean_box(0);
}
lean_inc(x_102);
x_222 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_222, 0, x_102);
if (lean_is_scalar(x_217)) {
 x_223 = lean_alloc_ctor(3, 3, 0);
} else {
 x_223 = x_217;
}
lean_ctor_set(x_223, 0, x_102);
lean_ctor_set(x_223, 1, x_216);
lean_ctor_set(x_223, 2, x_222);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_223);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_221)) {
 x_224 = lean_alloc_ctor(2, 4, 0);
} else {
 x_224 = x_221;
}
lean_ctor_set(x_224, 0, x_3);
lean_ctor_set(x_224, 1, x_218);
lean_ctor_set(x_224, 2, x_219);
lean_ctor_set(x_224, 3, x_220);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_224);
lean_ctor_set(x_4, 0, x_3);
x_225 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_225;
}
case 3:
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_226 = lean_ctor_get(x_99, 1);
lean_inc(x_226);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 x_227 = x_99;
} else {
 lean_dec_ref(x_99);
 x_227 = lean_box(0);
}
x_228 = lean_ctor_get(x_95, 1);
lean_inc(x_228);
x_229 = lean_ctor_get(x_95, 2);
lean_inc(x_229);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_230 = x_95;
} else {
 lean_dec_ref(x_95);
 x_230 = lean_box(0);
}
lean_inc(x_102);
x_231 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_231, 0, x_102);
if (lean_is_scalar(x_230)) {
 x_232 = lean_alloc_ctor(3, 3, 0);
} else {
 x_232 = x_230;
}
lean_ctor_set(x_232, 0, x_102);
lean_ctor_set(x_232, 1, x_226);
lean_ctor_set(x_232, 2, x_231);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_232);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
if (lean_is_scalar(x_227)) {
 x_233 = lean_alloc_ctor(3, 3, 0);
} else {
 x_233 = x_227;
}
lean_ctor_set(x_233, 0, x_3);
lean_ctor_set(x_233, 1, x_228);
lean_ctor_set(x_233, 2, x_229);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_233);
lean_ctor_set(x_4, 0, x_3);
x_234 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_234;
}
default: 
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_235 = lean_ctor_get(x_99, 1);
lean_inc(x_235);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 x_236 = x_99;
} else {
 lean_dec_ref(x_99);
 x_236 = lean_box(0);
}
x_237 = lean_ctor_get(x_95, 1);
lean_inc(x_237);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_238 = x_95;
} else {
 lean_dec_ref(x_95);
 x_238 = lean_box(0);
}
lean_inc(x_102);
x_239 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_239, 0, x_102);
if (lean_is_scalar(x_236)) {
 x_240 = lean_alloc_ctor(3, 3, 0);
} else {
 x_240 = x_236;
}
lean_ctor_set(x_240, 0, x_102);
lean_ctor_set(x_240, 1, x_235);
lean_ctor_set(x_240, 2, x_239);
lean_inc(x_3);
if (lean_is_scalar(x_238)) {
 x_241 = lean_alloc_ctor(4, 2, 0);
} else {
 x_241 = x_238;
}
lean_ctor_set(x_241, 0, x_3);
lean_ctor_set(x_241, 1, x_240);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_237);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_26);
lean_ctor_set(x_4, 1, x_241);
lean_ctor_set(x_4, 0, x_3);
x_242 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_242;
}
}
}
}
case 1:
{
uint8_t x_243; 
x_243 = !lean_is_exclusive(x_99);
if (x_243 == 0)
{
lean_object* x_244; lean_object* x_245; uint8_t x_246; 
x_244 = lean_ctor_get(x_99, 2);
lean_dec(x_244);
x_245 = lean_ctor_get(x_99, 0);
lean_dec(x_245);
x_246 = !lean_is_exclusive(x_123);
if (x_246 == 0)
{
lean_object* x_247; lean_object* x_248; 
x_247 = lean_ctor_get(x_123, 0);
lean_dec(x_247);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_248 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_248;
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_249 = lean_ctor_get(x_123, 1);
x_250 = lean_ctor_get(x_123, 2);
lean_inc(x_250);
lean_inc(x_249);
lean_dec(x_123);
lean_inc(x_102);
x_251 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_251, 0, x_102);
lean_ctor_set(x_251, 1, x_249);
lean_ctor_set(x_251, 2, x_250);
lean_ctor_set(x_99, 2, x_251);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_252 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_252;
}
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_253 = lean_ctor_get(x_99, 1);
lean_inc(x_253);
lean_dec(x_99);
x_254 = lean_ctor_get(x_123, 1);
lean_inc(x_254);
x_255 = lean_ctor_get(x_123, 2);
lean_inc(x_255);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 lean_ctor_release(x_123, 2);
 x_256 = x_123;
} else {
 lean_dec_ref(x_123);
 x_256 = lean_box(0);
}
lean_inc(x_102);
if (lean_is_scalar(x_256)) {
 x_257 = lean_alloc_ctor(1, 3, 0);
} else {
 x_257 = x_256;
}
lean_ctor_set(x_257, 0, x_102);
lean_ctor_set(x_257, 1, x_254);
lean_ctor_set(x_257, 2, x_255);
x_258 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_258, 0, x_102);
lean_ctor_set(x_258, 1, x_253);
lean_ctor_set(x_258, 2, x_257);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_258);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_259 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_259;
}
}
case 2:
{
uint8_t x_260; 
x_260 = !lean_is_exclusive(x_99);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; uint8_t x_263; 
x_261 = lean_ctor_get(x_99, 2);
lean_dec(x_261);
x_262 = lean_ctor_get(x_99, 0);
lean_dec(x_262);
x_263 = !lean_is_exclusive(x_123);
if (x_263 == 0)
{
lean_object* x_264; lean_object* x_265; 
x_264 = lean_ctor_get(x_123, 0);
lean_dec(x_264);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_265 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_265;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_266 = lean_ctor_get(x_123, 1);
x_267 = lean_ctor_get(x_123, 2);
x_268 = lean_ctor_get(x_123, 3);
lean_inc(x_268);
lean_inc(x_267);
lean_inc(x_266);
lean_dec(x_123);
lean_inc(x_102);
x_269 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_269, 0, x_102);
lean_ctor_set(x_269, 1, x_266);
lean_ctor_set(x_269, 2, x_267);
lean_ctor_set(x_269, 3, x_268);
lean_ctor_set(x_99, 2, x_269);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_270 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_270;
}
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_271 = lean_ctor_get(x_99, 1);
lean_inc(x_271);
lean_dec(x_99);
x_272 = lean_ctor_get(x_123, 1);
lean_inc(x_272);
x_273 = lean_ctor_get(x_123, 2);
lean_inc(x_273);
x_274 = lean_ctor_get(x_123, 3);
lean_inc(x_274);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 lean_ctor_release(x_123, 2);
 lean_ctor_release(x_123, 3);
 x_275 = x_123;
} else {
 lean_dec_ref(x_123);
 x_275 = lean_box(0);
}
lean_inc(x_102);
if (lean_is_scalar(x_275)) {
 x_276 = lean_alloc_ctor(2, 4, 0);
} else {
 x_276 = x_275;
}
lean_ctor_set(x_276, 0, x_102);
lean_ctor_set(x_276, 1, x_272);
lean_ctor_set(x_276, 2, x_273);
lean_ctor_set(x_276, 3, x_274);
x_277 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_277, 0, x_102);
lean_ctor_set(x_277, 1, x_271);
lean_ctor_set(x_277, 2, x_276);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_277);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_278 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_278;
}
}
case 3:
{
uint8_t x_279; 
x_279 = !lean_is_exclusive(x_99);
if (x_279 == 0)
{
lean_object* x_280; lean_object* x_281; uint8_t x_282; 
x_280 = lean_ctor_get(x_99, 2);
lean_dec(x_280);
x_281 = lean_ctor_get(x_99, 0);
lean_dec(x_281);
x_282 = !lean_is_exclusive(x_123);
if (x_282 == 0)
{
lean_object* x_283; lean_object* x_284; 
x_283 = lean_ctor_get(x_123, 0);
lean_dec(x_283);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_284 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_284;
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_285 = lean_ctor_get(x_123, 1);
x_286 = lean_ctor_get(x_123, 2);
lean_inc(x_286);
lean_inc(x_285);
lean_dec(x_123);
lean_inc(x_102);
x_287 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_287, 0, x_102);
lean_ctor_set(x_287, 1, x_285);
lean_ctor_set(x_287, 2, x_286);
lean_ctor_set(x_99, 2, x_287);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_288 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_288;
}
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
x_289 = lean_ctor_get(x_99, 1);
lean_inc(x_289);
lean_dec(x_99);
x_290 = lean_ctor_get(x_123, 1);
lean_inc(x_290);
x_291 = lean_ctor_get(x_123, 2);
lean_inc(x_291);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 lean_ctor_release(x_123, 2);
 x_292 = x_123;
} else {
 lean_dec_ref(x_123);
 x_292 = lean_box(0);
}
lean_inc(x_102);
if (lean_is_scalar(x_292)) {
 x_293 = lean_alloc_ctor(3, 3, 0);
} else {
 x_293 = x_292;
}
lean_ctor_set(x_293, 0, x_102);
lean_ctor_set(x_293, 1, x_290);
lean_ctor_set(x_293, 2, x_291);
x_294 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_294, 0, x_102);
lean_ctor_set(x_294, 1, x_289);
lean_ctor_set(x_294, 2, x_293);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_294);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_295 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_295;
}
}
default: 
{
uint8_t x_296; 
x_296 = !lean_is_exclusive(x_99);
if (x_296 == 0)
{
lean_object* x_297; lean_object* x_298; uint8_t x_299; 
x_297 = lean_ctor_get(x_99, 2);
lean_dec(x_297);
x_298 = lean_ctor_get(x_99, 0);
lean_dec(x_298);
x_299 = !lean_is_exclusive(x_123);
if (x_299 == 0)
{
lean_object* x_300; lean_object* x_301; 
x_300 = lean_ctor_get(x_123, 0);
lean_dec(x_300);
lean_inc(x_102);
lean_ctor_set(x_123, 0, x_102);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_301 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_301;
}
else
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; 
x_302 = lean_ctor_get(x_123, 1);
lean_inc(x_302);
lean_dec(x_123);
lean_inc(x_102);
x_303 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_303, 0, x_102);
lean_ctor_set(x_303, 1, x_302);
lean_ctor_set(x_99, 2, x_303);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_304 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_304;
}
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_305 = lean_ctor_get(x_99, 1);
lean_inc(x_305);
lean_dec(x_99);
x_306 = lean_ctor_get(x_123, 1);
lean_inc(x_306);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_307 = x_123;
} else {
 lean_dec_ref(x_123);
 x_307 = lean_box(0);
}
lean_inc(x_102);
if (lean_is_scalar(x_307)) {
 x_308 = lean_alloc_ctor(4, 2, 0);
} else {
 x_308 = x_307;
}
lean_ctor_set(x_308, 0, x_102);
lean_ctor_set(x_308, 1, x_306);
x_309 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_309, 0, x_102);
lean_ctor_set(x_309, 1, x_305);
lean_ctor_set(x_309, 2, x_308);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_309);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_310 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_310;
}
}
}
}
default: 
{
uint8_t x_311; 
x_311 = !lean_is_exclusive(x_99);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; 
x_312 = lean_ctor_get(x_99, 0);
lean_dec(x_312);
lean_ctor_set(x_99, 0, x_102);
lean_inc(x_3);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_313 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_313;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_314 = lean_ctor_get(x_99, 1);
lean_inc(x_314);
lean_dec(x_99);
x_315 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_315, 0, x_102);
lean_ctor_set(x_315, 1, x_314);
lean_inc(x_3);
lean_ctor_set(x_26, 1, x_315);
lean_ctor_set(x_26, 0, x_3);
lean_inc(x_3);
lean_ctor_set(x_4, 0, x_3);
x_316 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_316;
}
}
}
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_317 = lean_ctor_get(x_26, 1);
lean_inc(x_317);
lean_dec(x_26);
x_318 = lean_unsigned_to_nat(1u);
x_319 = lean_nat_add(x_3, x_318);
switch (lean_obj_tag(x_317)) {
case 0:
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 x_320 = x_317;
} else {
 lean_dec_ref(x_317);
 x_320 = lean_box(0);
}
if (lean_is_scalar(x_320)) {
 x_321 = lean_alloc_ctor(0, 1, 0);
} else {
 x_321 = x_320;
}
lean_ctor_set(x_321, 0, x_319);
lean_inc(x_3);
x_322 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_322, 0, x_3);
lean_ctor_set(x_322, 1, x_321);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_322);
lean_ctor_set(x_4, 0, x_3);
x_323 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_323;
}
case 1:
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_324 = lean_ctor_get(x_317, 1);
lean_inc(x_324);
x_325 = lean_ctor_get(x_317, 2);
lean_inc(x_325);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 x_326 = x_317;
} else {
 lean_dec_ref(x_317);
 x_326 = lean_box(0);
}
if (lean_is_scalar(x_326)) {
 x_327 = lean_alloc_ctor(1, 3, 0);
} else {
 x_327 = x_326;
}
lean_ctor_set(x_327, 0, x_319);
lean_ctor_set(x_327, 1, x_324);
lean_ctor_set(x_327, 2, x_325);
lean_inc(x_3);
x_328 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_328, 0, x_3);
lean_ctor_set(x_328, 1, x_327);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_328);
lean_ctor_set(x_4, 0, x_3);
x_329 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_329;
}
case 2:
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_330 = lean_ctor_get(x_317, 1);
lean_inc(x_330);
x_331 = lean_ctor_get(x_317, 2);
lean_inc(x_331);
x_332 = lean_ctor_get(x_317, 3);
lean_inc(x_332);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 lean_ctor_release(x_317, 3);
 x_333 = x_317;
} else {
 lean_dec_ref(x_317);
 x_333 = lean_box(0);
}
if (lean_is_scalar(x_333)) {
 x_334 = lean_alloc_ctor(2, 4, 0);
} else {
 x_334 = x_333;
}
lean_ctor_set(x_334, 0, x_319);
lean_ctor_set(x_334, 1, x_330);
lean_ctor_set(x_334, 2, x_331);
lean_ctor_set(x_334, 3, x_332);
lean_inc(x_3);
x_335 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_335, 0, x_3);
lean_ctor_set(x_335, 1, x_334);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_335);
lean_ctor_set(x_4, 0, x_3);
x_336 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_336;
}
case 3:
{
lean_object* x_337; 
x_337 = lean_ctor_get(x_317, 2);
lean_inc(x_337);
switch (lean_obj_tag(x_337)) {
case 0:
{
lean_object* x_338; 
if (lean_is_exclusive(x_337)) {
 lean_ctor_release(x_337, 0);
 x_338 = x_337;
} else {
 lean_dec_ref(x_337);
 x_338 = lean_box(0);
}
switch (lean_obj_tag(x_95)) {
case 0:
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
lean_dec(x_338);
lean_free_object(x_4);
lean_dec(x_95);
x_339 = lean_ctor_get(x_317, 1);
lean_inc(x_339);
lean_dec(x_317);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_340 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_318, x_3, x_5);
x_341 = l_FirstOrder_Language_BoundedFormula_toPrenexImp(x_1, lean_box(0), x_319, x_339, x_340);
x_342 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_342, 0, x_3);
lean_ctor_set(x_342, 1, x_341);
return x_342;
}
case 1:
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_343 = lean_ctor_get(x_317, 1);
lean_inc(x_343);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 x_344 = x_317;
} else {
 lean_dec_ref(x_317);
 x_344 = lean_box(0);
}
x_345 = lean_ctor_get(x_95, 1);
lean_inc(x_345);
x_346 = lean_ctor_get(x_95, 2);
lean_inc(x_346);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_347 = x_95;
} else {
 lean_dec_ref(x_95);
 x_347 = lean_box(0);
}
lean_inc(x_319);
if (lean_is_scalar(x_338)) {
 x_348 = lean_alloc_ctor(0, 1, 0);
} else {
 x_348 = x_338;
}
lean_ctor_set(x_348, 0, x_319);
if (lean_is_scalar(x_347)) {
 x_349 = lean_alloc_ctor(3, 3, 0);
} else {
 x_349 = x_347;
 lean_ctor_set_tag(x_349, 3);
}
lean_ctor_set(x_349, 0, x_319);
lean_ctor_set(x_349, 1, x_343);
lean_ctor_set(x_349, 2, x_348);
lean_inc(x_3);
x_350 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_350, 0, x_3);
lean_ctor_set(x_350, 1, x_349);
lean_inc(x_3);
if (lean_is_scalar(x_344)) {
 x_351 = lean_alloc_ctor(1, 3, 0);
} else {
 x_351 = x_344;
 lean_ctor_set_tag(x_351, 1);
}
lean_ctor_set(x_351, 0, x_3);
lean_ctor_set(x_351, 1, x_345);
lean_ctor_set(x_351, 2, x_346);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_351);
lean_ctor_set(x_4, 1, x_350);
lean_ctor_set(x_4, 0, x_3);
x_352 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_352;
}
case 2:
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; 
x_353 = lean_ctor_get(x_317, 1);
lean_inc(x_353);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 x_354 = x_317;
} else {
 lean_dec_ref(x_317);
 x_354 = lean_box(0);
}
x_355 = lean_ctor_get(x_95, 1);
lean_inc(x_355);
x_356 = lean_ctor_get(x_95, 2);
lean_inc(x_356);
x_357 = lean_ctor_get(x_95, 3);
lean_inc(x_357);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 lean_ctor_release(x_95, 3);
 x_358 = x_95;
} else {
 lean_dec_ref(x_95);
 x_358 = lean_box(0);
}
lean_inc(x_319);
if (lean_is_scalar(x_338)) {
 x_359 = lean_alloc_ctor(0, 1, 0);
} else {
 x_359 = x_338;
}
lean_ctor_set(x_359, 0, x_319);
if (lean_is_scalar(x_354)) {
 x_360 = lean_alloc_ctor(3, 3, 0);
} else {
 x_360 = x_354;
}
lean_ctor_set(x_360, 0, x_319);
lean_ctor_set(x_360, 1, x_353);
lean_ctor_set(x_360, 2, x_359);
lean_inc(x_3);
x_361 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_361, 0, x_3);
lean_ctor_set(x_361, 1, x_360);
lean_inc(x_3);
if (lean_is_scalar(x_358)) {
 x_362 = lean_alloc_ctor(2, 4, 0);
} else {
 x_362 = x_358;
}
lean_ctor_set(x_362, 0, x_3);
lean_ctor_set(x_362, 1, x_355);
lean_ctor_set(x_362, 2, x_356);
lean_ctor_set(x_362, 3, x_357);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_362);
lean_ctor_set(x_4, 1, x_361);
lean_ctor_set(x_4, 0, x_3);
x_363 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_363;
}
case 3:
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_364 = lean_ctor_get(x_317, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 x_365 = x_317;
} else {
 lean_dec_ref(x_317);
 x_365 = lean_box(0);
}
x_366 = lean_ctor_get(x_95, 1);
lean_inc(x_366);
x_367 = lean_ctor_get(x_95, 2);
lean_inc(x_367);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 x_368 = x_95;
} else {
 lean_dec_ref(x_95);
 x_368 = lean_box(0);
}
lean_inc(x_319);
if (lean_is_scalar(x_338)) {
 x_369 = lean_alloc_ctor(0, 1, 0);
} else {
 x_369 = x_338;
}
lean_ctor_set(x_369, 0, x_319);
if (lean_is_scalar(x_368)) {
 x_370 = lean_alloc_ctor(3, 3, 0);
} else {
 x_370 = x_368;
}
lean_ctor_set(x_370, 0, x_319);
lean_ctor_set(x_370, 1, x_364);
lean_ctor_set(x_370, 2, x_369);
lean_inc(x_3);
x_371 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_371, 0, x_3);
lean_ctor_set(x_371, 1, x_370);
lean_inc(x_3);
if (lean_is_scalar(x_365)) {
 x_372 = lean_alloc_ctor(3, 3, 0);
} else {
 x_372 = x_365;
}
lean_ctor_set(x_372, 0, x_3);
lean_ctor_set(x_372, 1, x_366);
lean_ctor_set(x_372, 2, x_367);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_372);
lean_ctor_set(x_4, 1, x_371);
lean_ctor_set(x_4, 0, x_3);
x_373 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_373;
}
default: 
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
x_374 = lean_ctor_get(x_317, 1);
lean_inc(x_374);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 x_375 = x_317;
} else {
 lean_dec_ref(x_317);
 x_375 = lean_box(0);
}
x_376 = lean_ctor_get(x_95, 1);
lean_inc(x_376);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_377 = x_95;
} else {
 lean_dec_ref(x_95);
 x_377 = lean_box(0);
}
lean_inc(x_319);
if (lean_is_scalar(x_338)) {
 x_378 = lean_alloc_ctor(0, 1, 0);
} else {
 x_378 = x_338;
}
lean_ctor_set(x_378, 0, x_319);
if (lean_is_scalar(x_375)) {
 x_379 = lean_alloc_ctor(3, 3, 0);
} else {
 x_379 = x_375;
}
lean_ctor_set(x_379, 0, x_319);
lean_ctor_set(x_379, 1, x_374);
lean_ctor_set(x_379, 2, x_378);
lean_inc(x_3);
if (lean_is_scalar(x_377)) {
 x_380 = lean_alloc_ctor(4, 2, 0);
} else {
 x_380 = x_377;
}
lean_ctor_set(x_380, 0, x_3);
lean_ctor_set(x_380, 1, x_379);
lean_inc(x_3);
x_381 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_381, 0, x_3);
lean_ctor_set(x_381, 1, x_376);
lean_inc(x_3);
lean_ctor_set(x_4, 2, x_381);
lean_ctor_set(x_4, 1, x_380);
lean_ctor_set(x_4, 0, x_3);
x_382 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_382;
}
}
}
case 1:
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; 
x_383 = lean_ctor_get(x_317, 1);
lean_inc(x_383);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 x_384 = x_317;
} else {
 lean_dec_ref(x_317);
 x_384 = lean_box(0);
}
x_385 = lean_ctor_get(x_337, 1);
lean_inc(x_385);
x_386 = lean_ctor_get(x_337, 2);
lean_inc(x_386);
if (lean_is_exclusive(x_337)) {
 lean_ctor_release(x_337, 0);
 lean_ctor_release(x_337, 1);
 lean_ctor_release(x_337, 2);
 x_387 = x_337;
} else {
 lean_dec_ref(x_337);
 x_387 = lean_box(0);
}
lean_inc(x_319);
if (lean_is_scalar(x_387)) {
 x_388 = lean_alloc_ctor(1, 3, 0);
} else {
 x_388 = x_387;
}
lean_ctor_set(x_388, 0, x_319);
lean_ctor_set(x_388, 1, x_385);
lean_ctor_set(x_388, 2, x_386);
if (lean_is_scalar(x_384)) {
 x_389 = lean_alloc_ctor(3, 3, 0);
} else {
 x_389 = x_384;
}
lean_ctor_set(x_389, 0, x_319);
lean_ctor_set(x_389, 1, x_383);
lean_ctor_set(x_389, 2, x_388);
lean_inc(x_3);
x_390 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_390, 0, x_3);
lean_ctor_set(x_390, 1, x_389);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_390);
lean_ctor_set(x_4, 0, x_3);
x_391 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_391;
}
case 2:
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; 
x_392 = lean_ctor_get(x_317, 1);
lean_inc(x_392);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 x_393 = x_317;
} else {
 lean_dec_ref(x_317);
 x_393 = lean_box(0);
}
x_394 = lean_ctor_get(x_337, 1);
lean_inc(x_394);
x_395 = lean_ctor_get(x_337, 2);
lean_inc(x_395);
x_396 = lean_ctor_get(x_337, 3);
lean_inc(x_396);
if (lean_is_exclusive(x_337)) {
 lean_ctor_release(x_337, 0);
 lean_ctor_release(x_337, 1);
 lean_ctor_release(x_337, 2);
 lean_ctor_release(x_337, 3);
 x_397 = x_337;
} else {
 lean_dec_ref(x_337);
 x_397 = lean_box(0);
}
lean_inc(x_319);
if (lean_is_scalar(x_397)) {
 x_398 = lean_alloc_ctor(2, 4, 0);
} else {
 x_398 = x_397;
}
lean_ctor_set(x_398, 0, x_319);
lean_ctor_set(x_398, 1, x_394);
lean_ctor_set(x_398, 2, x_395);
lean_ctor_set(x_398, 3, x_396);
if (lean_is_scalar(x_393)) {
 x_399 = lean_alloc_ctor(3, 3, 0);
} else {
 x_399 = x_393;
}
lean_ctor_set(x_399, 0, x_319);
lean_ctor_set(x_399, 1, x_392);
lean_ctor_set(x_399, 2, x_398);
lean_inc(x_3);
x_400 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_400, 0, x_3);
lean_ctor_set(x_400, 1, x_399);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_400);
lean_ctor_set(x_4, 0, x_3);
x_401 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_401;
}
case 3:
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; 
x_402 = lean_ctor_get(x_317, 1);
lean_inc(x_402);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 x_403 = x_317;
} else {
 lean_dec_ref(x_317);
 x_403 = lean_box(0);
}
x_404 = lean_ctor_get(x_337, 1);
lean_inc(x_404);
x_405 = lean_ctor_get(x_337, 2);
lean_inc(x_405);
if (lean_is_exclusive(x_337)) {
 lean_ctor_release(x_337, 0);
 lean_ctor_release(x_337, 1);
 lean_ctor_release(x_337, 2);
 x_406 = x_337;
} else {
 lean_dec_ref(x_337);
 x_406 = lean_box(0);
}
lean_inc(x_319);
if (lean_is_scalar(x_406)) {
 x_407 = lean_alloc_ctor(3, 3, 0);
} else {
 x_407 = x_406;
}
lean_ctor_set(x_407, 0, x_319);
lean_ctor_set(x_407, 1, x_404);
lean_ctor_set(x_407, 2, x_405);
if (lean_is_scalar(x_403)) {
 x_408 = lean_alloc_ctor(3, 3, 0);
} else {
 x_408 = x_403;
}
lean_ctor_set(x_408, 0, x_319);
lean_ctor_set(x_408, 1, x_402);
lean_ctor_set(x_408, 2, x_407);
lean_inc(x_3);
x_409 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_409, 0, x_3);
lean_ctor_set(x_409, 1, x_408);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_409);
lean_ctor_set(x_4, 0, x_3);
x_410 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_410;
}
default: 
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_411 = lean_ctor_get(x_317, 1);
lean_inc(x_411);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 lean_ctor_release(x_317, 2);
 x_412 = x_317;
} else {
 lean_dec_ref(x_317);
 x_412 = lean_box(0);
}
x_413 = lean_ctor_get(x_337, 1);
lean_inc(x_413);
if (lean_is_exclusive(x_337)) {
 lean_ctor_release(x_337, 0);
 lean_ctor_release(x_337, 1);
 x_414 = x_337;
} else {
 lean_dec_ref(x_337);
 x_414 = lean_box(0);
}
lean_inc(x_319);
if (lean_is_scalar(x_414)) {
 x_415 = lean_alloc_ctor(4, 2, 0);
} else {
 x_415 = x_414;
}
lean_ctor_set(x_415, 0, x_319);
lean_ctor_set(x_415, 1, x_413);
if (lean_is_scalar(x_412)) {
 x_416 = lean_alloc_ctor(3, 3, 0);
} else {
 x_416 = x_412;
}
lean_ctor_set(x_416, 0, x_319);
lean_ctor_set(x_416, 1, x_411);
lean_ctor_set(x_416, 2, x_415);
lean_inc(x_3);
x_417 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_417, 0, x_3);
lean_ctor_set(x_417, 1, x_416);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_417);
lean_ctor_set(x_4, 0, x_3);
x_418 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_418;
}
}
}
default: 
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
x_419 = lean_ctor_get(x_317, 1);
lean_inc(x_419);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 x_420 = x_317;
} else {
 lean_dec_ref(x_317);
 x_420 = lean_box(0);
}
if (lean_is_scalar(x_420)) {
 x_421 = lean_alloc_ctor(4, 2, 0);
} else {
 x_421 = x_420;
}
lean_ctor_set(x_421, 0, x_319);
lean_ctor_set(x_421, 1, x_419);
lean_inc(x_3);
x_422 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_422, 0, x_3);
lean_ctor_set(x_422, 1, x_421);
lean_inc(x_3);
lean_ctor_set(x_4, 1, x_422);
lean_ctor_set(x_4, 0, x_3);
x_423 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_4, x_5);
return x_423;
}
}
}
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; 
x_424 = lean_ctor_get(x_4, 2);
lean_inc(x_424);
lean_dec(x_4);
x_425 = lean_ctor_get(x_26, 1);
lean_inc(x_425);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_426 = x_26;
} else {
 lean_dec_ref(x_26);
 x_426 = lean_box(0);
}
x_427 = lean_unsigned_to_nat(1u);
x_428 = lean_nat_add(x_3, x_427);
switch (lean_obj_tag(x_425)) {
case 0:
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 x_429 = x_425;
} else {
 lean_dec_ref(x_425);
 x_429 = lean_box(0);
}
if (lean_is_scalar(x_429)) {
 x_430 = lean_alloc_ctor(0, 1, 0);
} else {
 x_430 = x_429;
}
lean_ctor_set(x_430, 0, x_428);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_431 = lean_alloc_ctor(4, 2, 0);
} else {
 x_431 = x_426;
}
lean_ctor_set(x_431, 0, x_3);
lean_ctor_set(x_431, 1, x_430);
lean_inc(x_3);
x_432 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_432, 0, x_3);
lean_ctor_set(x_432, 1, x_431);
lean_ctor_set(x_432, 2, x_424);
x_433 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_432, x_5);
return x_433;
}
case 1:
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; 
x_434 = lean_ctor_get(x_425, 1);
lean_inc(x_434);
x_435 = lean_ctor_get(x_425, 2);
lean_inc(x_435);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 x_436 = x_425;
} else {
 lean_dec_ref(x_425);
 x_436 = lean_box(0);
}
if (lean_is_scalar(x_436)) {
 x_437 = lean_alloc_ctor(1, 3, 0);
} else {
 x_437 = x_436;
}
lean_ctor_set(x_437, 0, x_428);
lean_ctor_set(x_437, 1, x_434);
lean_ctor_set(x_437, 2, x_435);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_438 = lean_alloc_ctor(4, 2, 0);
} else {
 x_438 = x_426;
}
lean_ctor_set(x_438, 0, x_3);
lean_ctor_set(x_438, 1, x_437);
lean_inc(x_3);
x_439 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_439, 0, x_3);
lean_ctor_set(x_439, 1, x_438);
lean_ctor_set(x_439, 2, x_424);
x_440 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_439, x_5);
return x_440;
}
case 2:
{
lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; 
x_441 = lean_ctor_get(x_425, 1);
lean_inc(x_441);
x_442 = lean_ctor_get(x_425, 2);
lean_inc(x_442);
x_443 = lean_ctor_get(x_425, 3);
lean_inc(x_443);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 lean_ctor_release(x_425, 3);
 x_444 = x_425;
} else {
 lean_dec_ref(x_425);
 x_444 = lean_box(0);
}
if (lean_is_scalar(x_444)) {
 x_445 = lean_alloc_ctor(2, 4, 0);
} else {
 x_445 = x_444;
}
lean_ctor_set(x_445, 0, x_428);
lean_ctor_set(x_445, 1, x_441);
lean_ctor_set(x_445, 2, x_442);
lean_ctor_set(x_445, 3, x_443);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_446 = lean_alloc_ctor(4, 2, 0);
} else {
 x_446 = x_426;
}
lean_ctor_set(x_446, 0, x_3);
lean_ctor_set(x_446, 1, x_445);
lean_inc(x_3);
x_447 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_447, 0, x_3);
lean_ctor_set(x_447, 1, x_446);
lean_ctor_set(x_447, 2, x_424);
x_448 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_447, x_5);
return x_448;
}
case 3:
{
lean_object* x_449; 
x_449 = lean_ctor_get(x_425, 2);
lean_inc(x_449);
switch (lean_obj_tag(x_449)) {
case 0:
{
lean_object* x_450; 
if (lean_is_exclusive(x_449)) {
 lean_ctor_release(x_449, 0);
 x_450 = x_449;
} else {
 lean_dec_ref(x_449);
 x_450 = lean_box(0);
}
switch (lean_obj_tag(x_424)) {
case 0:
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
lean_dec(x_450);
lean_dec(x_424);
x_451 = lean_ctor_get(x_425, 1);
lean_inc(x_451);
lean_dec(x_425);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_452 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_427, x_3, x_5);
x_453 = l_FirstOrder_Language_BoundedFormula_toPrenexImp(x_1, lean_box(0), x_428, x_451, x_452);
if (lean_is_scalar(x_426)) {
 x_454 = lean_alloc_ctor(4, 2, 0);
} else {
 x_454 = x_426;
}
lean_ctor_set(x_454, 0, x_3);
lean_ctor_set(x_454, 1, x_453);
return x_454;
}
case 1:
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
x_455 = lean_ctor_get(x_425, 1);
lean_inc(x_455);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 x_456 = x_425;
} else {
 lean_dec_ref(x_425);
 x_456 = lean_box(0);
}
x_457 = lean_ctor_get(x_424, 1);
lean_inc(x_457);
x_458 = lean_ctor_get(x_424, 2);
lean_inc(x_458);
if (lean_is_exclusive(x_424)) {
 lean_ctor_release(x_424, 0);
 lean_ctor_release(x_424, 1);
 lean_ctor_release(x_424, 2);
 x_459 = x_424;
} else {
 lean_dec_ref(x_424);
 x_459 = lean_box(0);
}
lean_inc(x_428);
if (lean_is_scalar(x_450)) {
 x_460 = lean_alloc_ctor(0, 1, 0);
} else {
 x_460 = x_450;
}
lean_ctor_set(x_460, 0, x_428);
if (lean_is_scalar(x_459)) {
 x_461 = lean_alloc_ctor(3, 3, 0);
} else {
 x_461 = x_459;
 lean_ctor_set_tag(x_461, 3);
}
lean_ctor_set(x_461, 0, x_428);
lean_ctor_set(x_461, 1, x_455);
lean_ctor_set(x_461, 2, x_460);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_462 = lean_alloc_ctor(4, 2, 0);
} else {
 x_462 = x_426;
}
lean_ctor_set(x_462, 0, x_3);
lean_ctor_set(x_462, 1, x_461);
lean_inc(x_3);
if (lean_is_scalar(x_456)) {
 x_463 = lean_alloc_ctor(1, 3, 0);
} else {
 x_463 = x_456;
 lean_ctor_set_tag(x_463, 1);
}
lean_ctor_set(x_463, 0, x_3);
lean_ctor_set(x_463, 1, x_457);
lean_ctor_set(x_463, 2, x_458);
lean_inc(x_3);
x_464 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_464, 0, x_3);
lean_ctor_set(x_464, 1, x_462);
lean_ctor_set(x_464, 2, x_463);
x_465 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_464, x_5);
return x_465;
}
case 2:
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; 
x_466 = lean_ctor_get(x_425, 1);
lean_inc(x_466);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 x_467 = x_425;
} else {
 lean_dec_ref(x_425);
 x_467 = lean_box(0);
}
x_468 = lean_ctor_get(x_424, 1);
lean_inc(x_468);
x_469 = lean_ctor_get(x_424, 2);
lean_inc(x_469);
x_470 = lean_ctor_get(x_424, 3);
lean_inc(x_470);
if (lean_is_exclusive(x_424)) {
 lean_ctor_release(x_424, 0);
 lean_ctor_release(x_424, 1);
 lean_ctor_release(x_424, 2);
 lean_ctor_release(x_424, 3);
 x_471 = x_424;
} else {
 lean_dec_ref(x_424);
 x_471 = lean_box(0);
}
lean_inc(x_428);
if (lean_is_scalar(x_450)) {
 x_472 = lean_alloc_ctor(0, 1, 0);
} else {
 x_472 = x_450;
}
lean_ctor_set(x_472, 0, x_428);
if (lean_is_scalar(x_467)) {
 x_473 = lean_alloc_ctor(3, 3, 0);
} else {
 x_473 = x_467;
}
lean_ctor_set(x_473, 0, x_428);
lean_ctor_set(x_473, 1, x_466);
lean_ctor_set(x_473, 2, x_472);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_474 = lean_alloc_ctor(4, 2, 0);
} else {
 x_474 = x_426;
}
lean_ctor_set(x_474, 0, x_3);
lean_ctor_set(x_474, 1, x_473);
lean_inc(x_3);
if (lean_is_scalar(x_471)) {
 x_475 = lean_alloc_ctor(2, 4, 0);
} else {
 x_475 = x_471;
}
lean_ctor_set(x_475, 0, x_3);
lean_ctor_set(x_475, 1, x_468);
lean_ctor_set(x_475, 2, x_469);
lean_ctor_set(x_475, 3, x_470);
lean_inc(x_3);
x_476 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_476, 0, x_3);
lean_ctor_set(x_476, 1, x_474);
lean_ctor_set(x_476, 2, x_475);
x_477 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_476, x_5);
return x_477;
}
case 3:
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; 
x_478 = lean_ctor_get(x_425, 1);
lean_inc(x_478);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 x_479 = x_425;
} else {
 lean_dec_ref(x_425);
 x_479 = lean_box(0);
}
x_480 = lean_ctor_get(x_424, 1);
lean_inc(x_480);
x_481 = lean_ctor_get(x_424, 2);
lean_inc(x_481);
if (lean_is_exclusive(x_424)) {
 lean_ctor_release(x_424, 0);
 lean_ctor_release(x_424, 1);
 lean_ctor_release(x_424, 2);
 x_482 = x_424;
} else {
 lean_dec_ref(x_424);
 x_482 = lean_box(0);
}
lean_inc(x_428);
if (lean_is_scalar(x_450)) {
 x_483 = lean_alloc_ctor(0, 1, 0);
} else {
 x_483 = x_450;
}
lean_ctor_set(x_483, 0, x_428);
if (lean_is_scalar(x_482)) {
 x_484 = lean_alloc_ctor(3, 3, 0);
} else {
 x_484 = x_482;
}
lean_ctor_set(x_484, 0, x_428);
lean_ctor_set(x_484, 1, x_478);
lean_ctor_set(x_484, 2, x_483);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_485 = lean_alloc_ctor(4, 2, 0);
} else {
 x_485 = x_426;
}
lean_ctor_set(x_485, 0, x_3);
lean_ctor_set(x_485, 1, x_484);
lean_inc(x_3);
if (lean_is_scalar(x_479)) {
 x_486 = lean_alloc_ctor(3, 3, 0);
} else {
 x_486 = x_479;
}
lean_ctor_set(x_486, 0, x_3);
lean_ctor_set(x_486, 1, x_480);
lean_ctor_set(x_486, 2, x_481);
lean_inc(x_3);
x_487 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_487, 0, x_3);
lean_ctor_set(x_487, 1, x_485);
lean_ctor_set(x_487, 2, x_486);
x_488 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_487, x_5);
return x_488;
}
default: 
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; 
x_489 = lean_ctor_get(x_425, 1);
lean_inc(x_489);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 x_490 = x_425;
} else {
 lean_dec_ref(x_425);
 x_490 = lean_box(0);
}
x_491 = lean_ctor_get(x_424, 1);
lean_inc(x_491);
if (lean_is_exclusive(x_424)) {
 lean_ctor_release(x_424, 0);
 lean_ctor_release(x_424, 1);
 x_492 = x_424;
} else {
 lean_dec_ref(x_424);
 x_492 = lean_box(0);
}
lean_inc(x_428);
if (lean_is_scalar(x_450)) {
 x_493 = lean_alloc_ctor(0, 1, 0);
} else {
 x_493 = x_450;
}
lean_ctor_set(x_493, 0, x_428);
if (lean_is_scalar(x_490)) {
 x_494 = lean_alloc_ctor(3, 3, 0);
} else {
 x_494 = x_490;
}
lean_ctor_set(x_494, 0, x_428);
lean_ctor_set(x_494, 1, x_489);
lean_ctor_set(x_494, 2, x_493);
lean_inc(x_3);
if (lean_is_scalar(x_492)) {
 x_495 = lean_alloc_ctor(4, 2, 0);
} else {
 x_495 = x_492;
}
lean_ctor_set(x_495, 0, x_3);
lean_ctor_set(x_495, 1, x_494);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_496 = lean_alloc_ctor(4, 2, 0);
} else {
 x_496 = x_426;
}
lean_ctor_set(x_496, 0, x_3);
lean_ctor_set(x_496, 1, x_491);
lean_inc(x_3);
x_497 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_497, 0, x_3);
lean_ctor_set(x_497, 1, x_495);
lean_ctor_set(x_497, 2, x_496);
x_498 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_497, x_5);
return x_498;
}
}
}
case 1:
{
lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; 
x_499 = lean_ctor_get(x_425, 1);
lean_inc(x_499);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 x_500 = x_425;
} else {
 lean_dec_ref(x_425);
 x_500 = lean_box(0);
}
x_501 = lean_ctor_get(x_449, 1);
lean_inc(x_501);
x_502 = lean_ctor_get(x_449, 2);
lean_inc(x_502);
if (lean_is_exclusive(x_449)) {
 lean_ctor_release(x_449, 0);
 lean_ctor_release(x_449, 1);
 lean_ctor_release(x_449, 2);
 x_503 = x_449;
} else {
 lean_dec_ref(x_449);
 x_503 = lean_box(0);
}
lean_inc(x_428);
if (lean_is_scalar(x_503)) {
 x_504 = lean_alloc_ctor(1, 3, 0);
} else {
 x_504 = x_503;
}
lean_ctor_set(x_504, 0, x_428);
lean_ctor_set(x_504, 1, x_501);
lean_ctor_set(x_504, 2, x_502);
if (lean_is_scalar(x_500)) {
 x_505 = lean_alloc_ctor(3, 3, 0);
} else {
 x_505 = x_500;
}
lean_ctor_set(x_505, 0, x_428);
lean_ctor_set(x_505, 1, x_499);
lean_ctor_set(x_505, 2, x_504);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_506 = lean_alloc_ctor(4, 2, 0);
} else {
 x_506 = x_426;
}
lean_ctor_set(x_506, 0, x_3);
lean_ctor_set(x_506, 1, x_505);
lean_inc(x_3);
x_507 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_507, 0, x_3);
lean_ctor_set(x_507, 1, x_506);
lean_ctor_set(x_507, 2, x_424);
x_508 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_507, x_5);
return x_508;
}
case 2:
{
lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; 
x_509 = lean_ctor_get(x_425, 1);
lean_inc(x_509);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 x_510 = x_425;
} else {
 lean_dec_ref(x_425);
 x_510 = lean_box(0);
}
x_511 = lean_ctor_get(x_449, 1);
lean_inc(x_511);
x_512 = lean_ctor_get(x_449, 2);
lean_inc(x_512);
x_513 = lean_ctor_get(x_449, 3);
lean_inc(x_513);
if (lean_is_exclusive(x_449)) {
 lean_ctor_release(x_449, 0);
 lean_ctor_release(x_449, 1);
 lean_ctor_release(x_449, 2);
 lean_ctor_release(x_449, 3);
 x_514 = x_449;
} else {
 lean_dec_ref(x_449);
 x_514 = lean_box(0);
}
lean_inc(x_428);
if (lean_is_scalar(x_514)) {
 x_515 = lean_alloc_ctor(2, 4, 0);
} else {
 x_515 = x_514;
}
lean_ctor_set(x_515, 0, x_428);
lean_ctor_set(x_515, 1, x_511);
lean_ctor_set(x_515, 2, x_512);
lean_ctor_set(x_515, 3, x_513);
if (lean_is_scalar(x_510)) {
 x_516 = lean_alloc_ctor(3, 3, 0);
} else {
 x_516 = x_510;
}
lean_ctor_set(x_516, 0, x_428);
lean_ctor_set(x_516, 1, x_509);
lean_ctor_set(x_516, 2, x_515);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_517 = lean_alloc_ctor(4, 2, 0);
} else {
 x_517 = x_426;
}
lean_ctor_set(x_517, 0, x_3);
lean_ctor_set(x_517, 1, x_516);
lean_inc(x_3);
x_518 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_518, 0, x_3);
lean_ctor_set(x_518, 1, x_517);
lean_ctor_set(x_518, 2, x_424);
x_519 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_518, x_5);
return x_519;
}
case 3:
{
lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; 
x_520 = lean_ctor_get(x_425, 1);
lean_inc(x_520);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 x_521 = x_425;
} else {
 lean_dec_ref(x_425);
 x_521 = lean_box(0);
}
x_522 = lean_ctor_get(x_449, 1);
lean_inc(x_522);
x_523 = lean_ctor_get(x_449, 2);
lean_inc(x_523);
if (lean_is_exclusive(x_449)) {
 lean_ctor_release(x_449, 0);
 lean_ctor_release(x_449, 1);
 lean_ctor_release(x_449, 2);
 x_524 = x_449;
} else {
 lean_dec_ref(x_449);
 x_524 = lean_box(0);
}
lean_inc(x_428);
if (lean_is_scalar(x_524)) {
 x_525 = lean_alloc_ctor(3, 3, 0);
} else {
 x_525 = x_524;
}
lean_ctor_set(x_525, 0, x_428);
lean_ctor_set(x_525, 1, x_522);
lean_ctor_set(x_525, 2, x_523);
if (lean_is_scalar(x_521)) {
 x_526 = lean_alloc_ctor(3, 3, 0);
} else {
 x_526 = x_521;
}
lean_ctor_set(x_526, 0, x_428);
lean_ctor_set(x_526, 1, x_520);
lean_ctor_set(x_526, 2, x_525);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_527 = lean_alloc_ctor(4, 2, 0);
} else {
 x_527 = x_426;
}
lean_ctor_set(x_527, 0, x_3);
lean_ctor_set(x_527, 1, x_526);
lean_inc(x_3);
x_528 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_528, 0, x_3);
lean_ctor_set(x_528, 1, x_527);
lean_ctor_set(x_528, 2, x_424);
x_529 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_528, x_5);
return x_529;
}
default: 
{
lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; 
x_530 = lean_ctor_get(x_425, 1);
lean_inc(x_530);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 lean_ctor_release(x_425, 2);
 x_531 = x_425;
} else {
 lean_dec_ref(x_425);
 x_531 = lean_box(0);
}
x_532 = lean_ctor_get(x_449, 1);
lean_inc(x_532);
if (lean_is_exclusive(x_449)) {
 lean_ctor_release(x_449, 0);
 lean_ctor_release(x_449, 1);
 x_533 = x_449;
} else {
 lean_dec_ref(x_449);
 x_533 = lean_box(0);
}
lean_inc(x_428);
if (lean_is_scalar(x_533)) {
 x_534 = lean_alloc_ctor(4, 2, 0);
} else {
 x_534 = x_533;
}
lean_ctor_set(x_534, 0, x_428);
lean_ctor_set(x_534, 1, x_532);
if (lean_is_scalar(x_531)) {
 x_535 = lean_alloc_ctor(3, 3, 0);
} else {
 x_535 = x_531;
}
lean_ctor_set(x_535, 0, x_428);
lean_ctor_set(x_535, 1, x_530);
lean_ctor_set(x_535, 2, x_534);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_536 = lean_alloc_ctor(4, 2, 0);
} else {
 x_536 = x_426;
}
lean_ctor_set(x_536, 0, x_3);
lean_ctor_set(x_536, 1, x_535);
lean_inc(x_3);
x_537 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_537, 0, x_3);
lean_ctor_set(x_537, 1, x_536);
lean_ctor_set(x_537, 2, x_424);
x_538 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_537, x_5);
return x_538;
}
}
}
default: 
{
lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; 
x_539 = lean_ctor_get(x_425, 1);
lean_inc(x_539);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 x_540 = x_425;
} else {
 lean_dec_ref(x_425);
 x_540 = lean_box(0);
}
if (lean_is_scalar(x_540)) {
 x_541 = lean_alloc_ctor(4, 2, 0);
} else {
 x_541 = x_540;
}
lean_ctor_set(x_541, 0, x_428);
lean_ctor_set(x_541, 1, x_539);
lean_inc(x_3);
if (lean_is_scalar(x_426)) {
 x_542 = lean_alloc_ctor(4, 2, 0);
} else {
 x_542 = x_426;
}
lean_ctor_set(x_542, 0, x_3);
lean_ctor_set(x_542, 1, x_541);
lean_inc(x_3);
x_543 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_543, 0, x_3);
lean_ctor_set(x_543, 1, x_542);
lean_ctor_set(x_543, 2, x_424);
x_544 = l_FirstOrder_Language_BoundedFormula_toPrenexImpRight(x_1, lean_box(0), x_3, x_543, x_5);
return x_544;
}
}
}
}
}
}
default: 
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; 
x_545 = lean_ctor_get(x_4, 1);
lean_inc(x_545);
lean_dec(x_4);
x_546 = lean_unsigned_to_nat(1u);
x_547 = lean_nat_add(x_3, x_546);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_548 = l_FirstOrder_Language_BoundedFormula_liftAt(x_1, lean_box(0), x_3, x_546, x_3, x_5);
lean_inc(x_1);
x_549 = l_FirstOrder_Language_BoundedFormula_toPrenexImp(x_1, lean_box(0), x_547, x_545, x_548);
x_550 = l_FirstOrder_Language_BoundedFormula_ex(x_1, lean_box(0), x_3, x_549);
lean_dec(x_1);
return x_550;
}
}
}
}
LEAN_EXPORT lean_object* l_FirstOrder_Language_BoundedFormula_toPrenex(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_7; 
lean_dec(x_4);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_3);
return x_7;
}
}
case 1:
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_4, 0);
lean_dec(x_9);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_4, 1);
x_11 = lean_ctor_get(x_4, 2);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_4);
x_12 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
case 2:
{
uint8_t x_13; 
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_4);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_4, 0);
lean_dec(x_14);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_4, 1);
x_16 = lean_ctor_get(x_4, 2);
x_17 = lean_ctor_get(x_4, 3);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_4);
x_18 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_18, 0, x_3);
lean_ctor_set(x_18, 1, x_15);
lean_ctor_set(x_18, 2, x_16);
lean_ctor_set(x_18, 3, x_17);
return x_18;
}
}
case 3:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_21 = l_FirstOrder_Language_BoundedFormula_toPrenex(x_1, lean_box(0), x_3, x_19);
lean_inc(x_3);
lean_inc(x_1);
x_22 = l_FirstOrder_Language_BoundedFormula_toPrenex(x_1, lean_box(0), x_3, x_20);
x_23 = l_FirstOrder_Language_BoundedFormula_toPrenexImp(x_1, lean_box(0), x_3, x_21, x_22);
return x_23;
}
default: 
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_4);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_4, 1);
x_26 = lean_ctor_get(x_4, 0);
lean_dec(x_26);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_3, x_27);
x_29 = l_FirstOrder_Language_BoundedFormula_toPrenex(x_1, lean_box(0), x_28, x_25);
lean_ctor_set(x_4, 1, x_29);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_4, 1);
lean_inc(x_30);
lean_dec(x_4);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_3, x_31);
x_33 = l_FirstOrder_Language_BoundedFormula_toPrenex(x_1, lean_box(0), x_32, x_30);
x_34 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_34, 0, x_3);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_VerifiedAgora_tagger(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_ModelTheory_Equivalence(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_ModelTheory_Complexity(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_VerifiedAgora_tagger(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_ModelTheory_Equivalence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
