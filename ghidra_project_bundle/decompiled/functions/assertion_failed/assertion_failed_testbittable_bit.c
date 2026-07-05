/**
 * Function: assertion_failed_testbittable_bit
 * Address:  140b8eb70
 * Signature: undefined assertion_failed_testbittable_bit(void)
 * Body size: 294 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void assertion_failed_testbittable_bit(longlong param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((param_2 < 0) || (DAT_1416ff848 <= param_2)) {
    s_d_openssl_internal_error_sn
              ("assertion failed: list >= 0 && list < sh.freelist_size","crypto\\mem_sec.c",0x182);
  }
  bVar1 = (byte)param_2;
  if ((param_1 - DAT_1416ff830 & (DAT_1416ff838 >> (bVar1 & 0x3f)) - 1) != 0) {
    s_d_openssl_internal_error_sn
              ("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
               "crypto\\mem_sec.c",0x183);
  }
  uVar2 = (1L << (bVar1 & 0x3f)) +
          (ulonglong)(param_1 - DAT_1416ff830) / (DAT_1416ff838 >> (bVar1 & 0x3f));
  if ((uVar2 == 0) || (DAT_1416ff868 <= uVar2)) {
    s_d_openssl_internal_error_sn
              ("assertion failed: bit > 0 && bit < sh.bittable_size","crypto\\mem_sec.c",0x185);
  }
  uVar3 = uVar2 >> 3;
  uVar4 = (uint)uVar2 & 7;
  if ((*(byte *)(uVar3 + param_3) & (byte)(1L << (sbyte)uVar4)) != 0) {
    s_d_openssl_internal_error_sn
              ("assertion failed: !TESTBIT(table, bit)","crypto\\mem_sec.c",0x186);
  }
  *(byte *)(uVar3 + param_3) = *(byte *)(uVar3 + param_3) | (byte)(1L << uVar4);
  return;
}

