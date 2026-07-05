/**
 * Function: assertion_failed_list_0_list_shfreelist_siz
 * Address:  140b8e940
 * Signature: undefined assertion_failed_list_0_list_shfreelist_siz(void)
 * Body size: 246 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint assertion_failed_list_0_list_shfreelist_siz(longlong param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if ((param_2 < 0) || (DAT_1416ff848 <= param_2)) {
    s_d_openssl_internal_error_sn
              ("assertion failed: list >= 0 && list < sh.freelist_size","crypto\\mem_sec.c",0x16b);
  }
  bVar1 = (byte)param_2;
  if ((param_1 - DAT_1416ff830 & (DAT_1416ff838 >> (bVar1 & 0x3f)) - 1) != 0) {
    s_d_openssl_internal_error_sn
              ("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
               "crypto\\mem_sec.c",0x16c);
  }
  uVar2 = (1L << (bVar1 & 0x3f)) +
          (ulonglong)(param_1 - DAT_1416ff830) / (DAT_1416ff838 >> (bVar1 & 0x3f));
  if ((uVar2 == 0) || (DAT_1416ff868 <= uVar2)) {
    s_d_openssl_internal_error_sn
              ("assertion failed: bit > 0 && bit < sh.bittable_size","crypto\\mem_sec.c",0x16e);
  }
  return (uint)*(byte *)((uVar2 >> 3) + param_3) & (uint)(1L << ((byte)uVar2 & 7));
}

