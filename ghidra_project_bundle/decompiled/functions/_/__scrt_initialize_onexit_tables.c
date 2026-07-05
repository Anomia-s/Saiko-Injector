/**
 * Function: __scrt_initialize_onexit_tables
 * Address:  140b68924
 * Signature: undefined __scrt_initialize_onexit_tables(void)
 * Body size: 139 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_14151ed21 == '\0') {
    if (1 < param_1) {
      FUN_140b6931c(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = __scrt_is_ucrt_dll_in_use();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_14151ed28 = 0xffffffffffffffff;
      uRam000000014151ed30 = 0xffffffffffffffff;
      _DAT_14151ed38 = 0xffffffffffffffff;
      _DAT_14151ed40 = 0xffffffffffffffff;
      uRam000000014151ed48 = 0xffffffffffffffff;
      _DAT_14151ed50 = 0xffffffffffffffff;
    }
    else {
      iVar2 = _initialize_onexit_table(&DAT_14151ed28);
      if ((iVar2 != 0) || (iVar2 = _initialize_onexit_table(&DAT_14151ed40), iVar2 != 0)) {
        return 0;
      }
    }
    DAT_14151ed21 = '\x01';
  }
  return 1;
}

