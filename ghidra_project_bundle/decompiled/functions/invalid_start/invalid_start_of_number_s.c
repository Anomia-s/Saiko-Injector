/**
 * Function: invalid_start_of_number_s
 * Address:  1403d2ca0
 * Signature: undefined invalid_start_of_number_s(void)
 * Body size: 160 bytes
 */


byte * invalid_start_of_number_s(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((int)(char)bVar1 - 0x3aU < 0xfffffff6 && (char)bVar1 != 0x2d) {
    FUN_140399a50(0,0,0,"invalid start of number \'%s\'",param_1);
    return (byte *)0x0;
  }
  *param_2 = bVar1;
  while( true ) {
    param_2 = param_2 + 1;
    bVar1 = param_1[1];
    if (bVar1 == 0) break;
    if (9 < (int)(char)bVar1 - 0x30U) {
      if (bVar1 < 0x45) {
        if (bVar1 == 0x2d) {
          if ((*param_1 & 0xdf) != 0x45) break;
        }
        else if (bVar1 != 0x2e) break;
      }
      else if ((bVar1 != 0x45) && (bVar1 != 0x65)) break;
    }
    *param_2 = bVar1;
    param_1 = param_1 + 1;
  }
  *param_2 = 0;
  return param_1 + 1;
}

