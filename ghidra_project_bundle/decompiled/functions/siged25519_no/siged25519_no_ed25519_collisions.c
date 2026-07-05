/**
 * Function: siged25519_no_ed25519_collisions
 * Address:  140c893b0
 * Signature: undefined siged25519_no_ed25519_collisions(void)
 * Body size: 229 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void siged25519_no_ed25519_collisions
               (undefined8 param_1,undefined8 param_2,char param_3,char param_4,undefined8 param_5,
               ulonglong param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  char local_50 [40];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140c893c2;
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  builtin_strncpy(local_50,"SigEd25519 no Ed25519 collisions",0x21);
  iVar1 = FUN_140b70ff0(0x45676953,0x31353532,0);
  if (((iVar1 != 0) && (param_3 != '\0')) && (param_6 < 0x100)) {
    local_58 = param_4 != '\0';
    local_57 = (undefined1)param_6;
    iVar1 = evp_digestupdate(param_1,local_50,0x20);
    if ((iVar1 != 0) && (iVar1 = evp_digestupdate(param_1,&local_58,2), iVar1 != 0)) {
      evp_digestupdate(param_1,param_5,param_6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_78);
}

