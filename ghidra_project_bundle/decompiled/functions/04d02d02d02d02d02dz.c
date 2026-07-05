/**
 * Function: 04d02d02d02d02d02dz
 * Address:  140c2f2a0
 * Signature: undefined 04d02d02d02d02d02dz(void)
 * Body size: 314 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * _4d02d02d02d02d02dz(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0x140c2f2ba;
  puVar3 = (undefined4 *)0x0;
  if (param_3 == -1) {
    param_3 = (99 < param_2[5] - 0x32) + 0x17;
  }
  else if (param_3 == 0x17) {
    if (99 < param_2[5] - 0x32) goto LAB_140c2f2f3;
  }
  else if (param_3 != 0x18) goto LAB_140c2f2f3;
  puVar3 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)FUN_140b78910(), puVar3 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  iVar1 = FUN_140b78d90(puVar3,0,0x14);
  if (iVar1 != 0) {
    puVar3[1] = param_3;
    if (param_2[4] != 0x7fffffff) {
      iVar1 = param_2[5];
      if (param_3 == 0x18) {
        if (0x7ffff893 < iVar1) goto LAB_140c2f2f3;
        pcVar4 = "%04d%02d%02d%02d%02d%02dZ";
        iVar1 = iVar1 + 0x76c;
      }
      else {
        pcVar4 = "%02d%02d%02d%02d%02d%02dZ";
        iVar1 = iVar1 % 100;
      }
      uVar2 = FUN_140c07aa0(*(undefined8 *)(puVar3 + 2),0x14,pcVar4,iVar1,param_2[4] + 1,param_2[3],
                            param_2[2],param_2[1],*param_2,uVar5);
      *puVar3 = uVar2;
      return puVar3;
    }
  }
LAB_140c2f2f3:
  if (puVar3 != param_1) {
    FUN_140b78950(puVar3);
  }
  return (undefined4 *)0x0;
}

