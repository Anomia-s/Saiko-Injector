/**
 * Function: couldnt_write_init_packet
 * Address:  14064d6b0
 * Signature: undefined couldnt_write_init_packet(void)
 * Body size: 172 bytes
 */


undefined8 couldnt_write_init_packet(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  local_20 = 0xc00f0008;
  local_18 = 0;
  FUN_14043fe30(param_1,"Xbox 360 Wireless Controller");
  plVar2 = (longlong *)FUN_140160c70(1,0x58);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_1;
    *(longlong **)(param_1 + 0x70) = plVar2;
    iVar1 = FUN_14017a5d0(*(undefined8 *)(param_1 + 0x80),&local_20,0xc);
    if (iVar1 == 0xc) {
      *(undefined4 *)(param_1 + 0x5c) = 2;
      uVar3 = 1;
      goto LAB_14064d735;
    }
    FUN_1400fbed0("Couldn\'t write init packet");
  }
  uVar3 = 0;
LAB_14064d735:
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_48);
}

