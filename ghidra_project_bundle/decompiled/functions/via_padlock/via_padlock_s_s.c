/**
 * Function: via_padlock_s_s
 * Address:  140c74480
 * Signature: undefined via_padlock_s_s(void)
 * Body size: 285 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void via_padlock_s_s(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = 0x140c7448c;
  lVar3 = FUN_140c10070();
  if (lVar3 == 0) {
    return;
  }
  uVar1 = FUN_1408454c0();
  DAT_141700c18 = 0;
  bVar5 = (uVar1 & 0xc0) == 0xc0;
  DAT_141700c14 = (uint)bVar5;
  pcVar4 = "no-ACE";
  if (bVar5) {
    pcVar4 = "ACE";
  }
  FUN_140c07aa0(&DAT_141700bb0,100,"VIA PadLock (%s, %s)","no-RNG",pcVar4,uVar6);
  iVar2 = FUN_140c101e0(lVar3,PTR_s_padlock_141517cb8);
  if (iVar2 != 0) {
    iVar2 = FUN_140c10240(lVar3,&DAT_141700bb0);
    if (iVar2 != 0) {
      iVar2 = FUN_140c102b0(lVar3,&LAB_140c745a0);
      if (iVar2 != 0) {
        if (DAT_141700c14 != 0) {
          iVar2 = FUN_140bd6800(lVar3,FUN_140c745c0);
          if (iVar2 == 0) goto LAB_140c7458a;
        }
        if (DAT_141700c18 != 0) {
          iVar2 = FUN_140bd67f0(lVar3,&DAT_141517c88);
          if (iVar2 == 0) goto LAB_140c7458a;
        }
        FUN_140b932f0();
        FUN_140c5b1a0(lVar3);
        FUN_140c10150(lVar3);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        return;
      }
    }
  }
LAB_140c7458a:
  FUN_140c10150(lVar3);
  return;
}

