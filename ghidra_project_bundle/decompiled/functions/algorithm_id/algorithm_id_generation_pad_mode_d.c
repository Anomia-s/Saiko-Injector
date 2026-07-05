/**
 * Function: algorithm_id_generation_pad_mode_d
 * Address:  140d43820
 * Signature: undefined algorithm_id_generation_pad_mode_d(void)
 * Body size: 551 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void algorithm_id_generation_pad_mode_d
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [56];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  iVar2 = FUN_140c21d90(local_88);
  if (iVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",0x140,"rsa_generate_signature_aid"
              );
    FUN_140b91cc0(0x39,0x8000f,0);
    goto LAB_140d43a3a;
  }
  if (*(int *)(param_1 + 0x68) == 1) {
    iVar2 = FUN_140da7af0(local_88,0xffffffff,*(undefined4 *)(param_1 + 0x30));
    if (iVar2 < 1) {
      if (iVar2 != 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\signature\\rsa_sig.c",0x14f,
                   "rsa_generate_signature_aid");
        uVar1 = *(undefined4 *)(param_1 + 0x30);
        pcVar4 = "Algorithm ID generation - md NID: %d";
        goto LAB_140d43a16;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",0x14c,
                 "rsa_generate_signature_aid");
      FUN_140b91cc0(0x39,0xc0103,0);
    }
    else {
LAB_140d4398d:
      iVar2 = FUN_140c21e60(local_88);
      if (iVar2 != 0) {
        FUN_140c22710(local_88,param_4);
        FUN_140c22760(local_88);
      }
    }
  }
  else if (*(int *)(param_1 + 0x68) == 6) {
    iVar2 = minimum_salt_length_d_actual_salt_length_d(param_1);
    if (-1 < iVar2) {
      iVar3 = FUN_140c902d0(local_50);
      if (iVar3 != 0) {
        iVar3 = FUN_140c90360(local_50,*(undefined4 *)(param_1 + 0x30));
        if (iVar3 != 0) {
          iVar3 = FUN_140c90370(local_50,*(undefined4 *)(param_1 + 0x78));
          if (iVar3 != 0) {
            iVar2 = FUN_140c90390(local_50,iVar2);
            if (iVar2 != 0) {
              iVar2 = FUN_140da7a10(local_88,0xffffffff,0x1000,local_50);
              if (iVar2 != 0) goto LAB_140d4398d;
            }
          }
        }
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",0x15f,
                 "rsa_generate_signature_aid");
      FUN_140b91cc0(0x39,0xc0103,0);
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",0x164,"rsa_generate_signature_aid"
              );
    uVar1 = *(undefined4 *)(param_1 + 0x68);
    pcVar4 = "Algorithm ID generation - pad mode: %d";
LAB_140d43a16:
    FUN_140b91cc0(0x39,0x8010c,pcVar4,uVar1);
  }
  FUN_140c227c0(local_88);
LAB_140d43a3a:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_a8);
}

