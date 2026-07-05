/**
 * Function: block_size
 * Address:  140d1a7b0
 * Signature: undefined block_size(void)
 * Body size: 158 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong block_size(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_140b93540(param_2,&DAT_1413a61f4);
  if (lVar3 != 0) {
    uVar4 = FUN_140b94bb0(lVar3,*(undefined8 *)(param_1 + 0x28));
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  lVar3 = FUN_140b93540(param_2,"block-size");
  if (lVar3 != 0) {
    uVar5 = FUN_140b8c100(param_1 + 0x10);
    uVar1 = evp_md_get_block_size(uVar5);
    iVar2 = FUN_140b94350(lVar3,uVar1);
    return (ulonglong)(iVar2 != 0);
  }
  return 1;
}

