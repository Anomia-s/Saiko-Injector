/**
 * Function: entity_s_is_not_a_primitive_type
 * Address:  1405e1370
 * Signature: undefined entity_s_is_not_a_primitive_type(void)
 * Body size: 1515 bytes
 */


undefined8
entity_s_is_not_a_primitive_type
          (longlong param_1,undefined8 param_2,int param_3,Decoration<__int64> *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  Decoration<__int64> *this;
  longlong lVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  char *pcVar14;
  
  puVar6 = (undefined4 *)FUN_1400ba4f0(param_1,param_2,0x16e);
  if (puVar6 == (undefined4 *)0x0) {
    uVar7 = FUN_1403ae340(param_1,0,param_2,".",0);
    pcVar14 = "missing reflection data for type \'%s\'";
    uVar13 = 0x20c;
LAB_1405e1420:
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/serializer.c"
                  ,uVar13,pcVar14,uVar7);
    (*DAT_1415033b0)(uVar7);
    return 0xffffffff;
  }
  switch(*puVar6) {
  case 0:
    piVar11 = (int *)FUN_1400ba4f0(param_1,param_2,0x163);
    if (piVar11 == (int *)0x0) {
      uVar7 = FUN_1403ae340(param_1,0,param_2,".",0);
      pcVar14 = "entity \'%s\' is not a primitive type";
      uVar13 = 0xc2;
      goto LAB_1405e1420;
    }
    iVar3 = *piVar11;
    if (0x11 < iVar3 - 1U) {
      redabortreset_bluesreset
                (7,
                 "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/serializer.c"
                 ,0x9f,0);
      (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
      abort();
    }
    piVar11 = (int *)FUN_1403b2f60(0,param_4,0x38);
    *piVar11 = iVar3 + 0xc;
    goto LAB_1405e1724;
  case 1:
    piVar11 = (int *)FUN_1403b2f60(0,param_4,0x38);
    *piVar11 = 0xb;
    *(undefined2 *)(piVar11 + 7) = 1;
    piVar11[4] = 0;
    piVar11[5] = 0;
    *(undefined8 *)((longlong)piVar11 + 0x1e) = 0;
    *(undefined8 *)((longlong)piVar11 + 0x26) = 0;
    piVar11[10] = 0;
    piVar11[0xb] = 0;
    piVar11[0xc] = 0;
    piVar11[0xd] = 0;
    piVar11[2] = param_3;
    *(undefined8 *)(piVar11 + 8) = param_2;
    uVar7 = FUN_1403a5610(param_1,param_2);
    *(undefined8 *)(piVar11 + 10) = uVar7;
    puVar10 = (undefined8 *)FUN_1400ba4f0(param_1,param_2,0x166);
    uVar7 = *puVar10;
    goto LAB_1405e183d;
  case 2:
    puVar6 = (undefined4 *)FUN_1403b2f60(0,param_4,0x38);
    *puVar6 = 10;
    *(undefined2 *)(puVar6 + 7) = 1;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1e) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x26) = 0;
    *(undefined8 *)(puVar6 + 10) = 0;
    *(undefined8 *)(puVar6 + 0xc) = 0;
    puVar6[2] = param_3;
    *(undefined8 *)(puVar6 + 8) = param_2;
    uVar7 = FUN_1403a5610(param_1,param_2);
    *(undefined8 *)(puVar6 + 10) = uVar7;
    puVar10 = (undefined8 *)FUN_1400ba4f0(param_1,param_2,0x166);
    *(undefined8 *)(puVar6 + 0xc) = *puVar10;
    puVar10 = (undefined8 *)FUN_1400ba4f0(param_1,param_2,0x164);
    puVar8 = (undefined4 *)FUN_1400ba4f0(param_1,*puVar10,0x163);
    switch(*puVar8) {
    case 1:
    case 2:
    case 3:
    case 0xc:
    case 0xd:
    case 0x10:
    case 0x11:
    case 0x12:
      redabortreset_bluesreset
                (7,
                 "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/serializer.c"
                 ,0x114,"invalid primitive type kind for underlying enum type");
      (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
      abort();
    case 4:
      puVar6[1] = 0x10;
      break;
    case 5:
      puVar6[1] = 0x11;
      break;
    case 6:
      puVar6[1] = 0x12;
      break;
    case 7:
      puVar6[1] = 0x13;
      break;
    case 8:
      puVar6[1] = 0x14;
      break;
    case 9:
      puVar6[1] = 0x15;
      break;
    case 10:
      puVar6[1] = 0x16;
      break;
    case 0xb:
      puVar6[1] = 0x17;
      break;
    case 0xe:
      puVar6[1] = 0x1a;
      break;
    case 0xf:
      puVar6[1] = 0x1b;
    }
    break;
  case 3:
    this = (Decoration<__int64> *)FUN_1400ba4f0(param_1,param_2,0x169);
    uVar1 = _anon_C953E3F2::Decoration<__int64>::vfunction3(param_4);
    puVar6 = (undefined4 *)FUN_1403b2f60(0,param_4,0x38);
    *puVar6 = 0;
    *(undefined2 *)(puVar6 + 7) = 1;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1e) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x26) = 0;
    *(undefined8 *)(puVar6 + 10) = 0;
    *(undefined8 *)(puVar6 + 0xc) = 0;
    puVar6[2] = param_3;
    *(undefined8 *)(puVar6 + 8) = param_2;
    uVar7 = FUN_1403a5610(param_1,param_2);
    *(undefined8 *)(puVar6 + 10) = uVar7;
    lVar9 = FUN_140106180(this);
    uVar2 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
    if (uVar2 != 0) {
      uVar7 = FUN_1403919e0(param_1 + 0xcc0);
      *(undefined8 *)(puVar6 + 0xc) = uVar7;
      if (0 < (int)uVar2) {
        puVar6 = (undefined4 *)(lVar9 + 0x14);
        uVar12 = 0;
        do {
          iVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3(param_4);
          if ((int)puVar6[-1] < 1) {
            iVar4 = entity_s_is_not_a_primitive_type
                              (param_1,*(undefined8 *)(puVar6 + -3),*puVar6,param_4);
            if (iVar4 == 0) {
              lVar9 = FUN_1403b30a0(param_4,0x38,iVar3);
              if (*(longlong *)(lVar9 + 0x20) == 0) {
                *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(puVar6 + -3);
              }
              uVar5 = _anon_C953E3F2::Decoration<__int64>::vfunction3(param_4);
              *(short *)(lVar9 + 0x1c) = (short)uVar5 - (short)iVar3;
              goto LAB_1405e15bb;
            }
          }
          else {
            iVar4 = FUN_1405e1970(param_1);
            if (iVar4 == 0) {
              lVar9 = FUN_1403b30a0(param_4,0x38,iVar3);
LAB_1405e15bb:
              uVar13 = *(undefined8 *)(puVar6 + -5);
              *(undefined8 *)(lVar9 + 0x10) = uVar13;
              *(short *)(lVar9 + 0x1e) = (short)uVar12;
              conflicting_entity_registered_with_name_s_exi
                        (uVar7,(longlong)(int)(iVar3 + ~uVar1),uVar13,0,0);
            }
          }
          uVar12 = uVar12 + 1;
          puVar6 = puVar6 + 0x1a;
        } while (uVar2 != uVar12);
      }
    }
    puVar6 = (undefined4 *)FUN_1403b2f60(0,param_4,0x38);
    *puVar6 = 3;
    puVar6[2] = 0;
    *(undefined2 *)(puVar6 + 7) = 1;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1e) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x26) = 0;
    *(undefined8 *)(puVar6 + 10) = 0;
    *(undefined8 *)(puVar6 + 0xc) = 0;
    *(undefined8 *)(puVar6 + 8) = param_2;
    uVar5 = _anon_C953E3F2::Decoration<__int64>::vfunction3(param_4);
    lVar9 = FUN_1403b30a0(param_4,0x38);
    *(short *)(lVar9 + 0x1c) = (short)uVar5 - (short)uVar1;
    break;
  case 4:
  case 5:
    piVar11 = (int *)FUN_1403b2f60(0,param_4,0x38);
    *piVar11 = 7;
