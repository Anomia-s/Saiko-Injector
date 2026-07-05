/**
 * Function: no_ui_tree_available
 * Address:  14047ab50
 * Signature: undefined no_ui_tree_available(void)
 * Body size: 190 bytes
 */


undefined8 no_ui_tree_available(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  
  uVar1 = FUN_140473950(param_1,0xffffd8ed,0);
  FUN_1404745f0(param_1,0xffffd8f0,"__luduvo_uitree");
  lVar4 = FUN_140473e90(param_1,0xffffffff);
  FUN_1404731f0(param_1,0xfffffffe);
  if (lVar4 != 0) {
    iVar2 = FUN_140473550(param_1,2);
    uVar3 = FUN_14047ac10(param_1,lVar4,uVar1,(iVar2 == 6) * '\x02');
    puVar5 = (uint *)FUN_140475550(param_1,0x10,3);
    *puVar5 = (uint)*(ushort *)(*(longlong *)(lVar4 + 0x18) + ((ulonglong)uVar3 & 0xffff) * 2) <<
              0x10 | (uint)((ulonglong)uVar3 & 0xffff);
    *(longlong *)(puVar5 + 2) = lVar4;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"No UI tree available");
}

