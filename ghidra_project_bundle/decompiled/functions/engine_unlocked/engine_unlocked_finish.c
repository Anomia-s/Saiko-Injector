/**
 * Function: engine_unlocked_finish
 * Address:  140bd20a0
 * Signature: undefined engine_unlocked_finish(void)
 * Body size: 186 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int engine_unlocked_finish(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    if (param_2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x68))();
    }
    else {
      FUN_140b8b7a0(DAT_1417001c0);
      iVar2 = (**(code **)(param_1 + 0x68))(param_1);
      iVar3 = FUN_140b8b770(DAT_1417001c0);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar3 = FUN_140c104e0(param_1,0);
  if (iVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\engine\\eng_init.c",0x4f,"engine_unlocked_finish");
    FUN_140b91cc0(0x26,0x6a,0);
    return 0;
  }
  return iVar2;
}

