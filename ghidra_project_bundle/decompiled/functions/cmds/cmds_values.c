/**
 * Function: cmds_values
 * Address:  140c496e0
 * Signature: undefined cmds_values(void)
 * Body size: 665 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int cmds_values(byte *param_1,longlong param_2,char *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  longlong local_res10;
  
  local_res10 = param_2;
  if (param_2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_conf.c",0x3be,"SSL_CONF_cmd");
    FUN_140b91cc0(0x14,0x181,0);
    return 0;
  }
  iVar3 = FUN_140c49b60(param_1,&local_res10);
  if ((iVar3 == 0) ||
     (puVar4 = (undefined8 *)FUN_140c49c40(param_1,local_res10), puVar4 == (undefined8 *)0x0)) {
    if ((*param_1 & 0x10) != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_conf.c",0x3df,"SSL_CONF_cmd");
      FUN_140b91cc0(0x14,0x182,"cmd=%s",local_res10);
    }
    return -2;
  }
  iVar3 = -3;
  if (*(short *)((longlong)puVar4 + 0x1a) != 4) {
    if (param_3 != (char *)0x0) {
      iVar3 = (*(code *)*puVar4)(param_1,param_3);
      if (0 < iVar3) {
        return 2;
      }
      if (iVar3 != -2) {
        iVar3 = 0;
      }
    }
    if ((*param_1 & 0x10) != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_conf.c",0x3d7,"SSL_CONF_cmd");
      pcVar8 = "<EMPTY>";
      if (param_3 != (char *)0x0) {
        pcVar8 = param_3;
      }
      FUN_140b91cc0(0x14,0x180,"cmd=%s, value=%s",local_res10,pcVar8);
    }
    return iVar3;
  }
  if ((ulonglong)((longlong)(puVar4 + -0x2824a544) >> 5) < 0x1e) {
    puVar1 = *(ulonglong **)(param_1 + 0x28);
    lVar5 = ((longlong)(puVar4 + -0x2824a544) >> 5) * 0x10;
    uVar2 = *(ulonglong *)(&DAT_1412531a0 + lVar5);
    if (puVar1 != (ulonglong *)0x0) {
      uVar9 = *(uint *)(&DAT_1412531a8 + lVar5) & 1;
      uVar6 = *(uint *)(&DAT_1412531a8 + lVar5) & 0xf00;
      if (uVar6 != 0) {
        if (uVar6 == 0x100) {
          puVar7 = *(uint **)(param_1 + 0x40);
        }
        else {
          if (uVar6 != 0x200) {
            return 1;
          }
          puVar7 = *(uint **)(param_1 + 0x48);
        }
        if (uVar9 != 0) {
          *puVar7 = ~(uint)uVar2 & *puVar7;
          return 1;
        }
        *puVar7 = (uint)uVar2 | *puVar7;
        return 1;
      }
      if (uVar9 == 0) {
        *puVar1 = *puVar1 | uVar2;
        return 1;
      }
      *puVar1 = ~uVar2 & *puVar1;
    }
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_conf.c",0x3b1,"ctrl_switch_option");
  FUN_140b91cc0(0x14,0xc0103,0);
  return 0;
}

