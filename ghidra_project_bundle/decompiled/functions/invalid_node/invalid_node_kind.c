/**
 * Function: invalid_node_kind
 * Address:  14076b250
 * Signature: undefined invalid_node_kind(void)
 * Body size: 2301 bytes
 */


undefined8 invalid_node_kind(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar14;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  switch(*param_2) {
  case 0:
    if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
      FUN_1403b8780(param_1[2],&DAT_14134276a);
    }
    uVar8 = *(undefined8 *)(param_2 + 2);
    cVar1 = FUN_1400b9b40(param_1[1],uVar8,0x16d);
    if (cVar1 == '\0') {
      FUN_1403b8780(param_1[2],"{}");
      bVar13 = true;
    }
    else {
      iVar2 = cannot_serialize_value_for_type_s(param_1[1],uVar8,*(undefined8 *)(param_2 + 8));
      bVar13 = iVar2 == 0;
    }
    if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
      FUN_1403b8780(param_1[2],&DAT_141342730);
    }
    if (!bVar13) {
      return 0xffffffff;
    }
    break;
  case 1:
    uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 0xe));
    plVar5 = (longlong *)FUN_140106180((Decoration<__int64> *)(param_2 + 0xe));
    puVar7 = (undefined8 *)FUN_140106180(param_2 + 0x12);
    FUN_1403b7a10(param_1[2],"interpolated(",0xd);
    if (0 < (int)uVar3) {
      lVar6 = *plVar5;
      if (lVar6 == 0) {
        iVar2 = invalid_node_kind(param_1,*puVar7);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        iVar2 = 1;
      }
      else {
        uVar8 = param_1[2];
        if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
          FUN_1403b8780(uVar8,&DAT_14134276a);
          uVar8 = param_1[2];
        }
        FUN_1403b7a10(uVar8,&DAT_14139efde,1);
        FUN_1403b8780(param_1[2],lVar6);
        FUN_1403b7a10(param_1[2],&DAT_14139efde,1);
        iVar2 = 0;
        if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
          FUN_1403b8780(param_1[2],&DAT_141342730);
          iVar2 = 0;
        }
      }
      if (uVar3 != 1) {
        uVar11 = 1;
        do {
          lVar6 = plVar5[uVar11];
          FUN_1403b7a10(param_1[2],&DAT_1413a1e41,2);
          if (lVar6 == 0) {
            iVar4 = invalid_node_kind(param_1,puVar7[iVar2]);
            if (iVar4 != 0) {
              return 0xffffffff;
            }
            iVar2 = iVar2 + 1;
          }
          else {
            if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
              FUN_1403b8780(param_1[2],&DAT_14134276a);
            }
            FUN_1403b7a10(param_1[2],&DAT_14139efde,1);
            FUN_1403b8780(param_1[2],lVar6);
            FUN_1403b7a10(param_1[2],&DAT_14139efde,1);
            if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
              FUN_1403b8780(param_1[2],&DAT_141342730);
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
    }
    goto LAB_14076ba3f;
  case 2:
  case 3:
    FUN_1403b7a10(param_1[2],"{",1);
    plVar5 = (longlong *)FUN_140106180((Decoration<__int64> *)(param_2 + 8));
    uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 8));
    if (0 < (int)uVar3) {
      if (*plVar5 != 0) {
        FUN_1403b8780(param_1[2]);
        FUN_1403b7a10(param_1[2],":",1);
      }
      iVar2 = invalid_node_kind(param_1,plVar5[1]);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      if (uVar3 != 1) {
        plVar5 = plVar5 + 5;
        lVar6 = (ulonglong)uVar3 - 1;
        do {
          FUN_1403b8780(param_1[2],&DAT_1413a1e41);
          if (plVar5[-1] != 0) {
            FUN_1403b8780(param_1[2]);
            FUN_1403b7a10(param_1[2],":",1);
          }
          iVar2 = invalid_node_kind(param_1,*plVar5);
          if (iVar2 != 0) {
            return 0xffffffff;
          }
          plVar5 = plVar5 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    uVar8 = param_1[2];
    pcVar9 = "}";
    goto LAB_14076ba4a;
  case 4:
    uVar8 = FUN_1405d8a40(param_2[10]);
    FUN_1403b8780(param_1[2],uVar8);
    iVar2 = invalid_node_kind(param_1,*(undefined8 *)(param_2 + 8));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    break;
  case 5:
    FUN_1403b7a10(param_1[2],&DAT_14139c234,1);
    iVar2 = invalid_node_kind(param_1,*(undefined8 *)(param_2 + 8));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    FUN_1403b7a10(param_1[2],&DAT_1413a21db,1);
    uVar8 = FUN_1405d8a40(param_2[0xc]);
    FUN_1403b8780(param_1[2],uVar8);
    FUN_1403b7a10(param_1[2],&DAT_1413a21db,1);
    iVar2 = invalid_node_kind(param_1,*(undefined8 *)(param_2 + 10));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
LAB_14076ba3f:
    uVar8 = param_1[2];
    pcVar9 = ")";
    goto LAB_14076ba4a;
  case 6:
    FUN_1403b7a10(param_1[2],"@",1);
    uVar8 = *(undefined8 *)(param_2 + 8);
    goto LAB_14076b761;
  case 7:
  case 8:
    if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
      FUN_1403b8780(param_1[2],&DAT_141342778);
    }
    FUN_1403b7a10(param_1[2],&DAT_14139d6c7,1);
    FUN_1403b8780(param_1[2],*(undefined8 *)(param_2 + 8));
    if (*(char *)((longlong)param_1 + 0x1d) != '\x01') {
      return 0;
    }
    FUN_1403b8780(param_1[2],&DAT_141342730);
    break;
  case 9:
  case 10:
    if (*(longlong *)(param_2 + 8) != 0) {
      iVar2 = invalid_node_kind(param_1);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      FUN_1403b7a10(param_1[2],".",1);
    }
    FUN_1403b79b0(param_1[2],&DAT_14139bef9,*(undefined8 *)(param_2 + 0xc));
    lVar6 = *(longlong *)(param_2 + 10);
    if (lVar6 != 0) goto LAB_14076b4e0;
    goto LAB_14076b4f0;
  case 0xb:
    iVar2 = invalid_node_kind(param_1,*(undefined8 *)(param_2 + 8));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    FUN_1403b7a10(param_1[2],".",1);
    uVar8 = *(undefined8 *)(param_2 + 10);
LAB_14076b761:
    FUN_1403b8780(param_1[2],uVar8);
    break;
  case 0xc:
  case 0xd:
    iVar2 = invalid_node_kind(param_1,*(undefined8 *)(param_2 + 8));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    FUN_1403b7a10(param_1[2],&DAT_141360dfd,1);
    iVar2 = invalid_node_kind(param_1,*(undefined8 *)(param_2 + 10));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    uVar8 = param_1[2];
    pcVar9 = "]";
    goto LAB_14076ba4a;
  case 0xe:
  case 0xf:
    uVar8 = *(undefined8 *)(param_2 + 2);
    if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
      FUN_1403b8780(param_1[2],&DAT_141342762);
    }
    lVar6 = FUN_1403af230(param_1[1],uVar8);
    if (lVar6 == 0) {
      uVar8 = FUN_1403ae340(param_1[1],0,uVar8,".",0);
      FUN_1403b8780(param_1[2],uVar8);
      (*DAT_1415033b0)(uVar8);
      cVar1 = *(char *)((longlong)param_1 + 0x1d);
    }
    else {
      FUN_1403b8780(param_1[2],lVar6);
      cVar1 = *(char *)((longlong)param_1 + 0x1d);
    }
    if (cVar1 == '\x01') {
      FUN_1403b8780(param_1[2],&DAT_141342730);
    }
    FUN_1403b7a10(param_1[2],&DAT_14139c234,1);
    lVar6 = *(longlong *)(param_2 + 8);
LAB_14076b4e0:
    iVar2 = invalid_node_kind(param_1,lVar6);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
LAB_14076b4f0:
    FUN_1403b79b0(param_1[2],")");
    break;
  case 0x10:
    lVar6 = *(longlong *)(param_2 + 2);
    if (lVar6 != 0) {
      if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
        FUN_1403b8780(param_1[2],&DAT_141342762);
        lVar6 = *(longlong *)(param_2 + 2);
      }
      lVar6 = FUN_1403af230(param_1[1],lVar6);
      if (lVar6 == 0) {
        uVar8 = FUN_1403ae340(param_1[1],0,*(undefined8 *)(param_2 + 2),".",0);
        FUN_1403b8780(param_1[2],uVar8);
        (*DAT_1415033b0)(uVar8);
      }
      else {
        FUN_1403b8780(param_1[2],lVar6);
      }
      if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
        FUN_1403b8780(param_1[2],&DAT_141342730);
      }
      FUN_1403b7a10(param_1[2],&DAT_14139c234,1);
    }
    if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
      FUN_1403b8780(param_1[2],&DAT_141342762);
    }
    FUN_1403b7a10(param_1[2],"match ",6);
    if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
      FUN_1403b8780(param_1[2],&DAT_141342778);
    }
    iVar2 = invalid_node_kind(param_1,*(undefined8 *)(param_2 + 8));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    FUN_1403b7a10(param_1[2],&DAT_1413a21e4,3);
    uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 10));
    lVar6 = FUN_140106180((Decoration<__int64> *)(param_2 + 10));
    if (0 < (int)uVar3) {
      lVar10 = 0;
      do {
        FUN_1403b7a10(param_1[2],&DAT_1413a21da,2);
        iVar2 = invalid_node_kind(param_1,*(undefined8 *)(lVar6 + lVar10));
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        FUN_1403b7a10(param_1[2],&DAT_1413a1c17,2);
        iVar2 = invalid_node_kind(param_1,*(undefined8 *)(lVar6 + 8 + lVar10));
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        FUN_1403b7a10(param_1[2],"\n",1);
        lVar10 = lVar10 + 0x10;
      } while ((ulonglong)uVar3 << 4 != lVar10);
    }
    FUN_1403b7a10(param_1[2],"}",1);
    if (*(longlong *)(param_2 + 2) != 0) {
      FUN_1403b7a10(param_1[2],")",1);
    }
    uVar8 = param_1[2];
    pcVar9 = "\n";
LAB_14076ba4a:
    FUN_1403b7a10(uVar8,pcVar9,1);
    break;
  case 0x11:
    if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
      FUN_1403b8780(param_1[2],&DAT_141342762);
    }
    FUN_1403b7a10(param_1[2],&DAT_1413a0124,4);
    uVar12 = 0;
    if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
      FUN_1403b8780(param_1[2],&DAT_141342730);
      uVar12 = *(undefined1 *)((longlong)param_1 + 0x1d);
    }
    iVar2 = FUN_1405f6b90(*param_1,*(undefined8 *)(param_2 + 8),param_1[2],uVar12,
                          CONCAT44(uVar14,*(int *)(param_1 + 3) + 1));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    return 0;
  default:
    redabortreset_bluesreset
              (7,
               "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/visit_to_str.c"
               ,0x1c1,"invalid node kind");
    (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return 0;
}

