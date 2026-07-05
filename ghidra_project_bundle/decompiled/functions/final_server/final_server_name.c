/**
 * Function: final_server_name
 * Address:  140c30c50
 * Signature: undefined final_server_name(void)
 * Body size: 780 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_server_name(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 local_res8 [2];
  
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  lVar8 = *(longlong *)(param_1 + 8);
  iVar4 = 3;
  local_res8[0] = 0x70;
  uVar3 = FUN_140b69530();
  if ((lVar8 == 0) || (lVar2 = *(longlong *)(param_1 + 0xb80), lVar2 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar6 = 1000;
  }
  else {
    pcVar5 = *(code **)(lVar8 + 0x230);
    if (pcVar5 == (code *)0x0) {
      pcVar5 = *(code **)(lVar2 + 0x230);
      if (pcVar5 != (code *)0x0) {
        uVar10 = *(undefined8 *)(lVar2 + 0x238);
        goto LAB_140c30cdc;
      }
    }
    else {
      uVar10 = *(undefined8 *)(lVar8 + 0x238);
LAB_140c30cdc:
      iVar4 = (*pcVar5)(uVar6,local_res8,uVar10);
    }
    if ((((*(int *)(param_1 + 0x78) != 0) && (param_3 != 0)) && (iVar4 == 0)) &&
       (*(int *)(param_1 + 0x508) == 0)) {
      FUN_140b8d990(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x318),
                    "ssl\\statem\\extensions.c",0x3fe);
      lVar2 = *(longlong *)(param_1 + 0x8f8);
      uVar6 = FUN_140b8c830(*(undefined8 *)(param_1 + 0xa18),"ssl\\statem\\extensions.c",0x3ff);
      *(undefined8 *)(lVar2 + 0x318) = uVar6;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x318) == 0) &&
         (*(longlong *)(param_1 + 0xa18) != 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\extensions.c",0x401,"final_server_name");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
      }
    }
    if (((*(longlong *)(param_1 + 0x260) == 0) || (*(longlong *)(param_1 + 0x2e8) == 0)) &&
       ((lVar8 != *(longlong *)(param_1 + 0xb80) && (*(int *)(param_1 + 0x8c8) == 0)))) {
      LOCK();
      *(int *)(lVar8 + 0x84) = *(int *)(lVar8 + 0x84) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0xb80) + 0x84);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
            (iVar4 = **(int **)(param_1 + 0x18), iVar4 < 0x304)) || (iVar4 == 0x10000)) {
          FUN_140bf0b00(param_1,1,local_res8[0]);
        }
LAB_140c30eff:
        *(undefined4 *)(param_1 + 0xb58) = 0;
        return 1;
      }
      if (iVar4 != 2) {
        if (iVar4 != 3) {
          return 1;
        }
        goto LAB_140c30eff;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions.c",0x430,"final_server_name");
      uVar6 = 0xea;
      uVar9 = local_res8[0];
      goto LAB_140c30f36;
    }
    if (*(int *)(param_1 + 0xa58) == 0) {
      return 1;
    }
    if ((uVar3 & 0x4000) != 0) {
      return 1;
    }
    uVar7 = FUN_140b69530(param_1);
    if ((uVar7 >> 0xe & 1) == 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xa58) = 0;
    if (*(int *)(param_1 + 0x508) != 0) {
      return 1;
    }
    lVar8 = FUN_140ba49a0(param_1);
    if (lVar8 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar6 = 0x428;
    }
    else {
      FUN_140b8d990(*(undefined8 *)(lVar8 + 800),"ssl\\statem\\extensions.c",0x41e);
      *(undefined8 *)(lVar8 + 800) = 0;
      *(undefined8 *)(lVar8 + 0x328) = 0;
      *(undefined8 *)(lVar8 + 0x330) = 0;
      iVar4 = ssl_generate_session_id(param_1,lVar8);
      if (iVar4 != 0) {
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar6 = 0x424;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions.c",uVar6,"final_server_name");
  uVar6 = 0xc0103;
  uVar9 = 0x50;
LAB_140c30f36:
  FUN_140ba3290(param_1,uVar9,uVar6,0);
  return 0;
}

