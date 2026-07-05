/**
 * Function: cryptoinitthreadc
 * Address:  140c19f80
 * Signature: undefined cryptoinitthreadc(void)
 * Body size: 274 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cryptoinitthreadc(undefined8 param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_140b8b930();
  if (param_2 == 0) {
    if (param_3 == 0) {
      FUN_140b8b970(param_1,0);
    }
  }
  else if (lVar4 == 0) {
    lVar4 = FUN_140b8da80(8,"crypto\\initthread.c",0x65);
    if (lVar4 != 0) {
      iVar2 = FUN_140b8b970(param_1,lVar4);
      if (iVar2 == 0) {
        uVar5 = 0x69;
      }
      else {
        iVar3 = FUN_140b8b890(&DAT_141700330,cryptoinitthreadc);
        puVar1 = DAT_141700328;
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = DAT_141700334;
        }
        if (((iVar2 != 0) && (DAT_141700328 != (undefined8 *)0x0)) &&
           (iVar2 = FUN_140b8b770(DAT_141700328[1]), iVar2 != 0)) {
          iVar2 = FUN_140b78340(*puVar1,lVar4);
          FUN_140b8b7a0(puVar1[1]);
          if (iVar2 != 0) {
            return lVar4;
          }
        }
        FUN_140b8b970(param_1,0);
        uVar5 = 0x70;
      }
      FUN_140b8d990(lVar4,"crypto\\initthread.c",uVar5);
    }
    lVar4 = 0;
  }
  return lVar4;
}

