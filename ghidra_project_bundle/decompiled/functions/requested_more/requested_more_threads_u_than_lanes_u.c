/**
 * Function: requested_more_threads_u_than_lanes_u
 * Address:  140d25ce0
 * Signature: undefined requested_more_threads_u_than_lanes_u(void)
 * Body size: 860 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
requested_more_threads_u_than_lanes_u
          (longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  iVar2 = FUN_140b69250();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = kdf_argon2_ctx_set_threads(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar4 = FUN_140c452b0(*(undefined8 *)(param_1 + 0x80),"blake2bmac",
                          *(undefined8 *)(param_1 + 0x98));
    *(longlong *)(param_1 + 0x90) = lVar4;
    if (lVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kdfs\\argon2.c",0x404,"kdf_argon2_derive");
      pcVar7 = "cannot fetch blake2bmac";
      uVar6 = 0x96;
      goto LAB_140d2601b;
    }
  }
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar4 = FUN_140b71980(*(undefined8 *)(param_1 + 0x80),"blake2b512",
                          *(undefined8 *)(param_1 + 0x98));
    *(longlong *)(param_1 + 0x88) = lVar4;
    if (lVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kdfs\\argon2.c",0x40c,"kdf_argon2_derive");
      pcVar7 = "cannot fetch blake2b512";
      uVar6 = 0x81;
      goto LAB_140d2601b;
    }
  }
  if ((*(longlong *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kdfs\\argon2.c",0x412,"kdf_argon2_derive");
    uVar6 = 0x83;
LAB_140d26018:
    pcVar7 = (char *)0x0;
  }
  else {
    if (param_3 != *(uint *)(param_1 + 8)) {
      lVar4 = FUN_140b93540(param_4,&DAT_1413a61f4);
      if (lVar4 != 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\kdfs\\argon2.c",0x418,"kdf_argon2_derive");
        uVar6 = 0x6a;
        goto LAB_140d26018;
      }
      iVar2 = FUN_140d266e0(param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    iVar2 = *(int *)(param_1 + 100);
    if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
      if (1 < *(uint *)(param_1 + 0x58)) {
        uVar5 = FUN_140cad6b0(*(undefined8 *)(param_1 + 0x80));
        if (uVar5 < *(uint *)(param_1 + 0x58)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\kdfs\\argon2.c",0x431,"kdf_argon2_derive");
          uVar8 = *(undefined4 *)(param_1 + 0x58);
          uVar6 = FUN_140cad6b0(*(undefined8 *)(param_1 + 0x80));
          FUN_140b91cc0(0x39,0xea,"requested %u threads, available: %u",uVar8,uVar6);
          return 0;
        }
        if (*(uint *)(param_1 + 0x54) < *(uint *)(param_1 + 0x58)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\kdfs\\argon2.c",0x438,"kdf_argon2_derive");
          FUN_140b91cc0(0x39,0xea,"requested more threads (%u) than lanes (%u)",
                        *(undefined4 *)(param_1 + 0x58),
                        CONCAT44(uVar8,*(undefined4 *)(param_1 + 0x54)));
          return 0;
        }
      }
      iVar2 = *(int *)(param_1 + 0x54);
      uVar1 = *(uint *)(param_1 + 0x50);
      if ((uint)(iVar2 * 8) <= uVar1) {
        *(undefined8 *)(param_1 + 0x68) = 0;
        uVar3 = uVar1 / (uint)(iVar2 * 4);
        *(uint *)(param_1 + 0x78) = uVar3;
        *(uint *)(param_1 + 0x7c) = uVar3 * 4;
        *(uint *)(param_1 + 0x74) = uVar3 * iVar2 * 4;
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x4c);
        iVar2 = cannot_allocate_required_memory
                          (param_1,(ulonglong)uVar1 % (ulonglong)(uint)(iVar2 * 4));
        if (iVar2 != 1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x58) == 1) {
          iVar2 = FUN_140d27f70();
        }
        else {
          iVar2 = FUN_140d27d10(param_1);
        }
        if (iVar2 != 1) {
          return 0;
        }
        FUN_140d28800(param_1,param_2);
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kdfs\\argon2.c",0x440,"kdf_argon2_derive");
      pcVar7 = "m_cost must be greater or equal than 8 times the number of lanes";
      uVar6 = 0xeb;
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kdfs\\argon2.c",0x425,"kdf_argon2_derive");
      pcVar7 = "invalid Argon2 type";
      uVar6 = 0x7d;
    }
  }
LAB_140d2601b:
  FUN_140b91cc0(0x39,uVar6,pcVar7);
  return 0;
}

