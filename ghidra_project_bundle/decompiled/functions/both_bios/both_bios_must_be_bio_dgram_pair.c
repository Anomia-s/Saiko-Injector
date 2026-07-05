/**
 * Function: both_bios_must_be_bio_dgram_pair
 * Address:  140c3eb10
 * Signature: undefined both_bios_must_be_bio_dgram_pair(void)
 * Body size: 561 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 both_bios_must_be_bio_dgram_pair(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",0x158,"dgram_pair_ctrl_make_bio_pair");
    pcVar5 = (char *)0x0;
LAB_140c3ed03:
    FUN_140b91cc0(0x20,0x7d,pcVar5);
    return 0;
  }
  if ((*(undefined **)(param_1 + 8) != &DAT_1412521b0) ||
     (*(undefined **)(param_2 + 8) != &DAT_1412521b0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",0x15e,"dgram_pair_ctrl_make_bio_pair");
    pcVar5 = "both BIOs must be BIO_dgram_pair";
    goto LAB_140c3ed03;
  }
  plVar1 = *(longlong **)(param_2 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if ((plVar2 == (longlong *)0x0) || (plVar1 == (longlong *)0x0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x167;
LAB_140c3ec6c:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",uVar4,"dgram_pair_ctrl_make_bio_pair");
    uVar4 = 0x78;
  }
  else {
    if ((*plVar2 != 0) || (*plVar1 != 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\bio\\bss_dgram_pair.c",0x170,"dgram_pair_ctrl_make_bio_pair");
      pcVar5 = "cannot associate a BIO_dgram_pair which is already in use";
      uVar4 = 0x7b;
      goto LAB_140c3ec80;
    }
    if (((ulonglong)plVar2[6] < 0x400) || ((ulonglong)plVar1[6] < 0x400)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x177;
      goto LAB_140c3ec6c;
    }
    if ((plVar2[2] == plVar2[6]) || (iVar3 = FUN_140c3e7b0(plVar2 + 1), iVar3 != 0)) {
      if ((plVar1[2] != plVar1[6]) && (iVar3 = FUN_140c3e7b0(plVar1 + 1), iVar3 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\bio\\bss_dgram_pair.c",0x183,"dgram_pair_ctrl_make_bio_pair");
        FUN_140b91cc0(0x20,0x80020,0);
        FUN_140c3e820(plVar2 + 1);
        return 0;
      }
      *plVar2 = param_2;
      *plVar1 = param_1;
      *(uint *)(plVar2 + 0xb) = *(uint *)(plVar2 + 0xb) & 0xfffffffb;
      *(uint *)(plVar1 + 0xb) = *(uint *)(plVar1 + 0xb) | 4;
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined4 *)(param_2 + 0x28) = 1;
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",0x17d,"dgram_pair_ctrl_make_bio_pair");
    uVar4 = 0x80020;
  }
  pcVar5 = (char *)0x0;
LAB_140c3ec80:
  FUN_140b91cc0(0x20,uVar4,pcVar5);
  return 0;
}

