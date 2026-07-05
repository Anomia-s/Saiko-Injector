/**
 * Function: the_eddsa_instance_is_preset_you_may_not_try
 * Address:  140d45e60
 * Signature: undefined the_eddsa_instance_is_preset_you_may_not_try(void)
 * Body size: 673 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void the_eddsa_instance_is_preset_you_may_not_try(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 local_50;
  undefined8 local_4f;
  undefined8 uStack_47;
  undefined8 local_3f;
  undefined8 uStack_37;
  undefined8 local_2f;
  undefined8 uStack_27;
  undefined1 local_1f;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140d45e70;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (((param_1 == 0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0)) goto LAB_140d45f24;
  lVar2 = FUN_140b93540(param_2,"instance");
  if (lVar2 == 0) goto LAB_140d460b7;
  local_50 = 0;
  local_1f = 0;
  local_58 = &local_50;
  local_4f = 0;
  uStack_47 = 0;
  local_3f = 0;
  uStack_37 = 0;
  local_2f = 0;
  uStack_27 = 0;
  if ((*(byte *)(param_1 + 0x11c) & 1) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\eddsa_sig.c",0x348,"eddsa_set_ctx_params");
    FUN_140b91cc0(0x39,0xf2,"the EdDSA instance is preset, you may not try to specify it",0);
    goto LAB_140d45f24;
  }
  iVar1 = FUN_140b94f00(lVar2,&local_58,0x32);
  if (iVar1 == 0) goto LAB_140d45f24;
  iVar1 = FUN_140b8c6a0(local_58,"Ed25519");
  if (iVar1 == 0) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x60) == 2) {
      *(undefined4 *)(param_1 + 0x118) = 1;
      uVar3 = *(uint *)(param_1 + 0x11c) & 0xffffffe2;
      uVar3 = (uVar3 ^ *(uint *)(param_1 + 0x11c)) & 2 ^ uVar3;
LAB_140d460b1:
      *(uint *)(param_1 + 0x11c) = uVar3;
    }
  }
  else {
    iVar1 = FUN_140b8c6a0(local_58,"Ed25519ctx");
    if (iVar1 == 0) {
      if (*(int *)(*(longlong *)(param_1 + 8) + 0x60) == 2) {
        *(undefined4 *)(param_1 + 0x118) = 2;
        uVar3 = *(uint *)(param_1 + 0x11c) & 0xfffffff6 | 0x14;
        uVar3 = (uVar3 ^ *(uint *)(param_1 + 0x11c)) & 2 ^ uVar3;
        goto LAB_140d460b1;
      }
    }
    else {
      iVar1 = FUN_140b8c6a0(local_58,"Ed25519ph");
      if (iVar1 == 0) {
        if (*(int *)(*(longlong *)(param_1 + 8) + 0x60) == 2) {
          *(undefined4 *)(param_1 + 0x118) = 3;
          uVar3 = *(uint *)(param_1 + 0x11c) & 0xffffffee | 0xc;
          uVar3 = (uVar3 ^ *(uint *)(param_1 + 0x11c)) & 2 ^ uVar3;
          goto LAB_140d460b1;
        }
      }
      else {
        iVar1 = FUN_140b8c6a0(local_58,"Ed448");
        if (iVar1 == 0) {
          if (*(int *)(*(longlong *)(param_1 + 8) + 0x60) == 3) {
            *(undefined4 *)(param_1 + 0x118) = 4;
            uVar3 = *(uint *)(param_1 + 0x11c) & 0xffffffe6;
            uVar3 = (uVar3 ^ *(uint *)(param_1 + 0x11c)) & 2 ^ uVar3;
            goto LAB_140d460b1;
          }
        }
        else {
          iVar1 = FUN_140b8c6a0(local_58,"Ed448ph");
          if (iVar1 != 0) goto LAB_140d45f24;
          if (*(int *)(*(longlong *)(param_1 + 8) + 0x60) == 3) {
            *(undefined4 *)(param_1 + 0x118) = 5;
            uVar3 = *(uint *)(param_1 + 0x11c) & 0xffffffee | 8;
            uVar3 = (uVar3 ^ *(uint *)(param_1 + 0x11c)) & 2 ^ uVar3;
            goto LAB_140d460b1;
          }
        }
      }
    }
  }
LAB_140d460b7:
  lVar2 = FUN_140b93540(param_2,"context-string");
  if (lVar2 != 0) {
    local_58 = (undefined1 *)(param_1 + 0x120);
    iVar1 = FUN_140b95120(lVar2,&local_58,0xff,param_1 + 0x220);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x220) = 0;
    }
  }
LAB_140d45f24:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_78);
}

