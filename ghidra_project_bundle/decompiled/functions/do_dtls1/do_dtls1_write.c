/**
 * Function: do_dtls1_write
 * Address:  140bf20b0
 * Signature: undefined do_dtls1_write(void)
 * Body size: 320 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
do_dtls1_write(longlong param_1,undefined1 param_2,undefined8 param_3,ulonglong param_4,
              longlong *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140bf20d0;
  if ((0 < *(int *)(param_1 + 0x1c4)) &&
     (uVar3 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x90))(), (int)uVar3 < 1)) {
    return uVar3;
  }
  if (param_4 != 0) {
    uVar1 = FUN_140b6e7f0(param_1);
    if (param_4 <= uVar1) {
      if ((**(int **)(param_1 + 0x18) == 0x1ffff) && (*(int *)(param_1 + 0x9b8) != 0x100)) {
        local_24 = 0xfeff;
      }
      else {
        local_24 = *(undefined4 *)(param_1 + 0x48);
      }
      local_28[0] = param_2;
      local_20 = param_3;
      local_18 = param_4;
      uVar2 = (**(code **)(*(longlong *)(param_1 + 0xc68) + 0x30))
                        (*(undefined8 *)(param_1 + 0xc78),local_28,1);
      uVar3 = FUN_140bac250(param_1,1,uVar2,"ssl\\record\\rec_layer_d1.c",0x2a0);
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      *param_5 = (longlong)(int)param_4;
      return uVar3;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\record\\rec_layer_d1.c",0x28d,"do_dtls1_write");
    FUN_140ba3290(param_1,0x50,0xc2,0);
  }
  return 0;
}

