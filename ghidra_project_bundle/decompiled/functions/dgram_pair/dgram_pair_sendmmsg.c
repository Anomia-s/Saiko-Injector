/**
 * Function: dgram_pair_sendmmsg
 * Address:  140c3e2c0
 * Signature: undefined dgram_pair_sendmmsg(void)
 * Body size: 736 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dgram_pair_sendmmsg(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                        undefined8 param_5,ulonglong *param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  lVar8 = *(longlong *)(param_1 + 0x40);
  local_b0 = param_6;
  local_b8 = lVar8;
  local_a8 = param_3;
  local_a0 = param_4;
  local_98 = param_1;
  if (param_4 == 0) {
    *param_6 = 0;
  }
  else {
    iVar5 = FUN_140b8b770(*(undefined8 *)(lVar8 + 0x50));
    if (iVar5 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\bio\\bss_dgram_pair.c",0x526,"dgram_pair_sendmmsg");
      FUN_140b91cc0(0x20,0xc0110,0);
      *param_6 = 0;
    }
    else {
      uVar13 = 0;
      if (param_4 != 0) {
        puVar11 = (undefined8 *)(param_2 + 0x18);
        do {
          puVar1 = (undefined8 *)puVar11[-1];
          puVar9 = (undefined8 *)*puVar11;
          lVar12 = puVar11[-2];
          lVar8 = puVar11[-3];
          plVar2 = *(longlong **)(param_1 + 0x40);
          uStack_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_80 = 0;
          if (*(int *)(param_1 + 0x28) == 0) {
            lVar12 = -0x78;
LAB_140c3e519:
            *local_b0 = uVar13;
            lVar8 = local_b8;
            if (uVar13 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\bio\\bss_dgram_pair.c",0x534,"dgram_pair_sendmmsg");
              FUN_140b91cc0(0x20,-(int)lVar12,0);
              lVar8 = local_b8;
            }
            goto LAB_140c3e574;
          }
          if ((plVar2 == (longlong *)0x0) || (plVar2[1] == 0)) {
            lVar12 = -0x68;
            goto LAB_140c3e519;
          }
          if ((lVar12 != 0) && (lVar8 == 0)) {
            lVar12 = -0x7d;
            goto LAB_140c3e519;
          }
          if ((puVar9 != (undefined8 *)0x0) && ((*(byte *)(plVar2 + 0xb) & 2) == 0)) {
            lVar12 = -0x6f;
            goto LAB_140c3e519;
          }
          plVar10 = plVar2;
          if (*plVar2 != 0) {
            plVar10 = *(longlong **)(*plVar2 + 0x40);
          }
          if ((puVar1 != (undefined8 *)0x0) && ((*(byte *)(plVar10 + 8) & 2) == 0)) {
            lVar12 = -0x97;
            goto LAB_140c3e519;
          }
          puVar6 = (undefined8 *)&DAT_141252290;
          if (puVar1 != (undefined8 *)0x0) {
            puVar6 = puVar1;
          }
          uStack_54 = (undefined4)puVar6[2];
          uStack_50 = (undefined4)((ulonglong)puVar6[2] >> 0x20);
          uStack_4c = *(undefined4 *)(puVar6 + 3);
          uStack_64 = (undefined4)*puVar6;
          uStack_60 = (undefined4)((ulonglong)*puVar6 >> 0x20);
          uStack_5c = (undefined4)puVar6[1];
          local_58 = (undefined4)((ulonglong)puVar6[1] >> 0x20);
          if ((puVar9 == (undefined8 *)0x0) &&
             (puVar9 = (undefined8 *)plVar2[9], puVar9 == (undefined8 *)0x0)) {
            puVar9 = (undefined8 *)&DAT_141252290;
          }
          local_80 = *puVar9;
          uStack_78 = puVar9[1];
          local_68 = *(undefined4 *)(puVar9 + 3);
          uStack_70 = puVar9[2];
          lVar3 = plVar2[4];
          lVar4 = plVar2[3];
          local_88 = lVar12;
          lVar7 = FUN_140c3f0d0(plVar2,&local_88,0x40);
          if ((lVar7 != 0x40) || (lVar8 = FUN_140c3f0d0(plVar2,lVar8,lVar12), lVar8 != lVar12)) {
            plVar2[4] = lVar3;
            lVar12 = -0x70;
            plVar2[3] = lVar4;
            goto LAB_140c3e519;
          }
          if (lVar12 < 0) goto LAB_140c3e519;
          puVar11[1] = 0;
          uVar13 = uVar13 + 1;
          puVar11 = (undefined8 *)((longlong)puVar11 + local_a8);
          param_6 = local_b0;
          lVar8 = local_b8;
          param_1 = local_98;
        } while (uVar13 < local_a0);
      }
      *param_6 = uVar13;
LAB_140c3e574:
      FUN_140b8b7a0(*(undefined8 *)(lVar8 + 0x50));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_d8);
}

