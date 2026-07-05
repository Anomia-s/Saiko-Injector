/**
 * Function: s_invalid_public_t_vector
 * Address:  140da5d60
 * Signature: undefined s_invalid_public_t_vector(void)
 * Body size: 260 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 s_invalid_public_t_vector(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  
  uVar11 = 0x140da5d7a;
  puVar2 = (undefined8 *)*param_3;
  iVar8 = FUN_140da4270(param_3[8],param_1,*(undefined4 *)(puVar2 + 9));
  if (iVar8 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ml_kem\\ml_kem.c",0x503,"parse_pubkey");
    pcVar10 = "%s invalid public \'t\' vector";
    uVar9 = 0x9e;
    uVar11 = 0x39;
  }
  else {
    lVar3 = puVar2[6];
    puVar4 = (undefined4 *)param_3[6];
    puVar1 = (undefined4 *)(lVar3 + param_1);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *puVar4 = *puVar1;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar1 = (undefined4 *)(lVar3 + 0x10 + param_1);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar4[4] = *puVar1;
    puVar4[5] = uVar5;
    puVar4[6] = uVar6;
    puVar4[7] = uVar7;
    iVar8 = FUN_140da34b0(param_3[7],param_1,puVar2[3],param_2,param_3,uVar11);
    if ((iVar8 != 0) && (iVar8 = FUN_140da4f70(param_2,param_3), iVar8 != 0)) {
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ml_kem\\ml_kem.c",0x510,"parse_pubkey");
    pcVar10 = "internal error while parsing %s public key";
    uVar9 = 0xc0103;
    uVar11 = 0xf;
  }
  FUN_140b91cc0(uVar11,uVar9,pcVar10,*puVar2);
  return 0;
}

