/**
 * Function: ssl_do_config
 * Address:  140bc3c70
 * Signature: undefined ssl_do_config(void)
 * Body size: 623 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_do_config(longlong param_1,undefined8 *param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong local_res8;
  char *local_res18 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  iVar2 = 0;
  local_res18[0] = param_3;
  if ((param_1 == 0) && (param_2 == (undefined8 *)0x0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_mcnf.c",0x24,"ssl_do_config");
    FUN_140b91cc0(0x14,0xc0102,0);
  }
  else {
    if ((param_3 == (char *)0x0) && (param_4 != 0)) {
      local_res18[0] = "system_default";
    }
    iVar1 = FUN_140c49dc0(local_res18[0],&local_58);
    if (iVar1 != 0) {
      uVar6 = FUN_140c49d90(local_58,local_res18,&local_res8);
      lVar7 = FUN_140c49310();
      if (lVar7 == 0) {
        FUN_140c172d0(0);
        FUN_140c49490(0);
        return 0;
      }
      uVar11 = 0x62;
      if (param_4 != 0) {
        uVar11 = 2;
      }
      if (param_1 == 0) {
        lVar10 = param_2[1];
        FUN_140c49600(lVar7,param_2);
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x18);
        FUN_140c49500(lVar7,param_1);
        param_2 = *(undefined8 **)(param_1 + 8);
      }
      uVar8 = *param_2;
      iVar2 = FUN_140c17380(uVar8);
      uVar3 = uVar11 | 0x10;
      if (iVar2 == 0) {
        uVar3 = uVar11;
      }
      uVar11 = uVar3 | 8;
      if (*(code **)(lVar10 + 0x40) == FUN_140b694e0) {
        uVar11 = uVar3;
      }
      uVar3 = uVar11 | 4;
      if (*(code **)(lVar10 + 0x48) == FUN_140b694e0) {
        uVar3 = uVar11;
      }
      FUN_140c494f0(lVar7,uVar3);
      uVar8 = FUN_140c172d0(uVar8);
      iVar5 = 0;
      iVar1 = 0;
      uVar9 = 0;
      if (local_res8 != 0) {
        do {
          FUN_140c49e50(uVar6,uVar9,local_48,&local_50);
          iVar4 = cmds_values(lVar7,local_48[0],local_50);
          iVar1 = iVar5 + 1;
          if (0 < iVar4) {
            iVar1 = iVar5;
          }
          uVar9 = uVar9 + 1;
          iVar5 = iVar1;
        } while (uVar9 < local_res8);
      }
      iVar5 = FUN_140c49340(lVar7);
      if (iVar5 == 0) {
        iVar1 = iVar1 + 1;
      }
      FUN_140c172d0(uVar8);
      FUN_140c49490(lVar7);
      if (iVar1 == 0) {
        return 1;
      }
      goto LAB_140bc3eb5;
    }
    if (param_4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_mcnf.c",0x2c,"ssl_do_config");
      FUN_140b91cc0(0x14,0x71,"name=%s",local_res18[0]);
    }
  }
  FUN_140c172d0(0);
  FUN_140c49490(0);
LAB_140bc3eb5:
  if ((param_4 != 0) && (iVar2 == 0)) {
    return 1;
  }
  return 0;
}

