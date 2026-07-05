/**
 * Function: surface_doesnt_have_a_colorkey
 * Address:  140111d10
 * Signature: undefined surface_doesnt_have_a_colorkey(void)
 * Body size: 105 bytes
 */


undefined8 surface_doesnt_have_a_colorkey(longlong param_1,uint *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 != 0) && (puVar1 = &DAT_14152553c, *(undefined **)(param_1 + 0x28) == &DAT_14152553c)
     ) {
    if ((*(byte *)(param_1 + 0x101) & 4) == 0) {
      uVar2 = FUN_1400fbed0("Surface doesn\'t have a colorkey");
      return uVar2;
    }
    if (param_2 != (uint *)0x0) {
      puVar1 = (undefined *)(ulonglong)*(uint *)(param_1 + 0x104);
      *param_2 = *(uint *)(param_1 + 0x104);
    }
    return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  uVar2 = FUN_1400fbed0("Parameter \'%s\' is invalid","surface");
  return uVar2;
}

