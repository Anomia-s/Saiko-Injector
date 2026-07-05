/**
 * Function: client_random
 * Address:  140bb8170
 * Signature: undefined client_random(void)
 * Body size: 495 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 client_random(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong _Size;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0xba0) != 4)) {
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  lVar1 = *(longlong *)(*(int **)(param_1 + 0x18) + 0x36);
  if ((((((*(byte *)(lVar1 + 0x50) & 8) != 0) || (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)
        ) || (iVar2 == 0x10000)) ||
      (((*(int *)(param_1 + 0x78) != 0 || ((*(uint *)(param_1 + 0x160) & 0x2000) != 0)) ||
       ((*(int *)(param_1 + 0xf0) == 0 && ((*(uint *)(param_1 + 0x9a8) >> 0x14 & 1) == 0)))))) ||
     ((*(int *)(param_1 + 0x340) != 0 ||
      (iVar2 = (**(code **)(lVar1 + 0x10))(param_1,0x92), iVar2 != 0)))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8);
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      uVar4 = *(undefined8 *)(lVar1 + 0x38);
    }
    _Size = (**(code **)(lVar1 + 0x18))(param_1,uVar3,uVar4,param_1 + 0x1e0);
    if (_Size != 0) {
      *(ulonglong *)(param_1 + 0x260) = _Size;
      iVar2 = FUN_140c22560(param_2,param_1 + 0x1e0,_Size);
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar3 = 0x292;
      }
      else {
        if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
             (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
           (iVar2 = FUN_140b6ede0(param_1,"CLIENT_RANDOM",*(longlong *)(param_1 + 0x8f8) + 0x50,
                                  *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 8)), iVar2 == 0))
        {
          return 0;
        }
        if (_Size < 0x41) {
          if (*(int *)(param_1 + 0x78) != 0) {
            memcpy((void *)(param_1 + 0x468),(void *)(param_1 + 0x1e0),_Size);
            *(ulonglong *)(param_1 + 0x4a8) = _Size;
            return 1;
          }
          memcpy((void *)(param_1 + 0x420),(void *)(param_1 + 0x1e0),_Size);
          *(ulonglong *)(param_1 + 0x460) = _Size;
          return 1;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar3 = 0x2a5;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",uVar3,"tls_construct_finished");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
    }
  }
  return 0;
}

