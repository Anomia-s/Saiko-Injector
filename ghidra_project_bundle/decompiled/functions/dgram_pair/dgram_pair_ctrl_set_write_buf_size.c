/**
 * Function: dgram_pair_ctrl_set_write_buf_size
 * Address:  140c3dc70
 * Signature: undefined dgram_pair_ctrl_set_write_buf_size(void)
 * Body size: 907 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dgram_pair_ctrl_set_write_buf_size
               (longlong param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *_Dst;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  plVar11 = *(longlong **)(param_1 + 0x40);
  if (plVar11 == (longlong *)0x0) goto LAB_140c3dd34;
  switch(param_2) {
  case 1:
    plVar11[3] = 0;
    plVar11[5] = 0;
    plVar11[4] = 0;
    break;
  case 2:
    if ((*(int *)(param_1 + 0x28) != 0) && (*plVar11 == 0)) goto switchD_140c3dce2_caseD_3;
    break;
  default:
    goto switchD_140c3dce2_caseD_3;
  case 10:
    if (*(int *)(param_1 + 0x28) == 0) goto switchD_140c3dce2_caseD_3;
    if (*plVar11 != 0) {
      plVar11 = *(longlong **)(*plVar11 + 0x40);
    }
    iVar3 = FUN_140b8b770(plVar11[10]);
    if (iVar3 != 0) {
      lVar1 = plVar11[5];
      uVar12 = 0x40;
      lVar2 = plVar11[3];
      _Dst = local_88;
      do {
        uVar10 = plVar11[3];
        uVar4 = plVar11[2] - plVar11[5];
        uVar8 = uVar10;
        if (uVar4 <= uVar10) {
          uVar8 = uVar4;
        }
        if (uVar8 == 0) break;
        uVar4 = uVar12;
        if (uVar8 <= uVar12) {
          uVar4 = uVar8;
        }
        if (_Dst != (undefined1 *)0x0) {
          memcpy(_Dst,(void *)(plVar11[1] + plVar11[5]),uVar4);
          uVar10 = plVar11[3];
        }
        if ((uVar4 <= (ulonglong)(plVar11[2] - plVar11[5])) && (uVar4 <= uVar10)) {
          lVar9 = plVar11[5] + uVar4;
          lVar5 = 0;
          if (lVar9 != plVar11[2]) {
            lVar5 = lVar9;
          }
          plVar11[5] = lVar5;
          plVar11[3] = plVar11[3] - uVar4;
        }
        puVar6 = _Dst + uVar4;
        if (_Dst == (undefined1 *)0x0) {
          puVar6 = _Dst;
        }
        uVar12 = uVar12 - uVar4;
        _Dst = puVar6;
      } while (uVar12 != 0);
      plVar11[5] = lVar1;
      plVar11[3] = lVar2;
      FUN_140b8b7a0(plVar11[10]);
    }
    break;
  case 0xb:
    break;
  case 0x29:
    break;
  case 0x2a:
    plVar11[7] = (ulonglong)param_3;
    if (*plVar11 != 0) {
      *(ulonglong *)(*(longlong *)(*plVar11 + 0x40) + 0x38) = (ulonglong)param_3;
    }
    break;
  case 0x52:
    if (*(int *)(param_1 + 0x28) == 0) goto switchD_140c3dce2_caseD_3;
    break;
  case 0x53:
    *param_4 = *(uint *)(plVar11 + 0xb) >> 1 & 1;
    break;
  case 0x54:
    if (*(int *)(param_1 + 0x28) != 0) {
      plVar7 = plVar11;
      if (*plVar11 != 0) {
        plVar7 = *(longlong **)(*plVar11 + 0x40);
      }
      if ((~*(uint *)(plVar7 + 8) & 9) == 0) {
        *(uint *)(plVar11 + 0xb) = *(uint *)(plVar11 + 0xb) & 0xfffffffd;
        *(uint *)(plVar11 + 0xb) = *(uint *)(plVar11 + 0xb) | -(uint)(param_3 != 0) & 2;
        break;
      }
    }
    goto switchD_140c3dce2_caseD_3;
  case 0x55:
  case 0x56:
    break;
  case 0x57:
    *(uint *)(plVar11 + 8) = param_3;
    break;
  case 0x58:
    break;
  case 0x59:
    *(uint *)(plVar11 + 0xb) = *(uint *)(plVar11 + 0xb) & 0xfffffffe;
    *(uint *)(plVar11 + 0xb) = *(uint *)(plVar11 + 0xb) | (uint)(0 < (int)param_3);
    break;
  case 0x5e:
    FUN_140bd7960(plVar11[9]);
    plVar11[9] = (longlong)param_4;
    break;
  case 0x88:
    uVar12 = (ulonglong)(int)param_3;
    if (*plVar11 == 0) {
      if (uVar12 < 0x400) {
        uVar12 = 0x400;
      }
      if ((plVar11[1] == 0) || (iVar3 = FUN_140c3e860(plVar11 + 1,uVar12), iVar3 != 0)) {
        *(uint *)(plVar11 + 0xb) = *(uint *)(plVar11 + 0xb) & 0xfffffff7;
        plVar11[6] = uVar12;
        break;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\bio\\bss_dgram_pair.c",0x1d1,"dgram_pair_ctrl_set_write_buf_size");
      FUN_140b91cc0(0x20,0x7b,0);
    }
switchD_140c3dce2_caseD_3:
    break;
  case 0x89:
    break;
  case 0x8c:
    iVar3 = FUN_140b8b750(plVar11[10]);
    if (iVar3 != 0) {
      FUN_140b8b7a0(plVar11[10]);
    }
  }
LAB_140c3dd34:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
}

