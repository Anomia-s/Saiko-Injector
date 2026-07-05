/**
 * Function: shash_value
 * Address:  140c6a630
 * Signature: undefined shash_value(void)
 * Body size: 607 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool shash_value(undefined8 param_1,int *param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (*param_2 == 0) {
    iVar4 = FUN_140c078a0(param_3,"%*sContent: ",param_4,&DAT_1413a2ad6);
    if ((0 < iVar4) &&
       (iVar4 = FUN_140c078a0(param_3,&DAT_1413a5cd4,**(undefined4 **)(param_2 + 2),
                              *(undefined8 *)(*(undefined4 **)(param_2 + 2) + 2)), 0 < iVar4)) {
      iVar4 = FUN_140b73bf0(param_3,&DAT_1413a7288);
      return 0 < iVar4;
    }
  }
  else if ((*param_2 == 1) &&
          (iVar4 = FUN_140c078a0(param_3,"%*sPointer:\n",param_4,&DAT_1413a2ad6), 0 < iVar4)) {
    puVar1 = *(undefined8 **)(param_2 + 2);
    iVar5 = param_4 + 4;
    iVar4 = FUN_140c078a0(param_3,"%*sNames:\n",iVar5,&DAT_1413a2ad6);
    if ((0 < iVar4) &&
       ((iVar4 = FUN_140bc77e0(param_3,*puVar1,iVar5), 0 < iVar4 &&
        (iVar4 = FUN_140b73bf0(param_3,&DAT_1413a7288), 0 < iVar4)))) {
      if (puVar1[1] == 0) {
        return true;
      }
      iVar4 = FUN_140c078a0(param_3,"%*sHash:\n",iVar5,&DAT_1413a2ad6);
      if (0 < iVar4) {
        plVar2 = (longlong *)puVar1[1];
        iVar5 = param_4 + 8;
        iVar4 = FUN_140c078a0(param_3,"%*sAlgorithm: ",iVar5,&DAT_1413a2ad6);
        if (((0 < iVar4) && (iVar4 = FUN_140bde8c0(param_3,*(undefined8 *)*plVar2), 0 < iVar4)) &&
           (iVar4 = FUN_140b73bf0(param_3,&DAT_1413a7288), 0 < iVar4)) {
          if (*(longlong *)(*plVar2 + 8) != 0) {
            iVar4 = FUN_140c078a0(param_3,"%*sParameter: ",iVar5,&DAT_1413a2ad6);
            if (iVar4 < 1) {
              return false;
            }
            iVar4 = could_not_decode_distinguished_namen
                              (param_3,0,*(undefined8 *)(*plVar2 + 8),param_4 + 0xc);
            if (iVar4 < 1) {
              return false;
            }
            iVar4 = FUN_140b73bf0(param_3,&DAT_1413a7288);
            if (iVar4 < 1) {
              return false;
            }
          }
          iVar4 = FUN_140c078a0(param_3,"%*sHash Value: ",iVar5,&DAT_1413a2ad6);
          if (((0 < iVar4) && (puVar3 = (undefined4 *)plVar2[1], puVar3 != (undefined4 *)0x0)) &&
             (iVar4 = FUN_140bc7a20(param_3,*(undefined8 *)(puVar3 + 2),*puVar3), 0 < iVar4)) {
            return true;
          }
        }
      }
    }
    return false;
  }
  return false;
}

