/**
 * Function: evp_pbe_cipherinit_ex
 * Address:  140c24920
 * Signature: undefined evp_pbe_cipherinit_ex(void)
 * Body size: 834 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void evp_pbe_cipherinit_ex
               (longlong param_1,char *param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined4 local_d0;
  int local_cc;
  undefined1 local_a8 [80];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140c24937;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_158;
  puVar10 = (undefined1 *)0x0;
  local_f0 = param_5;
  local_108 = param_7;
  iVar11 = 0;
  local_100 = param_8;
  local_e8 = (undefined1 *)0x0;
  local_e0 = (undefined1 *)0x0;
  local_f8 = param_4;
  iVar3 = FUN_140b964c0();
  if (iVar3 == 0) {
LAB_140c24bd2:
    if (param_1 == 0) {
      FUN_140b8c190(local_a8,&DAT_1413a68b4,0x50);
    }
    else {
      FUN_140bdea40(local_a8,0x50,param_1);
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_pbe.c",0x75,"EVP_PBE_CipherInit_ex");
    FUN_140b91cc0(6,0x79,"TYPE=%s",local_a8);
  }
  else {
    local_d0 = 0;
    local_cc = iVar3;
    if (DAT_141700630 == 0) {
LAB_140c249e6:
      local_138 = &LAB_140c24e80;
      lVar5 = FUN_140b96c30(&local_d0,&DAT_141250f60,0x22,0x20);
      if (lVar5 == 0) goto LAB_140c24bd2;
    }
    else {
      FUN_140b78500();
      uVar4 = FUN_140b78040(DAT_141700630,&local_d0);
      lVar5 = FUN_140b77990(DAT_141700630,uVar4);
      if (lVar5 == 0) goto LAB_140c249e6;
    }
    local_d8 = *(code **)(lVar5 + 0x10);
    iVar3 = *(int *)(lVar5 + 8);
    iVar1 = *(int *)(lVar5 + 0xc);
    pcVar2 = *(code **)(lVar5 + 0x18);
    if ((param_2 != (char *)0x0) && (iVar11 = param_3, param_3 == -1)) {
      sVar6 = strlen(param_2);
      iVar11 = (int)sVar6;
    }
    puVar8 = puVar10;
    if (iVar3 != -1) {
      FUN_140b932f0();
      uVar7 = FUN_140b96490(iVar3);
      puVar8 = (undefined1 *)FUN_140b84390(local_108,uVar7,local_100);
      local_e8 = puVar8;
      if (puVar8 == (undefined1 *)0x0) {
        uVar7 = FUN_140b96490(iVar3);
        puVar8 = (undefined1 *)FUN_140b99900(uVar7);
        if (puVar8 == (undefined1 *)0x0) {
          FUN_140b93470();
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_pbe.c",0x87,"EVP_PBE_CipherInit_ex");
          uVar7 = FUN_140b96490(iVar3);
          FUN_140b91cc0(6,0xa0,uVar7);
          goto LAB_140c24c3b;
        }
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
    }
    uVar7 = local_108;
    if (iVar1 != -1) {
      FUN_140b932f0();
      uVar9 = FUN_140b96490(iVar1);
      uVar7 = local_108;
      puVar10 = (undefined1 *)FUN_140b71980(local_108,uVar9,local_100);
      local_e0 = puVar10;
      if (puVar10 == (undefined1 *)0x0) {
        uVar9 = FUN_140b96490(iVar1);
        puVar10 = (undefined1 *)FUN_140b999e0(uVar9);
        if (puVar10 == (undefined1 *)0x0) {
          FUN_140b93470();
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_pbe.c",0x97,"EVP_PBE_CipherInit_ex");
          FUN_140b91cc0(6,0xa1,0);
          goto LAB_140c24c3b;
        }
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
    }
    local_138 = puVar8;
    local_130 = puVar10;
    if (pcVar2 == (code *)0x0) {
      local_128 = param_6;
      (*local_d8)(local_f0,param_2,iVar11,local_f8);
    }
    else {
      local_118 = local_100;
      local_128 = param_6;
      local_120 = uVar7;
      (*pcVar2)();
    }
  }
LAB_140c24c3b:
  FUN_140b843f0(local_e8);
  FUN_140b719e0(local_e0);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_158);
}

