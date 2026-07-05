/**
 * Function: providersimplementationssignatureecdsa_sigc
 * Address:  140d4bbd0
 * Signature: undefined providersimplementationssignatureecdsa_sigc(void)
 * Body size: 365 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
providersimplementationssignatureecdsa_sigc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
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
  
  local_10 = 0x140d4bbdc;
  plVar2 = (longlong *)FUN_140b93860(local_88,"signature",param_2,param_3);
  local_58 = *plVar2;
  lStack_50 = plVar2[1];
  local_48 = (undefined4)plVar2[2];
  uStack_44 = *(undefined4 *)((longlong)plVar2 + 0x14);
  uStack_40 = (undefined4)plVar2[3];
  uStack_3c = *(undefined4 *)((longlong)plVar2 + 0x1c);
  local_38 = plVar2[4];
  puVar3 = (undefined8 *)FUN_140b93900(local_88);
  local_30 = *puVar3;
  uStack_28 = puVar3[1];
  local_20 = *(undefined4 *)(puVar3 + 2);
  uStack_1c = *(undefined4 *)((longlong)puVar3 + 0x14);
  uStack_18 = *(undefined4 *)(puVar3 + 3);
  uStack_14 = *(undefined4 *)((longlong)puVar3 + 0x1c);
  local_10 = puVar3[4];
  if (param_1 == 0) {
    return 0;
  }
  if (local_58 != 0) {
    lVar4 = FUN_140b93540(&local_58,"nonce-type");
    if ((lVar4 != 0) && (iVar1 = FUN_140b93940(lVar4,param_1 + 0x198), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x18) == 0x8000) &&
       (lVar4 = FUN_140b93540(&local_58,"signature"), lVar4 != 0)) {
      FUN_140b8d990(*(undefined8 *)(param_1 + 0x178),
                    "providers\\implementations\\signature\\ecdsa_sig.c",0x3e1);
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      uVar5 = FUN_140b95120(lVar4,param_1 + 0x178,0);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
    }
    return 1;
  }
  return 1;
}

