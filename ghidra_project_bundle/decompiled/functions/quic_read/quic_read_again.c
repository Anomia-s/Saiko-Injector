/**
 * Function: quic_read_again
 * Address:  140bccbf0
 * Signature: undefined quic_read_again(void)
 * Body size: 192 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong quic_read_again(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 1;
  lVar1 = *(longlong *)(*param_1 + 0x18);
  if ((((*(byte *)(lVar1 + 0x100) & 0x20) == 0) &&
      (iVar2 = FUN_140c504f0(*(undefined8 *)(lVar1 + 0xa0)), iVar2 == 0)) &&
     (iVar2 = FUN_140c50530(*(undefined8 *)(lVar1 + 0xa0)), iVar2 != 0)) {
    iVar2 = quic_read_actual(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                             CONCAT44(uVar4,(int)param_1[5]));
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    return (ulonglong)(*(longlong *)param_1[4] != 0);
  }
  FUN_140bcba90(*param_1,"ssl\\quic\\quic_impl.c",0xbbe,"quic_read_again",CONCAT44(uVar3,0xcf),0);
  return 0xffffffff;
}

