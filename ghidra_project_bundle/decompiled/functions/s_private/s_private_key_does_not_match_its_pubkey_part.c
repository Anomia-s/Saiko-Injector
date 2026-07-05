/**
 * Function: s_private_key_does_not_match_its_pubkey_part
 * Address:  140d9fcd0
 * Signature: undefined s_private_key_does_not_match_its_pubkey_part(void)
 * Body size: 743 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
s_private_key_does_not_match_its_pubkey_part(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  code *pcVar9;
  undefined8 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140d9fcf7;
  lVar4 = *(longlong *)(param_1 + 8);
  uVar1 = *(ulonglong *)(lVar4 + 0x20);
  uVar6 = *(ulonglong *)(lVar4 + 0x28);
  FUN_140b8db20(*(undefined8 *)(param_1 + 0xb0),0x20,"crypto\\ml_dsa\\ml_dsa_encoders.c",0x305);
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if ((((*(undefined8 **)(param_1 + 0xa8) == (undefined8 *)0x0) ||
       (*(undefined8 **)(param_1 + 0xa8) == param_2)) && (*(longlong *)(param_1 + 0xa0) == 0)) &&
     ((param_3 == *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x40) &&
      (iVar3 = d_aplatformplatformopenssl_srccryptoml_dsaml(param_1), iVar3 != 0)))) {
    pcVar9 = FUN_140da1370;
    if (*(int *)(lVar4 + 0x30) != 4) {
      pcVar9 = FUN_140da10b0;
    }
    if ((param_3 < 0x8000000000000000) && (0x1f < param_3)) {
      uVar2 = param_2[1];
      *(undefined8 *)(param_1 + 0x20) = *param_2;
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      uVar2 = param_2[3];
      *(undefined8 *)(param_1 + 0x30) = param_2[2];
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      if (0x1f < param_3 - 0x20) {
        uVar2 = param_2[5];
        *(undefined8 *)(param_1 + 0x80) = param_2[4];
        *(undefined8 *)(param_1 + 0x88) = uVar2;
        uVar2 = param_2[7];
        *(undefined8 *)(param_1 + 0x90) = param_2[6];
        *(undefined8 *)(param_1 + 0x98) = uVar2;
        if (0x3f < param_3 - 0x40) {
          local_68 = param_2[8];
          uStack_60 = param_2[9];
          local_78 = param_2 + 0x10;
          local_58 = param_2[10];
          uStack_50 = param_2[0xb];
          local_48 = *(undefined4 *)(param_2 + 0xc);
          uStack_44 = *(undefined4 *)((longlong)param_2 + 100);
          uStack_40 = *(undefined4 *)(param_2 + 0xd);
          uStack_3c = *(undefined4 *)((longlong)param_2 + 0x6c);
          local_38 = param_2[0xe];
          uStack_30 = param_2[0xf];
          local_70 = param_3 - 0x80;
          uVar5 = uVar7;
          uVar8 = uVar7;
          if (uVar6 != 0) {
            do {
              iVar3 = (*pcVar9)(*(longlong *)(param_1 + 0xf0) + uVar8,&local_78);
              if (iVar3 == 0) {
                return 0;
              }
              uVar5 = uVar5 + 1;
              uVar8 = uVar8 + 0x400;
            } while (uVar5 < uVar6);
          }
          uVar6 = uVar7;
          uVar5 = uVar7;
          if (uVar1 != 0) {
            do {
              iVar3 = (*pcVar9)(*(longlong *)(param_1 + 0xe0) + uVar5,&local_78);
              if (iVar3 == 0) {
                return 0;
              }
              uVar6 = uVar6 + 1;
              uVar8 = uVar7;
              uVar5 = uVar5 + 0x400;
            } while (uVar6 < uVar1);
            do {
              iVar3 = FUN_140da1ed0(*(longlong *)(param_1 + 0xd0) + uVar7,&local_78);
              if (iVar3 == 0) {
                return 0;
              }
              uVar8 = uVar8 + 1;
              uVar7 = uVar7 + 0x400;
            } while (uVar8 < uVar1);
          }
          if (local_70 == 0) {
            if (*(longlong *)(param_1 + 0xa8) == 0) {
              lVar4 = FUN_140b8c7c0(param_2,param_3,"crypto\\ml_dsa\\ml_dsa_encoders.c",0x329);
              *(longlong *)(param_1 + 0xa8) = lVar4;
              if (lVar4 == 0) {
                return 0;
              }
            }
            iVar3 = d_aplatformplatformopenssl_srccryptoml_dsaml(param_1);
            if ((iVar3 != 0) &&
               (iVar3 = memcmp(&local_68,(void *)(param_1 + 0x40),0x40), iVar3 == 0)) {
              return 1;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\ml_dsa\\ml_dsa_encoders.c",0x331,"ossl_ml_dsa_sk_decode");
            FUN_140b91cc0(0x39,0x9e,"%s private key does not match its pubkey part",
                          **(undefined8 **)(param_1 + 8));
            d_aplatformplatformopenssl_srccryptoml_dsaml(param_1);
          }
        }
      }
    }
  }
  return 0;
}

