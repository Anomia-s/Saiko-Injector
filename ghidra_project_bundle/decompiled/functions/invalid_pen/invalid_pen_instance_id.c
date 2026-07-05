/**
 * Function: invalid_pen_instance_id
 * Address:  140455ec0
 * Signature: undefined invalid_pen_instance_id(void)
 * Body size: 582 bytes
 */


void invalid_pen_instance_id
               (undefined8 param_1,int param_2,undefined4 *param_3,ulonglong param_4,byte param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [32];
  byte local_e8;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  byte bStack_b4;
  byte bStack_b3;
  undefined2 uStack_b2;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  if ((byte)((char)param_4 - 6U) < 0xfb) {
LAB_140455efe:
    if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_108)) {
      return;
    }
  }
  else {
    FUN_140158000(DAT_1416f20f8);
    if ((param_2 != 0) && (0 < (longlong)DAT_1416f2100)) {
      lVar5 = 0;
      do {
        if (*(int *)(DAT_1416f2108 + lVar5) == param_2) {
          bVar4 = (byte)(param_4 & 0xffffffff);
          uVar6 = 1 << (bVar4 & 0x1f);
          uVar7 = *(uint *)(DAT_1416f2108 + 0x48 + lVar5);
          uVar1 = *(undefined8 *)(DAT_1416f2108 + 0x40 + lVar5);
          if (((param_5 ^ 1) == 0) && ((uVar7 & uVar6) == 0)) {
            uVar7 = uVar7 | uVar6;
          }
          else {
            if (((param_5 ^ 1) & (uVar7 & uVar6) != 0) != 1) goto LAB_140455f8a;
            uVar7 = uVar7 & ~uVar6;
          }
          *(uint *)(DAT_1416f2108 + 0x48 + lVar5) = uVar7;
          FUN_140158040(DAT_1416f20f8);
          cVar2 = FUN_1401081b0(param_5 ^ 0x1305);
          if (cVar2 != '\0') {
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            uStack_b2 = 0;
            uStack_b0 = 0;
            local_d8 = (ulonglong)(uint)param_5 ^ 0x1305;
            if (param_3 == (undefined4 *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *param_3;
            }
            _local_c8 = CONCAT44(param_2,uVar3);
            uStack_bc = (undefined4)uVar1;
            uStack_b8 = (undefined4)((ulonglong)uVar1 >> 0x20);
            bStack_b3 = param_5;
            uStack_d0 = param_1;
            uStack_c0 = uVar7;
            bStack_b4 = bVar4;
            FUN_140107bc0(&local_d8);
            if ((param_3 != (undefined4 *)0x0) && (DAT_1416f2110 == param_2)) {
              lVar5 = FUN_140134590();
              if ((lVar5 != 0) && (*(char *)(lVar5 + 0xbe) == '\x01')) {
                local_e8 = param_5;
                FUN_140136200(param_1,param_3,0xfffffffe,
                              CONCAT71((int7)((param_4 & 0xffffffff) >> 8),bVar4 + 1));
              }
            }
          }
          goto LAB_140455efe;
        }
        lVar5 = lVar5 + 0x58;
      } while ((longlong)DAT_1416f2100 * 0x58 - lVar5 != 0);
    }
    FUN_1400fbed0("Invalid pen instance ID");
LAB_140455f8a:
    if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_108)) {
      FUN_140158040(DAT_1416f20f8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_108);
}

