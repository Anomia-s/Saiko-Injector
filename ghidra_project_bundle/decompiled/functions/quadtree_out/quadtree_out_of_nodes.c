/**
 * Function: quadtree_out_of_nodes
 * Address:  1405d37c0
 * Signature: undefined quadtree_out_of_nodes(void)
 * Body size: 542 bytes
 */


undefined8
quadtree_out_of_nodes
          (longlong *param_1,longlong param_2,uint *param_3,uint param_4,undefined4 *param_5,
          int param_6)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  uVar5 = *param_3;
  lVar11 = *param_1;
  lVar7 = *(longlong *)
           (*(longlong *)(lVar11 + 0x18) + (ulonglong)(uVar5 >> (*(byte *)(lVar11 + 4) & 0x1f)) * 8)
  ;
  uVar6 = *(uint *)(lVar11 + 8);
  local_41 = 1;
  uVar9 = FUN_1405d7a70(lVar11,&local_41);
  if (uVar9 == 0xffffffff) {
    (*(code *)PTR_vfunction4_1414f67c8)("QuadTree: Out of nodes!");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar11 = *param_1;
  lVar8 = *(longlong *)
           (*(longlong *)(lVar11 + 0x18) + (ulonglong)(uVar9 >> (*(byte *)(lVar11 + 4) & 0x1f)) * 8)
  ;
  lVar11 = (ulonglong)(*(uint *)(lVar11 + 8) & uVar9) * 0x80;
  LOCK();
  *(uint *)(lVar8 + 0x60 + lVar11) = uVar5 | 0x80000000;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x50 + lVar11) = 0x58635fa9;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x40 + lVar11) = 0x58635fa9;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x30 + lVar11) = 0x58635fa9;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x20 + lVar11) = 0xd8635fa9;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x10 + lVar11) = 0xd8635fa9;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + lVar11) = 0xd8635fa9;
  UNLOCK();
  LOCK();
  *(uint *)(lVar8 + 100 + lVar11) = param_4;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x54 + lVar11) = param_5[6];
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x44 + lVar11) = param_5[5];
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x34 + lVar11) = param_5[4];
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x24 + lVar11) = param_5[2];
  UNLOCK();
  LOCK();
  puVar2 = (uint *)(lVar8 + 0x14 + lVar11);
  uVar3 = *puVar2;
  *puVar2 = param_5[1];
  uVar12 = (ulonglong)uVar3;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 4 + lVar11) = *param_5;
  UNLOCK();
  if ((int)param_4 < 0) {
    lVar8 = *param_1;
    lVar11 = *(longlong *)(lVar8 + 0x18);
    uVar12 = (ulonglong)((param_4 & 0x7fffffff) >> (*(byte *)(lVar8 + 4) & 0x1f));
    LOCK();
    *(uint *)(*(longlong *)(lVar11 + uVar12 * 8) + 0x70 +
             (ulonglong)(param_4 & 0x7fffffff & *(uint *)(lVar8 + 8)) * 0x80) = uVar9;
    UNLOCK();
    LOCK();
    uVar3 = *param_3;
    if (uVar5 == uVar3) {
      *param_3 = uVar9;
    }
    UNLOCK();
    if (uVar5 != uVar3) goto LAB_1405d3945;
  }
  else {
    LOCK();
    uVar3 = *param_3;
    if (uVar5 == uVar3) {
      *param_3 = uVar9;
    }
    UNLOCK();
    if (uVar5 != uVar3) {
LAB_1405d3945:
      lVar11 = *param_1;
      uVar12 = (ulonglong)uVar9;
      lVar7 = *(longlong *)
               (*(longlong *)(lVar11 + 0x18) +
               (ulonglong)(uVar9 >> (*(byte *)(lVar11 + 4) & 0x1f)) * 8);
      uVar5 = *(uint *)(lVar11 + 8);
      do {
        lVar8 = *(longlong *)(lVar11 + 0x98);
        *(int *)((ulonglong)(uVar5 & uVar9) * 0x80 + lVar7 + 0x7c) = (int)lVar8;
        LOCK();
        piVar1 = (int *)(lVar11 + 0x90);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        LOCK();
        bVar13 = lVar8 == *(longlong *)(lVar11 + 0x98);
        if (bVar13) {
          *(longlong *)(lVar11 + 0x98) = CONCAT44(iVar4,uVar9);
        }
        UNLOCK();
      } while (!bVar13);
      uVar10 = 0;
      goto LAB_1405d399b;
    }
    LOCK();
    *(uint *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(param_4 & 0x7fffff) * 8) =
         uVar9 + 0x40000000;
    UNLOCK();
  }
  LOCK();
  *(uint *)(lVar7 + 0x70 + (ulonglong)(uVar6 & uVar5) * 0x80) = uVar9;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 8) = (int)param_1[8] + param_6;
  UNLOCK();
  uVar10 = CONCAT71((uint7)(uint3)((uint)param_6 >> 8),1);
LAB_1405d399b:
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_68,DAT_1414ef3c0,lVar11,uVar12);
  }
  return uVar10;
}

