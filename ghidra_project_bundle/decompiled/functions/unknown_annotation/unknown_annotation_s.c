/**
 * Function: unknown_annotation_s
 * Address:  1405f1e50
 * Signature: undefined unknown_annotation_s(void)
 * Body size: 415 bytes
 */


undefined8 unknown_annotation_s(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *_Str1;
  
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  _Str1 = *(char **)(param_3 + 0x10);
  iVar1 = strcmp(_Str1,"name");
  if (iVar1 == 0) {
    FUN_1403c9d30(*(undefined8 *)(param_1 + 0x448),uVar2,*(undefined8 *)(param_3 + 0x18));
  }
  else {
    iVar1 = strcmp(_Str1,"brief");
    if (iVar1 == 0) {
      FUN_1403c9de0(*(undefined8 *)(param_1 + 0x448),uVar2,*(undefined8 *)(param_3 + 0x18));
    }
    else {
      iVar1 = strcmp(_Str1,"detail");
      if (iVar1 == 0) {
        FUN_1403c9e90(*(undefined8 *)(param_1 + 0x448),uVar2,*(undefined8 *)(param_3 + 0x18));
      }
      else {
        iVar1 = strcmp(_Str1,"link");
        if (iVar1 == 0) {
          FUN_1403c9f40(*(undefined8 *)(param_1 + 0x448),uVar2,*(undefined8 *)(param_3 + 0x18));
        }
        else {
          iVar1 = strcmp(_Str1,"color");
          if (iVar1 == 0) {
            FUN_1403c9ff0(*(undefined8 *)(param_1 + 0x448),uVar2,*(undefined8 *)(param_3 + 0x18));
          }
          else {
            iVar1 = strcmp(_Str1,"tree");
            if (iVar1 != 0) {
              pcVar4 = "unknown annotation \'%s\'";
LAB_1405f1f06:
              FUN_1405f0f70(param_1,param_3,pcVar4,_Str1);
              return 0xffffffff;
            }
            _Str1 = *(char **)(param_3 + 0x18);
            iVar1 = strcmp(_Str1,"Parent");
            if (iVar1 == 0) {
              *(undefined1 *)(param_2 + 0x22) = 1;
              uVar2 = *(undefined8 *)(param_2 + 0x28);
              uVar3 = 1;
            }
            else {
              iVar1 = strcmp(_Str1,"ChildOf");
              if (iVar1 != 0) {
                pcVar4 = 
                "invalid value for tree annotation: \'%s\' (expected \'Parent\' or \'ChildOf\')";
                goto LAB_1405f1f06;
              }
              *(undefined1 *)(param_2 + 0x22) = 0;
              uVar2 = *(undefined8 *)(param_2 + 0x28);
              uVar3 = 0;
            }
            FUN_1405f4560(uVar2,uVar3);
          }
        }
      }
    }
  }
  return 0;
}

