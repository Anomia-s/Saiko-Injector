/**
 * Function: camera_permission_has_not_been_granted
 * Address:  1400ff980
 * Signature: undefined camera_permission_has_not_been_granted(void)
 * Body size: 233 bytes
 */


undefined8 camera_permission_has_not_been_granted(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_1 == (undefined8 *)0x0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","camera");
    uVar5 = 0;
  }
  else {
    FUN_140106160((longlong)param_1 + 0x14,1);
    FUN_1401552a0(*param_1);
    if (*(int *)((longlong)param_1 + 0x1cc) < 1) {
      FUN_1401552c0(*param_1);
      FUN_1400fda30(param_1);
      FUN_1400fbed0("Camera permission has not been granted");
      uVar5 = 0;
    }
    else {
      puVar1 = param_1 + 0x2c;
      puVar2 = param_1 + 0x2c;
      do {
        puVar6 = puVar2;
        puVar3 = puVar1;
        puVar1 = puVar6;
        puVar2 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      if (puVar6 == puVar3) {
        uVar5 = 0;
      }
      else {
        if (param_2 == (undefined8 *)0x0) {
          uVar4 = 0;
        }
        else {
          *param_2 = puVar6[1];
          uVar4 = puVar6[2];
        }
        uVar5 = *puVar6;
        puVar3[2] = uVar4;
        puVar6[2] = param_1[0x34];
        param_1[0x34] = puVar6;
      }
      FUN_1401552c0(*param_1);
      FUN_1400fda30(param_1);
    }
  }
  return uVar5;
}

