/**
 * Function: cryptox509pcy_cachec
 * Address:  140beaf90
 * Signature: undefined cryptox509pcy_cachec(void)
 * Body size: 452 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cryptox509pcy_cachec(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int local_res8 [2];
  longlong lVar7;
  
  lVar7 = 0;
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    return 1;
  }
  puVar2 = (undefined8 *)FUN_140b8d8d0(0x20,"crypto\\x509\\pcy_cache.c",0x5e);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 3) = 0xffffffff;
  *(undefined8 **)(param_1 + 0xf8) = puVar2;
  plVar3 = (longlong *)FUN_140b778e0(param_1,0x191,local_res8,0);
  lVar4 = lVar6;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = lVar7;
    if (local_res8[0] != -1) goto LAB_140beb019;
    goto LAB_140beb089;
  }
  if (*plVar3 == 0) {
    if (plVar3[1] != 0) {
LAB_140beb06f:
      if (plVar3[1] != 0) {
        if (*(int *)(plVar3[1] + 4) == 0x102) goto LAB_140beb019;
        uVar1 = FUN_140bd8680();
        *(undefined4 *)(puVar2 + 3) = uVar1;
      }
LAB_140beb089:
      lVar4 = FUN_140b778e0(param_1,0x59,local_res8,0);
      if (lVar4 == 0) {
        lVar4 = lVar7;
        if (local_res8[0] == -1) {
          return 1;
        }
      }
      else {
        uVar5 = policy_cache_create(param_1,lVar4,local_res8[0]);
        local_res8[0] = (int)uVar5;
        if (local_res8[0] < 1) {
          return uVar5;
        }
        lVar4 = FUN_140b778e0(param_1,0x2eb,local_res8,0);
        if (lVar4 == 0) {
          lVar4 = lVar7;
          if (local_res8[0] == -1) {
LAB_140beb10a:
            lVar4 = FUN_140b778e0(param_1,0x2ec,local_res8,0);
            if (lVar4 == 0) {
              if (local_res8[0] == -1) goto LAB_140beb023;
            }
            else if (*(int *)(lVar4 + 4) != 0x102) {
              uVar1 = FUN_140bd8680(lVar4);
              *(undefined4 *)(puVar2 + 2) = uVar1;
              goto LAB_140beb023;
            }
          }
        }
        else {
          local_res8[0] = FUN_140c65040(param_1,lVar4);
          lVar4 = lVar6;
          if (0 < local_res8[0]) goto LAB_140beb10a;
        }
      }
    }
  }
  else if (*(int *)(*plVar3 + 4) != 0x102) {
    uVar1 = FUN_140bd8680();
    *(undefined4 *)((longlong)puVar2 + 0x14) = uVar1;
    goto LAB_140beb06f;
  }
LAB_140beb019:
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x800;
LAB_140beb023:
  FUN_140c64e80(plVar3);
  FUN_140b90e80(lVar4);
  return 1;
}

