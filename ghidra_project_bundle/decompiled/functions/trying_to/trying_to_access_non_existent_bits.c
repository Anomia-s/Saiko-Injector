/**
 * Function: trying_to_access_non_existent_bits
 * Address:  1406b2170
 * Signature: undefined trying_to_access_non_existent_bits(void)
 * Body size: 200 bytes
 */


undefined8 trying_to_access_non_existent_bits(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = FUN_1406b7920(param_1,1);
  uVar2 = FUN_1406b7920(param_1,2);
  iVar3 = FUN_1406b7830(param_1,3);
  iVar4 = FUN_1406b78a0(param_1,4,1);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,3,"field cannot be negative");
  }
  if (0 < iVar4) {
    if ((uint)(iVar4 + iVar3) < 0x21) {
      uVar5 = ~(-2 << ((char)iVar4 - 1U & 0x1f));
      FUN_140474170(param_1,(uVar2 & uVar5) << ((byte)iVar3 & 0x1f) |
                            uVar1 & ~(uVar5 << ((byte)iVar3 & 0x1f)));
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"trying to access non-existent bits");
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s(param_1,4,"width must be positive");
}

