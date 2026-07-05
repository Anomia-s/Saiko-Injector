/**
 * Function: buffer_access_out_of_bounds
 * Address:  1406b35b0
 * Signature: undefined buffer_access_out_of_bounds(void)
 * Body size: 341 bytes
 */


undefined8 buffer_access_out_of_bounds(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Src;
  byte bVar5;
  ulonglong uVar6;
  ulonglong _Size;
  double dVar7;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  local_48 = 0;
  lVar3 = FUN_1406b7640(param_1,1,&local_48);
  dVar7 = (double)FUN_1406b7730(param_1,2);
  uVar6 = (ulonglong)dVar7;
  uVar1 = FUN_1406b7830(param_1,3);
  uVar2 = FUN_1406b7920(param_1,4);
  if (-1 < (longlong)uVar6) {
    if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"bit count is out of range of [0; 32]");
    }
    if (uVar1 + uVar6 <= (ulonglong)(local_48 << 3)) {
      local_50 = 0;
      _Src = (void *)(lVar3 + (uVar6 >> 3 & 0xffffffff));
      _Size = (ulonglong)(uint)((int)(uVar1 + uVar6 + 7 >> 3) - (int)(uVar6 >> 3));
      memcpy(&local_50,_Src,_Size);
      uVar4 = ~(-1L << ((byte)uVar1 & 0x3f));
      bVar5 = (byte)uVar6 & 7;
      local_50 = (ulonglong)(uVar2 & (uint)uVar4) << bVar5 | ~(uVar4 << bVar5) & local_50;
      memcpy(_Src,&local_50,_Size);
      if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_78)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_40 ^ (ulonglong)auStack_78);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"buffer access out of bounds");
}