LAB_1405e1724:
    *(undefined2 *)(piVar11 + 7) = 1;
    piVar11[4] = 0;
    piVar11[5] = 0;
    *(undefined8 *)((longlong)piVar11 + 0x1e) = 0;
    *(undefined8 *)((longlong)piVar11 + 0x26) = 0;
    piVar11[10] = 0;
    piVar11[0xb] = 0;
    piVar11[0xc] = 0;
    piVar11[0xd] = 0;
    piVar11[2] = param_3;
    *(undefined8 *)(piVar11 + 8) = param_2;
    uVar7 = FUN_1403a5610(param_1,param_2);
    *(undefined8 *)(piVar11 + 10) = uVar7;
    break;
  case 6:
    puVar10 = (undefined8 *)FUN_1400ba4f0(param_1,param_2,0x16c);
    piVar11 = (int *)FUN_1400ba4f0(param_1,*puVar10,0x16e);
    iVar3 = 9;
    if (*piVar11 - 3U < 3) {
      iVar3 = *piVar11 + 1;
    }
    piVar11 = (int *)FUN_1403b2f60(0,param_4,0x38);
    *piVar11 = iVar3;
    *(undefined2 *)(piVar11 + 7) = 1;
    piVar11[4] = 0;
    piVar11[5] = 0;
    *(undefined8 *)((longlong)piVar11 + 0x1e) = 0;
    *(undefined8 *)((longlong)piVar11 + 0x26) = 0;
    piVar11[10] = 0;
    piVar11[0xb] = 0;
    piVar11[0xc] = 0;
    piVar11[0xd] = 0;
    piVar11[2] = param_3;
    *(undefined8 *)(piVar11 + 8) = param_2;
    uVar7 = FUN_1403a5610(param_1,param_2);
    *(undefined8 *)(piVar11 + 10) = uVar7;
    uVar7 = puVar10[1];
LAB_1405e183d:
    *(undefined8 *)(piVar11 + 0xc) = uVar7;
    break;
  default:
  }
  return 0;
}

