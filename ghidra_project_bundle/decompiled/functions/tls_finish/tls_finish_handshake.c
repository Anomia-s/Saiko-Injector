/**
 * Function: tls_finish_handshake
 * Address:  140bb84f0
 * Signature: undefined tls_finish_handshake(void)
 * Body size: 744 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_finish_handshake(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0xc0);
  lVar2 = *(longlong *)(param_1 + 8);
  if (param_3 != 0) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      FUN_140b8ef10(*(undefined8 *)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    iVar4 = FUN_140b6e950(param_1);
    if (iVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",0x5af,"tls_finish_handshake");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
       (iVar4 = **(int **)(param_1 + 0x18), 0x303 < iVar4)) && (iVar4 != 0x10000)) &&
     ((*(int *)(param_1 + 0x78) == 0 && (*(int *)(param_1 + 0xba0) == 4)))) {
    *(undefined4 *)(param_1 + 0xba0) = 1;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xb98) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xa58) = 0;
    FUN_140c46f70(param_1);
    piVar3 = *(int **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((((*(byte *)(*(longlong *)(piVar3 + 0x36) + 0x50) & 8) == 0) && (0x303 < *piVar3)) &&
         (*piVar3 != 0x10000)) {
        if ((*(byte *)(*(longlong *)(param_1 + 0xb80) + 0x50) & 1) != 0) {
          FUN_140ba48d0(*(longlong *)(param_1 + 0xb80),*(undefined8 *)(param_1 + 0x8f8));
        }
      }
      else {
        FUN_140b6e240(param_1,1);
      }
      if (*(int *)(param_1 + 0x508) != 0) {
        LOCK();
        piVar3 = (int *)(*(longlong *)(param_1 + 0xb80) + 0x9c);
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      *(code **)(param_1 + 0x70) = FUN_140ba30c0;
      LOCK();
      piVar3 = (int *)(*(longlong *)(param_1 + 0xb80) + 0x80);
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    else {
      if ((((*(byte *)(*(longlong *)(piVar3 + 0x36) + 0x50) & 8) != 0) || (*piVar3 < 0x304)) ||
         (*piVar3 == 0x10000)) {
        FUN_140b6e240(param_1,2);
      }
      LOCK();
      piVar3 = (int *)(lVar2 + 0x8c);
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      *(code **)(param_1 + 0x70) = FUN_140ba3070;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
      *(undefined2 *)(*(longlong *)(param_1 + 0x4f0) + 0x110) = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 0x4f0) + 0x10c) = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 0x4f0) + 0x10e) = 0;
      FUN_140bec550(param_1);
    }
  }
  pcVar6 = *(code **)(param_1 + 0x958);
  if ((pcVar6 == (code *)0x0) && (pcVar6 = *(code **)(lVar2 + 0x120), pcVar6 == (code *)0x0)) {
    FUN_140ba3340(param_1,0);
  }
  else {
    FUN_140ba3340(param_1,0);
    if ((((iVar1 != 0) ||
         (((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0 ||
          (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)))) || (iVar1 == 0x10000)) ||
       ((*(longlong *)(param_1 + 0x260) == 0 || (*(longlong *)(param_1 + 0x2e8) == 0)))) {
      (*pcVar6)(uVar5,0x20,1);
    }
  }
  if (param_4 == 0) {
    FUN_140ba3340(param_1,1);
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

