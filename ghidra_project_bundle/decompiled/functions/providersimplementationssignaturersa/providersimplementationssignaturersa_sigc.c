/**
 * Function: providersimplementationssignaturersa_sigc
 * Address:  140d449e0
 * Signature: undefined providersimplementationssignaturersa_sigc(void)
 * Body size: 324 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
providersimplementationssignaturersa_sigc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_88 [48];
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  local_10 = 0x140d449ec;
  plVar1 = (longlong *)FUN_140b93860(local_88,"signature",param_2,param_3);
  local_58 = *plVar1;
  lStack_50 = plVar1[1];
  local_48 = (undefined4)plVar1[2];
  uStack_44 = *(undefined4 *)((longlong)plVar1 + 0x14);
  uStack_40 = (undefined4)plVar1[3];
  uStack_3c = *(undefined4 *)((longlong)plVar1 + 0x1c);
  local_38 = plVar1[4];
  puVar2 = (undefined8 *)FUN_140b93900(local_88);
  local_30 = *puVar2;
  uStack_28 = puVar2[1];
  local_20 = *(undefined4 *)(puVar2 + 2);
  uStack_1c = *(undefined4 *)((longlong)puVar2 + 0x14);
  uStack_18 = *(undefined4 *)(puVar2 + 3);
  uStack_14 = *(undefined4 *)((longlong)puVar2 + 0x1c);
  local_10 = puVar2[4];
  if (param_1 == 0) {
    return 0;
  }
  if (local_58 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x18) == 0x8000) {
    lVar3 = FUN_140b93540(&local_58,"signature");
    if (lVar3 != 0) {
      FUN_140b8d990(*(undefined8 *)(param_1 + 0xb8),
                    "providers\\implementations\\signature\\rsa_sig.c",1999);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      uVar4 = FUN_140b95120(lVar3,param_1 + 0xb8,0);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
  }
  return 1;
}

