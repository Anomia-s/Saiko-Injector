/**
 * Function: tls_read_record
 * Address:  140c3fa90
 * Signature: undefined tls_read_record(void)
 * Body size: 310 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_read_record(longlong param_1,longlong *param_2,undefined4 *param_3,undefined1 *param_4,
               longlong *param_5,undefined8 *param_6,undefined2 *param_7,undefined8 *param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0xfd8);
  uVar2 = *(ulonglong *)(param_1 + 0xfd0);
  if (uVar2 <= uVar4) {
    do {
      if (*(ulonglong *)(param_1 + 0xfe0) != uVar2) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\record\\methods\\tls_common.c",0x46c,"tls_read_record");
        FUN_140c40330(param_1,0x50,0x141,0);
        return 0xfffffffe;
      }
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 0x28))(param_1);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      uVar4 = *(ulonglong *)(param_1 + 0xfd8);
      uVar2 = *(ulonglong *)(param_1 + 0xfd0);
    } while (uVar2 <= uVar4);
  }
  lVar1 = param_1 + uVar4 * 0x48;
  *(ulonglong *)(param_1 + 0xfd8) = uVar4 + 1;
  *param_2 = lVar1 + 0x6d0;
  *param_3 = *(undefined4 *)(lVar1 + 0x6d0);
  *param_4 = *(undefined1 *)(lVar1 + 0x6d4);
  *param_5 = *(longlong *)(lVar1 + 0x6f0) + *(longlong *)(lVar1 + 0x6e8);
  *param_6 = *(undefined8 *)(lVar1 + 0x6d8);
  if (*(int *)(param_1 + 0x10) != 0) {
    *param_7 = *(undefined2 *)(lVar1 + 0x708);
    *param_8 = *(undefined8 *)(lVar1 + 0x70a);
  }
  return 1;
}

