/**
 * Function: dynamic_load
 * Address:  140c73c90
 * Signature: undefined dynamic_load(void)
 * Body size: 1172 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dynamic_load(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar3 = FUN_140c5d290();
    *param_2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar4 = param_2[3];
  if (lVar4 == 0) {
    if (param_2[5] == 0) {
      return 0;
    }
    FUN_140c5d3d0(lVar3,2,2,0);
    lVar4 = FUN_140c5d500(*param_2,param_2[5]);
    param_2[3] = lVar4;
  }
  iVar7 = 0;
  if (((int)param_2[9] == 2) || (lVar3 = dso_load(*param_2,lVar4,0,0), lVar3 == 0)) {
    if (((int)param_2[9] != 0) && (iVar1 = FUN_140b77980(param_2[10]), 0 < iVar1)) {
      do {
        uVar5 = FUN_140b77990(param_2[10],iVar7);
        lVar3 = FUN_140c5d5e0(*param_2,param_2[3],uVar5);
        if (lVar3 == 0) break;
        lVar4 = dso_load(*param_2,lVar3,0,0);
        if (lVar4 != 0) {
          FUN_140b8d990(lVar3,"crypto\\engine\\eng_dyn.c",0x188);
          goto LAB_140c73dee;
        }
        FUN_140b8d990(lVar3,"crypto\\engine\\eng_dyn.c",0x18b);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\engine\\eng_dyn.c",0x1b6,"dynamic_load");
    FUN_140b91cc0(0x26,0x84,0);
    FUN_140c5d2b0(*param_2);
    *param_2 = 0;
    return 0;
  }
LAB_140c73dee:
  lVar3 = FUN_140c5d7e0(*param_2,param_2[8]);
  param_2[2] = lVar3;
  if (lVar3 == 0) {
    param_2[2] = 0;
    FUN_140c5d2b0(*param_2);
    *param_2 = 0;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\engine\\eng_dyn.c",0x1c3,"dynamic_load");
    uVar5 = 0x68;
    goto LAB_140c73e37;
  }
  if ((int)param_2[4] == 0) {
    pcVar6 = (code *)FUN_140c5d7e0(*param_2,param_2[7]);
    param_2[1] = (longlong)pcVar6;
    if ((pcVar6 != (code *)0x0) && (uVar2 = (*pcVar6)(0x30000), 0x2ffff < uVar2)) {
      FUN_140b932f0();
      lVar3 = FUN_140c5d7e0(*param_2,"EVP_PKEY_base_id");
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      if (lVar3 == 0) goto LAB_140c73ecc;
    }
    param_2[2] = 0;
    param_2[1] = 0;
    FUN_140c5d2b0(*param_2);
    *param_2 = 0;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\engine\\eng_dyn.c",0x1dd,"dynamic_load");
    uVar5 = 0x91;
  }
  else {
LAB_140c73ecc:
    local_f8 = *param_1;
    uStack_f0 = param_1[1];
    local_e8 = param_1[2];
    uStack_e0 = param_1[3];
    local_d8 = param_1[4];
    uStack_d0 = param_1[5];
    local_c8 = param_1[6];
    uStack_c0 = param_1[7];
    local_b8 = param_1[8];
    uStack_b0 = param_1[9];
    local_a8 = param_1[10];
    uStack_a0 = param_1[0xb];
    local_98 = param_1[0xc];
    uStack_90 = param_1[0xd];
    local_78 = param_1[0x10];
    uStack_70 = param_1[0x11];
    local_88 = param_1[0xe];
    uStack_80 = param_1[0xf];
    local_68 = param_1[0x12];
    uStack_60 = param_1[0x13];
    local_58 = param_1[0x14];
    uStack_50 = param_1[0x15];
    local_48 = param_1[0x16];
    uStack_40 = param_1[0x17];
    local_38 = *(undefined4 *)(param_1 + 0x18);
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0xc4);
    uStack_30 = *(undefined4 *)(param_1 + 0x19);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xcc);
    local_28 = *(undefined4 *)(param_1 + 0x1a);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0xd4);
    uStack_20 = *(undefined4 *)(param_1 + 0x1b);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0xdc);
    local_118 = FUN_140c10340();
    FUN_140b8da50(local_110,local_108,local_100);
    FUN_140c10570(param_1);
    iVar7 = FUN_140c5b670(param_1,param_2[2],1);
    if ((iVar7 == 0) || (iVar7 = (*(code *)param_2[2])(param_1,param_2[5],&local_118), iVar7 == 0))
    {
      FUN_140c5b7b0(param_1,1);
      param_2[2] = 0;
      param_2[1] = 0;
      FUN_140c5d2b0(*param_2);
      *param_2 = 0;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\engine\\eng_dyn.c",0x1fe,"dynamic_load");
      FUN_140b91cc0(0x26,0x6d,0);
      *param_1 = local_f8;
      param_1[1] = uStack_f0;
      param_1[2] = local_e8;
      param_1[3] = uStack_e0;
      param_1[4] = local_d8;
      param_1[5] = uStack_d0;
      param_1[6] = local_c8;
      param_1[7] = uStack_c0;
      param_1[8] = local_b8;
      param_1[9] = uStack_b0;
      param_1[10] = local_a8;
      param_1[0xb] = uStack_a0;
      param_1[0xc] = local_98;
      param_1[0xd] = uStack_90;
      param_1[0xe] = local_88;
      param_1[0xf] = uStack_80;
      param_1[0x10] = local_78;
      param_1[0x11] = uStack_70;
      param_1[0x12] = local_68;
      param_1[0x13] = uStack_60;
      param_1[0x14] = local_58;
      param_1[0x15] = uStack_50;
      param_1[0x16] = local_48;
      param_1[0x17] = uStack_40;
      param_1[0x18] = CONCAT44(uStack_34,local_38);
      param_1[0x19] = CONCAT44(uStack_2c,uStack_30);
      param_1[0x1a] = CONCAT44(uStack_24,local_28);
      param_1[0x1b] = CONCAT44(uStack_1c,uStack_20);
      return 0;
    }
    if (((int)param_2[6] < 1) || (iVar7 = FUN_140c5b1a0(param_1), iVar7 != 0)) {
      return 1;
    }
    if ((int)param_2[6] < 2) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\engine\\eng_dyn.c",0x20e,"dynamic_load");
    uVar5 = 0x67;
  }
LAB_140c73e37:
  FUN_140b91cc0(0x26,uVar5,0);
  return 0;
}

