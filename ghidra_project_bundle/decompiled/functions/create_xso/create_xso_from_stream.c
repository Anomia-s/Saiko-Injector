/**
 * Function: create_xso_from_stream
 * Address:  140bcad70
 * Signature: undefined create_xso_from_stream(void)
 * Body size: 296 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong create_xso_from_stream(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  lVar4 = FUN_140b8da80(0xc0,"ssl\\quic\\quic_impl.c",0x8a1);
  if (lVar4 == 0) {
    uVar2 = 0x8000f;
    uVar5 = 0x8a2;
  }
  else {
    uVar6 = 0;
    iVar3 = FUN_140bc89e0(lVar4,*(undefined8 *)(param_1 + 8),0x81,param_1,0,0);
    if (iVar3 == 0) {
      uVar2 = 0xc0103;
      uVar5 = 0x8a8;
    }
    else {
      iVar3 = FUN_140b6afe0(param_1);
      if (iVar3 != 0) {
        *(longlong *)(lVar4 + 0x78) = param_1;
        *(undefined4 *)(lVar4 + 0xa8) = *(undefined4 *)(param_1 + 0x108);
        uVar1 = *(uint *)(param_1 + 0x110);
        *(undefined4 *)(lVar4 + 0xb8) = 0;
        *(ulonglong *)(lVar4 + 0xb0) = (ulonglong)uVar1 & 0xde0fa987;
        *(undefined8 *)(lVar4 + 0x80) = param_2;
        *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 1;
        FUN_140bcbfd0(lVar4);
        return lVar4;
      }
      uVar2 = 0x80014;
      uVar5 = 0x8ae;
    }
  }
  FUN_140bcba90(0,"ssl\\quic\\quic_impl.c",uVar5,"create_xso_from_stream",CONCAT44(uVar6,uVar2),0);
  FUN_140b8d990(lVar4,"ssl\\quic\\quic_impl.c",0x8bf);
  return 0;
}

