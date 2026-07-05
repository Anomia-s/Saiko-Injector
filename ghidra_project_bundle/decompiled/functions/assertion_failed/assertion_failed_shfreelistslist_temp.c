/**
 * Function: assertion_failed_shfreelistslist_temp
 * Address:  140b8e0b0
 * Signature: undefined assertion_failed_shfreelistslist_temp(void)
 * Body size: 968 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * assertion_failed_shfreelistslist_temp(ulonglong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar5 = DAT_1416ff850;
  uVar2 = DAT_1416ff848;
  if (param_1 <= DAT_1416ff838) {
    for (; uVar2 = uVar2 - 1, uVar7 = uVar2, uVar5 < param_1; uVar5 = uVar5 * 2) {
    }
    for (; -1 < (longlong)uVar7; uVar7 = uVar7 - 1) {
      if (DAT_1416ff840[uVar7] != 0) {
        while (uVar7 != uVar2) {
          plVar1 = (longlong *)DAT_1416ff840[uVar7];
          iVar3 = assertion_failed_list_0_list_shfreelist_siz
                            (plVar1,uVar7 & 0xffffffff,DAT_1416ff860);
          if (iVar3 != 0) {
            s_d_openssl_internal_error_sn
                      ("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)",
                       "crypto\\mem_sec.c",0x293);
          }
          assertion_failed_testbittable_bit(plVar1,uVar7 & 0xffffffff,DAT_1416ff858);
          if (*plVar1 != 0) {
            *(longlong *)(*plVar1 + 8) = plVar1[1];
          }
          *(longlong *)plVar1[1] = *plVar1;
          if (((*plVar1 != 0) &&
              ((puVar9 = *(undefined8 **)(*plVar1 + 8), puVar9 < DAT_1416ff840 ||
               (DAT_1416ff840 + DAT_1416ff848 <= puVar9)))) &&
             ((puVar9 < DAT_1416ff830 ||
              ((undefined8 *)((longlong)DAT_1416ff830 + DAT_1416ff838) <= puVar9)))) {
            s_d_openssl_internal_error_sn
                      ("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)"
                       ,"crypto\\mem_sec.c",0x1aa);
          }
          if (plVar1 == (longlong *)DAT_1416ff840[uVar7]) {
            s_d_openssl_internal_error_sn
                      ("assertion failed: temp != sh.freelist[slist]","crypto\\mem_sec.c",0x296);
          }
          uVar7 = uVar7 + 1;
          iVar3 = assertion_failed_list_0_list_shfreelist_siz
                            (plVar1,uVar7 & 0xffffffff,DAT_1416ff860);
          if (iVar3 != 0) {
            s_d_openssl_internal_error_sn
                      ("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)",
                       "crypto\\mem_sec.c",0x29c);
          }
          assertion_failed_testbittable_bit(plVar1,uVar7 & 0xffffffff,DAT_1416ff858);
          assertion_failed_within_freelistlist(DAT_1416ff840 + uVar7,plVar1);
          if ((longlong *)DAT_1416ff840[uVar7] != plVar1) {
            s_d_openssl_internal_error_sn
                      ("assertion failed: sh.freelist[slist] == temp","crypto\\mem_sec.c",0x29f);
          }
          bVar4 = (byte)uVar7;
          lVar8 = (longlong)plVar1 + (DAT_1416ff838 >> (bVar4 & 0x3f));
          iVar3 = assertion_failed_list_0_list_shfreelist_siz
                            (lVar8,uVar7 & 0xffffffff,DAT_1416ff860);
          if (iVar3 != 0) {
            s_d_openssl_internal_error_sn
                      ("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)",
                       "crypto\\mem_sec.c",0x2a3);
          }
          assertion_failed_testbittable_bit(lVar8,uVar7 & 0xffffffff);
          assertion_failed_within_freelistlist(DAT_1416ff840 + uVar7);
          if (DAT_1416ff840[uVar7] != lVar8) {
            s_d_openssl_internal_error_sn("assertion failed: sh.freelist[slist] == temp");
          }
          uVar12 = DAT_1416ff838 >> (bVar4 & 0x3f);
          lVar11 = 1L << (bVar4 & 0x3f);
          puVar9 = (undefined8 *)0x0;
          uVar5 = lVar11 + (ulonglong)(lVar8 - (longlong)DAT_1416ff830) / uVar12;
          uVar10 = uVar5 ^ 1;
          uVar5 = uVar5 >> 3;
          bVar6 = (byte)(1L << ((byte)uVar10 & 7));
          if (((*(byte *)(uVar5 + DAT_1416ff858) & bVar6) != 0) &&
             ((*(byte *)(uVar5 + DAT_1416ff860) & bVar6) == 0)) {
            puVar9 = (undefined8 *)((lVar11 - 1U & uVar10) * uVar12 + (longlong)DAT_1416ff830);
          }
          if ((undefined8 *)(lVar8 - (DAT_1416ff838 >> (bVar4 & 0x3f))) != puVar9) {
            s_d_openssl_internal_error_sn
                      ("assertion failed: temp-(sh.arena_size >> slist) == sh_find_my_buddy(temp, slist)"
                       ,"crypto\\mem_sec.c",0x2a8);
          }
        }
        puVar9 = (undefined8 *)DAT_1416ff840[uVar2];
        iVar3 = assertion_failed_list_0_list_shfreelist_siz(puVar9,uVar2 & 0xffffffff,DAT_1416ff858)
        ;
        if (iVar3 == 0) {
          s_d_openssl_internal_error_sn
                    ("assertion failed: sh_testbit(chunk, list, sh.bittable)","crypto\\mem_sec.c",
                     0x2ad);
        }
        assertion_failed_testbittable_bit(puVar9,uVar2 & 0xffffffff,DAT_1416ff860);
        assertion_failed_within_freelisttemp2_p_next(puVar9);
        if ((puVar9 < DAT_1416ff830) ||
           ((undefined8 *)(DAT_1416ff838 + (longlong)DAT_1416ff830) <= puVar9)) {
          s_d_openssl_internal_error_sn
                    ("assertion failed: WITHIN_ARENA(chunk)","crypto\\mem_sec.c",0x2b1);
        }
        *puVar9 = 0;
        puVar9[1] = 0;
        return puVar9;
      }
    }
  }
  return (undefined8 *)0x0;
}

