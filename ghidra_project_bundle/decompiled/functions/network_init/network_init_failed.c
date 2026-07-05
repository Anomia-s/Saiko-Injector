/**
 * Function: network_init_failed
 * Address:  14017fda0
 * Signature: undefined network_init_failed(void)
 * Body size: 67 bytes
 */


bool network_init_failed(longlong param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_140218200();
  if (iVar1 == 0) {
    *(char *)(param_1 + 0x43609) = '\0';
    uVar2 = 1;
  }
  else {
    builtin_strncpy((char *)(param_1 + 0x43609),"Network ",8);
    builtin_strncpy((char *)(param_1 + 0x43611),"init fai",8);
    *(undefined4 *)(param_1 + 0x43619) = 0x64656c;
    uVar2 = 5;
  }
  *(undefined1 *)(param_1 + 0x43608) = uVar2;
  return iVar1 == 0;
}

