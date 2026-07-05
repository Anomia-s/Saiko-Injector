/**
 * Function: assertion_failed_shfreelistlist_ptr
 * Address:  140b8e480
 * Signature: undefined assertion_failed_shfreelistlist_ptr(void)
 * Body size: 659 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void assertion_failed_shfreelistlist_ptr(undefined8 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    if ((param_1 < DAT_1416ff830) ||
       ((undefined8 *)(DAT_1416ff838 + (longlong)DAT_1416ff830) <= param_1)) {
      s_d_openssl_internal_error_sn("assertion failed: WITHIN_ARENA(ptr)","crypto\\mem_sec.c",0x2c0)
      ;
    }
    if ((DAT_1416ff830 <= param_1) &&
       (param_1 < (undefined8 *)(DAT_1416ff838 + (longlong)DAT_1416ff830))) {
      uVar2 = assertion_failed_bit_1_0(param_1);
      iVar1 = assertion_failed_list_0_list_shfreelist_siz(param_1,uVar2 & 0xffffffff,DAT_1416ff858);
      if (iVar1 == 0) {
        s_d_openssl_internal_error_sn
                  ("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto\\mem_sec.c",0x2c5)
        ;
      }
      assertion_failed_testbittable_bit(param_1,uVar2 & 0xffffffff,DAT_1416ff860);
      assertion_failed_within_freelistlist(DAT_1416ff840 + uVar2 * 8,param_1);
      puVar3 = (undefined8 *)FUN_140b8ee30(param_1,uVar2 & 0xffffffff);
      while (puVar3 != (undefined8 *)0x0) {
        uVar5 = uVar2 & 0xffffffff;
        puVar4 = (undefined8 *)FUN_140b8ee30(puVar3,uVar5);
        if (param_1 != puVar4) {
          s_d_openssl_internal_error_sn
                    ("assertion failed: ptr == sh_find_my_buddy(buddy, list)","crypto\\mem_sec.c",
                     0x2cb);
        }
        if (param_1 == (undefined8 *)0x0) {
          s_d_openssl_internal_error_sn("assertion failed: ptr != NULL","crypto\\mem_sec.c",0x2cc);
        }
        iVar1 = assertion_failed_list_0_list_shfreelist_siz(param_1,uVar5,DAT_1416ff860);
        if (iVar1 != 0) {
          s_d_openssl_internal_error_sn
                    ("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto\\mem_sec.c",
                     0x2cd);
        }
        assertion_failed_testbittable_bit(param_1,uVar5,DAT_1416ff858);
        assertion_failed_within_freelisttemp2_p_next(param_1);
        iVar1 = assertion_failed_list_0_list_shfreelist_siz(param_1,uVar5,DAT_1416ff860);
        if (iVar1 != 0) {
          s_d_openssl_internal_error_sn
                    ("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto\\mem_sec.c",
                     0x2d0);
        }
        assertion_failed_testbittable_bit(puVar3,uVar5,DAT_1416ff858);
        assertion_failed_within_freelisttemp2_p_next(puVar3);
        uVar2 = uVar2 - 1;
        puVar4 = puVar3;
        if (param_1 <= puVar3) {
          puVar4 = param_1;
          param_1 = puVar3;
        }
        *param_1 = 0;
        param_1[1] = 0;
        iVar1 = assertion_failed_list_0_list_shfreelist_siz(puVar4,uVar2 & 0xffffffff,DAT_1416ff860)
        ;
        if (iVar1 != 0) {
          s_d_openssl_internal_error_sn
                    ("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto\\mem_sec.c",
                     0x2db);
        }
        assertion_failed_testbittable_bit(puVar4,uVar2 & 0xffffffff,DAT_1416ff858);
        assertion_failed_within_freelistlist(DAT_1416ff840 + uVar2 * 8,puVar4);
        if (*(undefined8 **)(DAT_1416ff840 + uVar2 * 8) != puVar4) {
          s_d_openssl_internal_error_sn
                    ("assertion failed: sh.freelist[list] == ptr","crypto\\mem_sec.c",0x2de);
        }
        puVar3 = (undefined8 *)FUN_140b8ee30(puVar4,uVar2 & 0xffffffff);
        param_1 = puVar4;
      }
    }
  }
  return;
}

