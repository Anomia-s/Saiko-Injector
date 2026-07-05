/**
 * Function: assertion_failed_embed_0
 * Address:  140be07b0
 * Signature: undefined assertion_failed_embed_0(void)
 * Body size: 586 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void assertion_failed_embed_0(longlong *param_1,char *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar5 = *(longlong *)(param_2 + 0x18);
  if ((*param_2 != '\0') && (*param_1 == 0)) {
    return;
  }
  if ((lVar5 == 0) || (pcVar4 = *(code **)(lVar5 + 0x18), pcVar4 == (code *)0x0)) {
    pcVar4 = (code *)0x0;
  }
  switch(*param_2) {
  case '\0':
    if (*(longlong *)(param_2 + 8) == 0) goto switchD_140be081e_caseD_5;
    FUN_140be0b80(param_1);
    break;
  case '\x01':
  case '\x06':
    iVar1 = ossl_asn1_do_lock(param_1,0xffffffff,param_2);
    if (iVar1 == 0) {
      if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(2,param_1,param_2,0), iVar1 != 2)) {
        FUN_140c62e60(param_1,param_2);
        iVar1 = 0;
        lVar5 = (longlong)*(int *)(param_2 + 0x10) * 0x20 + *(longlong *)(param_2 + 8);
        if (0 < *(int *)(param_2 + 0x10)) {
          do {
            lVar5 = lVar5 + -0x20;
            lVar2 = FUN_140c62bf0(*param_1,lVar5,0);
            if (lVar2 != 0) {
              uVar3 = FUN_140c62be0(param_1,lVar2);
              FUN_140be0b80(uVar3,lVar2);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_2 + 0x10));
        }
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(3,param_1,param_2,0);
        }
        if (param_3 == 0) {
          uVar3 = 0x77;
          goto LAB_140be09d1;
        }
      }
    }
    else {
      if (param_3 != 0) {
        s_d_openssl_internal_error_sn
                  ("assertion failed: embed == 0","crypto\\asn1\\tasn_fre.c",0x5a);
      }
LAB_140be09e0:
      *param_1 = 0;
    }
    break;
  case '\x02':
    if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(2,param_1,param_2,0), iVar1 != 2)) {
      iVar1 = FUN_140c62bb0(param_1,param_2);
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x10))) {
        lVar5 = (longlong)iVar1 * 0x20 + *(longlong *)(param_2 + 8);
        uVar3 = FUN_140c62be0(param_1,lVar5);
        FUN_140be0b80(uVar3,lVar5);
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(3,param_1,param_2,0);
      }
      if (param_3 == 0) {
        uVar3 = 0x4b;
LAB_140be09d1:
        FUN_140b8d990(*param_1,"crypto\\asn1\\tasn_fre.c",uVar3);
        goto LAB_140be09e0;
      }
    }
    break;
  case '\x03':
    break;
  case '\x04':
    if ((lVar5 != 0) && (*(code **)(lVar5 + 0x10) != (code *)0x0)) {
      (**(code **)(lVar5 + 0x10))(param_1,param_2);
    }
    break;
  case '\x05':
switchD_140be081e_caseD_5:
    FUN_140be0a20(param_1,param_2,param_3);
    break;
  default:
    goto LAB_140be09f9;
  }
LAB_140be09f9:
  return;
}

