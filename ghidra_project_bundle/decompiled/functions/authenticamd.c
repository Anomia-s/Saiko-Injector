/**
 * Function: authenticamd
 * Address:  14015c380
 * Signature: undefined authenticamd(void)
 * Body size: 542 bytes
 */


/* WARNING: Removing unreachable block (ram,0x00014015c553) */
/* WARNING: Removing unreachable block (ram,0x00014015c567) */
/* WARNING: Removing unreachable block (ram,0x00014015c443) */
/* WARNING: Removing unreachable block (ram,0x00014015c401) */
/* WARNING: Removing unreachable block (ram,0x00014015c3e4) */

uint authenticamd(void)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar9;
  uint in_XCR0;
  undefined1 auStack_38 [36];
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  if (DAT_141525c20 == '\0') {
    if (DAT_141525c34 == '\0') {
      DAT_141525c34 = '\x01';
      uVar9 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
              0x40 | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
              (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
              (uint)(in_AC & 1) * 0x40000;
      uVar7 = uVar9 ^ 0x200000;
      local_14 = (uint)(((uint)((uVar7 & 0x4000) != 0) * 0x4000 |
                         (uint)((uVar7 & 0x200) != 0) * 0x200 | (uint)((uVar7 & 0x100) != 0) * 0x100
                         | (uint)((uVar7 & 0x40) != 0) * 0x40 | (uint)((uVar7 & 0x10) != 0) * 0x10 |
                         (uint)((uVar7 & 4) != 0) * 4 | (uint)((uVar7 & 0x200000) != 0) * 0x200000 |
                        (uint)((uVar7 & 0x40000) != 0) * 0x40000) != uVar9);
      if (local_14 == 0) goto LAB_14015c434;
      piVar1 = (int *)cpuid_basic_info(0);
      DAT_141525c30 = *piVar1;
      if (0 < DAT_141525c30) {
        lVar2 = cpuid_Version_info(1);
        DAT_141525c3c = *(undefined4 *)(lVar2 + 8);
        DAT_141525c38 = *(uint *)(lVar2 + 0xc);
        if ((DAT_141525c38 & 0x8000000) != 0) {
          uVar6 = xinuse(0);
          uVar7 = ~(in_XCR0 & (uint)uVar6);
          DAT_141525c40 = (uVar7 & 6) == 0;
          DAT_141525c41 = (uVar7 & 0xe6) == 0;
        }
        goto LAB_14015c434;
      }
    }
    else {
LAB_14015c434:
      if (0 < DAT_141525c30) {
        lVar2 = cpuid_basic_info(0);
        uVar3 = *(undefined4 *)(lVar2 + 4);
        uVar4 = *(undefined4 *)(lVar2 + 8);
        uVar5 = *(undefined4 *)(lVar2 + 0xc);
        DAT_141525c20 = (char)uVar3;
        DAT_141525c21 = (undefined1)((uint)uVar3 >> 8);
        DAT_141525c22 = (undefined1)((uint)uVar3 >> 0x10);
        DAT_141525c23 = (undefined1)((uint)uVar3 >> 0x18);
        DAT_141525c24 = (undefined1)uVar4;
        DAT_141525c25 = (undefined1)((uint)uVar4 >> 8);
        DAT_141525c26 = (undefined1)((uint)uVar4 >> 0x10);
        DAT_141525c27 = (undefined1)((uint)uVar4 >> 0x18);
        DAT_141525c28 = (undefined1)uVar5;
        DAT_141525c29 = (undefined1)((uint)uVar5 >> 8);
        DAT_141525c2a = (undefined1)((uint)uVar5 >> 0x10);
        DAT_141525c2b = (undefined1)((uint)uVar5 >> 0x18);
      }
    }
    if (DAT_141525c20 == '\0') {
      FUN_1400fcb10(&DAT_141525c20,"Unknown",0xd);
    }
  }
  iVar8 = FUN_1400fd200(&DAT_141525c20,"GenuineIntel");
  if (((iVar8 == 0) || (iVar8 = FUN_1400fd200(&DAT_141525c20,"CentaurHauls"), iVar8 == 0)) ||
     (iVar8 = FUN_1400fd200(&DAT_141525c20,"  Shanghai  "), iVar8 == 0)) {
    lVar2 = cpuid_Version_info(1);
    uVar7 = *(uint *)(lVar2 + 4) >> 5 & 0x7f8;
  }
  else {
    iVar8 = FUN_1400fd200(&DAT_141525c20,"AuthenticAMD");
    if (iVar8 != 0) {
      iVar8 = FUN_1400fd200(&DAT_141525c20,"HygonGenuine");
      uVar7 = 0x80;
      if (iVar8 != 0) goto LAB_14015c577;
    }
    lVar2 = cpuid(0x80000005);
    uVar7 = *(uint *)(lVar2 + 0xc) & 0xff;
  }
LAB_14015c577:
  if (DAT_1414ef3c0 != (local_10 ^ (ulonglong)auStack_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_10 ^ (ulonglong)auStack_38);
  }
  return uVar7;
}

