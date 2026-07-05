/**
 * Function: buffer_too_large
 * Address:  1406b8390
 * Signature: undefined buffer_too_large(void)
 * Body size: 363 bytes
 */


void buffer_too_large(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *_Src;
  undefined1 auStack_78 [32];
  void *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  pvVar3 = (void *)FUN_140473b70(lVar1,0xffffffff,&local_50);
  if (pvVar3 != (void *)0x0) {
    _Dst = (void *)*param_1;
    uVar6 = param_1[1] - (longlong)_Dst;
    lVar4 = local_50 - uVar6;
    if (uVar6 <= local_50 && lVar4 != 0) {
      lVar2 = param_1[2];
      _Src = (longlong *)(param_1[3] + 0x18);
      if (param_1[3] == 0) {
        _Src = param_1 + 4;
      }
      uVar6 = param_1[1] - (longlong)_Src;
      uVar5 = lVar4 + uVar6;
      local_58 = pvVar3;
      if (CARRY8(uVar5,uVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(lVar2,"buffer too large");
      }
      uVar6 = (uVar6 >> 1) + uVar6;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      lVar4 = FUN_1406c02f0(lVar2,uVar6);
      pvVar3 = (void *)(lVar4 + 0x18);
      memcpy(pvVar3,_Src,*param_1 - (longlong)_Src);
      if (_Src == param_1 + 4) {
        FUN_140474110(lVar2);
        FUN_1404732f0(lVar2,0xfffffffe);
      }
      lVar2 = *(longlong *)(lVar2 + 8);
      *(longlong *)(lVar2 + -0x20) = lVar4;
      *(undefined4 *)(lVar2 + -0x14) = 5;
      _Dst = (void *)((*param_1 - (longlong)_Src) + (longlong)pvVar3);
      *param_1 = (longlong)_Dst;
      param_1[1] = uVar6 + (longlong)pvVar3;
      param_1[3] = lVar4;
      pvVar3 = local_58;
    }
    memcpy(_Dst,pvVar3,local_50);
    *param_1 = *param_1 + local_50;
    FUN_1404731f0(lVar1,0xfffffffe);
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_78);
}

