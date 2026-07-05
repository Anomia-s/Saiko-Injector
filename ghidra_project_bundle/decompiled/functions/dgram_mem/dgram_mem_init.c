/**
 * Function: dgram_mem_init
 * Address:  140c3e170
 * Signature: undefined dgram_mem_init(void)
 * Body size: 225 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dgram_mem_init(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140b8da80(0x60,"crypto\\bio\\bss_dgram_pair.c",0x117);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x38) = 0x5c0;
    *(undefined8 *)(lVar2 + 0x30) = 0x3600;
    lVar3 = cryptothreads_winc();
    *(longlong *)(lVar2 + 0x50) = lVar3;
    if (lVar3 != 0) {
      *(longlong *)(param_1 + 0x40) = lVar2;
      iVar1 = FUN_140c3e7b0(lVar2 + 8,*(undefined8 *)(lVar2 + 0x30));
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\bio\\bss_dgram_pair.c",0x134,"dgram_mem_init");
        FUN_140b91cc0(0x20,0x80020,0);
        return 0;
      }
      *(uint *)(lVar2 + 0x58) = *(uint *)(lVar2 + 0x58) | 8;
      *(undefined4 *)(param_1 + 0x28) = 1;
      return 1;
    }
    FUN_140b8d990(lVar2,"crypto\\bio\\bss_dgram_pair.c",0x122);
  }
  return 0;
}

