/**
 * Function: ossl_quic_conn_shutdown
 * Address:  140bca5c0
 * Signature: undefined ossl_quic_conn_shutdown(void)
 * Body size: 1019 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_quic_conn_shutdown(undefined8 param_1,uint param_2,ulonglong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong local_58 [3];
  longlong local_40;
  int local_30;
  undefined8 uStack_20;
  
  uStack_20 = 0x140bca5e1;
  uVar8 = param_2 & 4;
  iVar3 = qc_try_create_default_xso_for_write(param_1,local_58,3);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  if (local_30 != 0) {
    FUN_140bcba90(local_58,"ssl\\quic\\quic_impl.c",0x5ef,"ossl_quic_conn_shutdown",0x164,0);
    return 0xffffffff;
  }
  uVar4 = FUN_140b77290(*(undefined8 *)(local_58[0] + 0x58));
  FUN_140c20b60(uVar4);
  iVar3 = FUN_140c50510(*(undefined8 *)(local_40 + 0xa0));
  lVar2 = local_40;
  if (iVar3 == 0) {
    if ((param_2 & 8) == 0) {
      if ((param_2 & 2) == 0) {
        if ((*(byte *)(local_40 + 0x100) & 0x20) == 0) {
          uVar4 = FUN_140c50430(*(undefined8 *)(local_40 + 0xa0));
          FUN_140c58850(uVar4);
          *(uint *)(lVar2 + 0x100) = *(uint *)(lVar2 + 0x100) | 0x20;
        }
        iVar3 = FUN_140bcc170(local_40);
        if (iVar3 == 0) {
          if ((uVar8 == 0) && (iVar3 = FUN_140bc8b80(local_58[0]), lVar2 = local_40, iVar3 != 0)) {
            uVar4 = *(undefined8 *)(local_58[0] + 0x58);
            FUN_140c4e130(uVar4,0);
            uVar4 = FUN_140c4e150(uVar4);
            iVar3 = FUN_140c4da80(uVar4,FUN_140bcc1e0,lVar2,0);
            if (0 < iVar3) goto LAB_140bca76f;
LAB_140bca723:
            uVar5 = 0;
            goto LAB_140bca982;
          }
          uVar1 = *(uint *)(local_58[0] + 0x70);
          lVar2 = local_58[0];
          while (uVar1 = uVar1 >> 5 & 3, uVar1 == 0) {
            lVar2 = *(longlong *)(lVar2 + 0x40);
            if (lVar2 == 0) goto LAB_140bca75c;
            uVar1 = *(uint *)(lVar2 + 0x70);
          }
          if (uVar1 != 2) {
LAB_140bca75c:
            uVar4 = FUN_140c4e150(*(undefined8 *)(local_58[0] + 0x58));
            FUN_140c4d9c0(uVar4,0);
          }
        }
LAB_140bca76f:
        iVar3 = FUN_140bcc170(local_40);
        if (iVar3 == 0) {
          uVar4 = FUN_140b77290(*(undefined8 *)(local_58[0] + 0x58));
          FUN_140c20b80(uVar4);
          return 0;
        }
      }
LAB_140bca867:
      uVar5 = 0;
      *(uint *)(local_40 + 0x100) = *(uint *)(local_40 + 0x100) | 0x20;
      uVar6 = uVar5;
      uVar7 = uVar5;
      if (param_3 != (ulonglong *)0x0) {
        uVar6 = *param_3;
        uVar7 = param_3[1];
      }
      FUN_140c4eff0(*(undefined8 *)(local_40 + 0xa0),uVar6,uVar7);
      FUN_140b6bdd0(*(undefined8 *)(local_40 + 0x78),1);
      iVar3 = FUN_140c50510(*(undefined8 *)(local_40 + 0xa0));
      if (iVar3 != 0) goto LAB_140bca8be;
      if (((uVar8 == 0) && (iVar3 = FUN_140bc8b80(local_58[0]), lVar2 = local_40, iVar3 != 0)) &&
         ((param_2 & 1) == 0)) {
        uVar4 = *(undefined8 *)(local_58[0] + 0x58);
        FUN_140c4e130(uVar4,0);
        uVar4 = FUN_140c4e150(uVar4);
        iVar3 = FUN_140c4da80(uVar4,FUN_140bcc1c0,lVar2,0);
        if (iVar3 < 1) goto LAB_140bca982;
      }
      else {
        uVar8 = *(uint *)(local_58[0] + 0x70);
        lVar2 = local_58[0];
        while (uVar8 = uVar8 >> 5 & 3, uVar8 == 0) {
          lVar2 = *(longlong *)(lVar2 + 0x40);
          if (lVar2 == 0) goto LAB_140bca95d;
          uVar8 = *(uint *)(lVar2 + 0x70);
        }
        if (uVar8 != 2) {
LAB_140bca95d:
          uVar4 = FUN_140c4e150(*(undefined8 *)(local_58[0] + 0x58));
          FUN_140c4d9c0(uVar4,0);
        }
      }
      uVar8 = FUN_140c50510(*(undefined8 *)(local_40 + 0xa0));
      uVar5 = (ulonglong)uVar8;
    }
    else {
      iVar3 = FUN_140c504f0(*(undefined8 *)(local_40 + 0xa0));
      if (iVar3 != 0) goto LAB_140bca867;
      if ((uVar8 != 0) || (iVar3 = FUN_140bc8b80(local_58[0]), lVar2 = local_40, iVar3 == 0)) {
        uVar1 = *(uint *)(local_58[0] + 0x70);
        lVar2 = local_58[0];
        while (uVar1 = uVar1 >> 5 & 3, uVar1 == 0) {
          lVar2 = *(longlong *)(lVar2 + 0x40);
          if (lVar2 == 0) goto LAB_140bca83c;
          uVar1 = *(uint *)(lVar2 + 0x70);
        }
        if (uVar1 != 2) {
LAB_140bca83c:
          uVar4 = FUN_140c4e150(*(undefined8 *)(local_58[0] + 0x58));
          FUN_140c4d9c0(uVar4,0);
        }
LAB_140bca84f:
        iVar3 = FUN_140c504f0(*(undefined8 *)(local_40 + 0xa0));
        if (iVar3 == 0) goto LAB_140bca723;
        goto LAB_140bca867;
      }
      uVar4 = *(undefined8 *)(local_58[0] + 0x58);
      FUN_140c4e130(uVar4,0);
      uVar4 = FUN_140c4e150(uVar4);
      iVar3 = FUN_140c4da80(uVar4,FUN_140bcc240,lVar2,0);
      if (0 < iVar3) goto LAB_140bca84f;
      uVar5 = 0;
    }
LAB_140bca982:
    uVar4 = FUN_140b77290(*(undefined8 *)(local_58[0] + 0x58));
    FUN_140c20b80(uVar4);
  }
  else {
LAB_140bca8be:
    uVar4 = FUN_140b77290(*(undefined8 *)(local_58[0] + 0x58));
    FUN_140c20b80(uVar4);
    uVar5 = 1;
  }
  return uVar5;
}

