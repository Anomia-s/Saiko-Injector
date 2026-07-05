/**
 * Function: ecdsa_set_ctx
 * Address:  140d47320
 * Signature: undefined ecdsa_set_ctx(void)
 * Body size: 415 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ecdsa_set_ctx(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 local_160;
  undefined8 local_15f;
  undefined8 uStack_157;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined8 uStack_137;
  undefined1 local_12f;
  undefined1 local_128;
  undefined1 local_127 [255];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140d47332;
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_198;
  local_178 = 0;
  if ((((param_1 != 0) && (param_2 != (longlong *)0x0)) && (*param_2 != 0)) &&
     ((lVar2 = FUN_140b93540(param_2,"nonce-type"), lVar2 == 0 ||
      (iVar1 = FUN_140b93940(lVar2,param_1 + 0x198), iVar1 != 0)))) {
    lVar2 = FUN_140b93540(param_2);
    if (lVar2 != 0) {
      local_160 = 0;
      local_128 = 0;
      local_12f = 0;
      local_170 = &local_160;
      local_15f = 0;
      uStack_157 = 0;
      local_14f = 0;
      uStack_147 = 0;
      local_13f = 0;
      uStack_137 = 0;
      memset(local_127,0,0xff);
      local_168 = &local_128;
      lVar3 = FUN_140b93540(param_2,"properties");
      iVar1 = FUN_140b94f00(lVar2,&local_170,0x32);
      if (((iVar1 == 0) ||
          ((lVar3 != 0 && (iVar1 = FUN_140b94f00(lVar3,&local_168,0x100), iVar1 == 0)))) ||
         (iVar1 = s_exceeds_name_buffer_length(param_1,&local_160,&local_128,"ECDSA Set Ctx"),
         iVar1 == 0)) goto LAB_140d474af;
    }
    lVar2 = FUN_140b93540(param_2,"digest-size");
    if (((lVar2 != 0) && (iVar1 = FUN_140b94310(lVar2,&local_178), iVar1 != 0)) &&
       (((*(byte *)(param_1 + 0x1c) & 2) != 0 || (local_178 == *(longlong *)(param_1 + 0x170))))) {
      *(longlong *)(param_1 + 0x170) = local_178;
    }
  }
LAB_140d474af:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_198);
}

