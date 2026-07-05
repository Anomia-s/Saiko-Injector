/**
 * Function: ssl3_generate_key_block
 * Address:  140c479e0
 * Signature: undefined ssl3_generate_key_block(void)
 * Body size: 756 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_generate_key_block(longlong param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  byte local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140c479fa;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_88 = 0x41;
  local_84 = 0;
  uVar8 = 0;
  local_80 = FUN_140b6efa0(*puVar1,4,puVar1[0x8c]);
  lVar4 = FUN_140b6efa0(*puVar1,0x40,puVar1[0x8c]);
  local_78 = lVar4;
  lVar5 = FUN_140b70980();
  lVar6 = FUN_140b70980();
  if ((((local_80 == 0) || (lVar4 == 0)) || (lVar5 == 0)) || (lVar6 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\s3_enc.c",0x27,"ssl3_generate_key_block");
    uVar7 = 0x80006;
LAB_140c47c8f:
    FUN_140ba3290(param_1,0x50,uVar7,0);
  }
  else {
    iVar3 = 0;
    if (0 < param_3) {
      do {
        uVar8 = uVar8 + 1;
        if (0x10 < uVar8) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar7 = 0x2e;
          goto LAB_140c47c0a;
        }
        memset(local_58,(uint)local_88,(ulonglong)uVar8);
        local_88 = local_88 + 1;
        iVar2 = FUN_140b70ff0(lVar6,local_78,0);
        if (iVar2 == 0) {
LAB_140c47c54:
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar7 = 0x3f;
LAB_140c47c0a:
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\s3_enc.c",uVar7,"ssl3_generate_key_block");
          uVar7 = 0xc0103;
          goto LAB_140c47c8f;
        }
        iVar2 = evp_digestupdate(lVar6,local_58,uVar8);
        if (iVar2 == 0) goto LAB_140c47c54;
        iVar2 = evp_digestupdate(lVar6,*(longlong *)(param_1 + 0x8f8) + 0x50,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 8));
        if (iVar2 == 0) goto LAB_140c47c54;
        iVar2 = evp_digestupdate(lVar6,param_1 + 0x164,0x20);
        if (iVar2 == 0) goto LAB_140c47c54;
        iVar2 = evp_digestupdate(lVar6,param_1 + 0x184,0x20);
        if (iVar2 == 0) goto LAB_140c47c54;
        iVar2 = assertion_failed_mdsize_evp_max_md_size(lVar6,local_70,0);
        if (iVar2 == 0) goto LAB_140c47c54;
        iVar2 = FUN_140b70ff0(lVar5,local_80,0);
        if (iVar2 == 0) goto LAB_140c47c54;
        iVar2 = evp_digestupdate(lVar5,*(longlong *)(param_1 + 0x8f8) + 0x50,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 8));
        if (iVar2 == 0) goto LAB_140c47c54;
        iVar2 = evp_digestupdate(lVar5,local_70,0x14);
        if (iVar2 == 0) goto LAB_140c47c54;
        iVar2 = iVar3 + 0x10;
        if (param_3 < iVar2) {
          iVar2 = assertion_failed_mdsize_evp_max_md_size(lVar5,local_70,0);
          if (iVar2 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar7 = 0x44;
            goto LAB_140c47c0a;
          }
          memcpy(param_2,local_70,(ulonglong)(uint)(param_3 - iVar3));
          break;
        }
        iVar3 = assertion_failed_mdsize_evp_max_md_size(lVar5,param_2,0);
        if (iVar3 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar7 = 0x4a;
          goto LAB_140c47c0a;
        }
        param_2 = (void *)((longlong)param_2 + 0x10);
        iVar3 = iVar2;
      } while (iVar2 < param_3);
    }
    FUN_14046e980(local_70,0x14);
    local_84 = 1;
  }
  FUN_140b709d0(lVar5);
  FUN_140b709d0(lVar6);
  FUN_140b6f050(local_80);
  FUN_140b6f050(local_78);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
}

