/**
 * Function: ossl_quic_pending_int
 * Address:  140bccfe0
 * Signature: undefined ossl_quic_pending_int(void)
 * Body size: 339 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ossl_quic_pending_int(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_48 [3];
  longlong local_30;
  longlong local_28;
  undefined8 uStack_10;
  
  uStack_10 = 0x140bccff0;
  lVar4 = 0;
  iVar2 = qc_try_create_default_xso_for_write(param_1,local_48,3);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_140b77290(*(undefined8 *)(local_48[0] + 0x58));
  FUN_140c20b60(uVar3);
  if ((*(byte *)(local_30 + 0x100) & 1) == 0) goto LAB_140bcd10c;
  if (local_28 == 0) {
    iVar2 = qc_wait_for_default_xso_for_read(local_48,1);
    if (iVar2 != 0) {
      local_28 = *(longlong *)(local_30 + 0xb0);
      goto LAB_140bcd071;
    }
    uVar3 = 0xc53;
    uVar5 = 0x163;
  }
  else {
LAB_140bcd071:
    lVar1 = *(longlong *)(local_28 + 0x80);
    if (lVar1 != 0) {
      if (param_2 == 0) {
        iVar2 = FUN_140bcabc0(lVar1,0);
        lVar4 = (longlong)iVar2;
      }
      else {
        iVar2 = FUN_140bcabc0(lVar1,1);
        if (iVar2 == 0) {
          iVar2 = FUN_140c50880(*(undefined8 *)(local_30 + 0xa0));
          if (iVar2 == 0) {
            iVar2 = FUN_140c504f0(*(undefined8 *)(local_30 + 0xa0));
            if (iVar2 == 0) goto LAB_140bcd10c;
          }
        }
        lVar4 = 1;
      }
      goto LAB_140bcd10c;
    }
    uVar3 = 0xc59;
    uVar5 = 0xc0103;
  }
  FUN_140bcba90(local_48,"ssl\\quic\\quic_impl.c",uVar3,"ossl_quic_pending_int",uVar5,0);
LAB_140bcd10c:
  uVar3 = FUN_140b77290(*(undefined8 *)(local_48[0] + 0x58));
  FUN_140c20b80(uVar3);
  return lVar4;
}

