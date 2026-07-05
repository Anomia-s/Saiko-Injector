/**
 * Function: port_send_version_negotiation
 * Address:  140c59760
 * Signature: undefined port_send_version_negotiation(void)
 * Body size: 1596 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff9e0 : 0x000140c59cd0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void port_send_version_negotiation(longlong param_1,longlong *param_2,byte *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_668 [32];
  char *local_648;
  char *local_640;
  ulonglong *local_638;
  char local_628 [8];
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  ulonglong local_608;
  byte *local_600;
  ulonglong local_5f8;
  undefined1 *local_5f0;
  undefined1 local_5e8 [8];
  longlong local_5e0;
  char *local_5d8;
  char *local_5d0;
  char local_5c8 [8];
  undefined1 local_5c0 [56];
  char local_588 [4];
  int local_584;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 local_570;
  undefined1 local_56c;
  undefined8 local_56b;
  undefined8 uStack_563;
  undefined4 local_55b;
  undefined1 local_557;
  longlong local_550;
  undefined4 local_528;
  undefined4 local_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined4 local_510;
  undefined1 local_50c;
  undefined4 local_50b;
  undefined4 uStack_507;
  undefined4 uStack_503;
  undefined4 uStack_4ff;
  undefined4 local_4fb;
  undefined1 local_4f7;
  undefined4 local_4f6;
  undefined2 local_4f2;
  char *local_4f0;
  char *local_4e8;
  undefined8 local_4e0;
  undefined8 *local_4d8;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b8;
  ulonglong uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  char local_478 [24];
  char local_460 [24];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140c59782;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_668;
  pcVar6 = (char *)0x0;
  local_610 = 0;
  local_628[0] = '\0';
  local_488 = 0;
  pcVar7 = (char *)0x0;
  local_608 = 0;
  pcVar8 = (char *)0x0;
  local_618 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  pcVar4 = pcVar6;
  pcVar9 = pcVar6;
  if ((*(byte *)((longlong)param_2 + 0x9c) & 1) == 0) {
    pbVar1 = (byte *)(param_1 + 0x80);
    local_620 = 0;
    pcVar4 = pcVar7;
    pcVar9 = pcVar8;
    if ((0x14 < *(ulonglong *)(param_1 + 0x10)) && ((*pbVar1 & 0x40) != 0)) {
      local_648 = (char *)0x0;
      iVar3 = FUN_140ccf1a0(param_2[0x11],pbVar1 + (*(ulonglong *)(param_1 + 0x10) - 0x10),0,
                            &local_620);
      pcVar7 = pcVar6;
      while (iVar3 != 0) {
        FUN_140c50380(local_620);
        pcVar7 = pcVar7 + 1;
        local_648 = (char *)0x0;
        iVar3 = FUN_140ccf1a0(param_2[0x11],pbVar1 + *(longlong *)(param_1 + 0x10) + -0x10,pcVar7,
                              &local_620);
      }
      if (pcVar7 != (char *)0x0) goto LAB_140c59d71;
    }
    pcVar7 = (char *)0x0;
    if ((param_3 != (byte *)0x0) &&
       (iVar3 = FUN_140cce3b0(param_2[0x10],param_3,0,&local_610), iVar3 != 0)) {
      FUN_140c503d0(local_610,param_1);
      goto LAB_140c59d8d;
    }
    if ((((*(byte *)((longlong)param_2 + 0x9c) & 0x10) != 0) &&
        (uVar2 = *(ulonglong *)(param_1 + 0x10), 0x4af < uVar2)) && (uVar2 < 0x8000000000000000)) {
      local_638 = &local_608;
      local_648 = local_588;
      local_640 = pcVar7;
      local_600 = pbVar1;
      local_5f8 = uVar2;
      iVar3 = FUN_140cc6070(&local_600,0xffffffffffffffff,1,0);
      if ((iVar3 != 0) || ((local_608 & 2) != 0)) {
        if ((local_584 == 0) || (local_584 != 1)) {
          if (0x4af < *(ulonglong *)(param_1 + 0x10)) {
            local_620 = CONCAT44(local_620._4_4_,1);
            local_4f6 = 0;
            local_4f2 = 0;
            local_510 = local_55b;
            local_50c = local_557;
            local_4fb = local_570;
            local_4f7 = local_56c;
            local_4d8 = &local_620;
            local_5f0 = local_448;
            local_520 = local_56b;
            uStack_518 = uStack_563;
            local_5e0 = param_1 + 0x38;
            local_528 = 6;
            local_50b = local_580;
            uStack_507 = uStack_57c;
            uStack_503 = uStack_578;
            uStack_4ff = uStack_574;
            local_524 = 0;
            local_4e0 = 4;
            local_5d8 = pcVar7;
            local_5d0 = pcVar7;
            local_4f0 = pcVar7;
            local_4e8 = pcVar7;
            iVar3 = FUN_140c21d10(local_5c0,local_448,0x400,0);
            if (iVar3 != 0) {
              iVar3 = FUN_140cc65d0(local_5c0,(undefined1)local_580,&local_528,0);
              if (iVar3 != 0) {
                iVar3 = FUN_140c22430(local_5c0,(undefined4)local_620,4);
                if (((iVar3 != 0) && (iVar3 = FUN_140c22710(local_5c0,local_5e8), iVar3 != 0)) &&
                   (iVar3 = FUN_140c21e60(local_5c0), iVar3 != 0)) {
                  local_640 = local_5c8;
                  local_648 = (char *)0x0;
                  iVar3 = bio_sendmmsg(param_2[7],&local_5f0,0x28,1);
                  if (iVar3 == 0) {
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("ssl\\quic\\quic_port.c",0x506,"port_send_version_negotiation");
                    FUN_140b91cc0(0x14,0x183,"port version negotiation send failed");
                  }
                }
              }
            }
          }
        }
        else if (local_588[0] == '\x01') {
          local_478[0] = '\0';
          local_4c8 = *(undefined8 *)*param_2;
          local_4b8 = param_2[8];
          uStack_4b0 = (ulonglong)*param_3;
          local_4a8 = 0x20;
          pcVar4 = (char *)FUN_140cd2a50(&local_4c8);
          if (((pcVar4 != (char *)0x0) &&
              (local_648 = pcVar4, local_640 = pcVar7,
              iVar3 = client_in(*(undefined8 *)*param_2,((undefined8 *)*param_2)[1],&local_580,1),
              iVar3 != 0)) && (iVar3 = FUN_140cd2f70(pcVar4,param_1,param_3), iVar3 != 0)) {
            if ((*(byte *)((longlong)param_2 + 0x9c) & 4) == 0) {
              pcVar8 = pcVar7;
              pcVar6 = pcVar4;
              if (local_550 != 0) {
LAB_140c599e2:
                local_640 = local_628;
                local_648 = local_460;
                iVar3 = FUN_140c5aa50(local_588,param_2,param_1 + 0x38,local_478);
                pcVar8 = pcVar7;
                if (iVar3 == 0) {
                  if ((*(byte *)((longlong)param_2 + 0x9c) & 4) != 0) {
                    port_send_retry(param_2,param_1 + 0x38,local_588);
                    pcVar4 = pcVar7;
                    pcVar9 = pcVar6;
                    goto LAB_140c59d71;
                  }
                  pcVar8 = (char *)0x0;
                  pcVar6 = pcVar7;
                }
              }
              puVar5 = (undefined8 *)param_2[0xf];
              pcVar4 = pcVar8;
              pcVar9 = pcVar6;
              if (puVar5 == (undefined8 *)0x0) {
                local_648 = (char *)((ulonglong)local_648 & 0xffffffff00000000);
                puVar5 = (undefined8 *)FUN_140c59e50(param_2,0,pcVar8,1);
                if (puVar5 == (undefined8 *)0x0) goto LAB_140c59d71;
              }
              else {
                param_2[0xf] = 0;
                FUN_140c4edd0(puVar5,pcVar8);
                FUN_140cd2b90(puVar5[0x7b],puVar5[0x7c],puVar5[0x7e]);
                FUN_140cd2ba0(puVar5[0x7b],puVar5[0x7d]);
              }
              if (pcVar8 == (char *)0x0) {
                local_640 = (char *)0x0;
                local_648 = (char *)puVar5[0x7b];
                iVar3 = client_in(**(undefined8 **)*puVar5,(*(undefined8 **)*puVar5)[1],&local_580,1
                                 );
                if (iVar3 == 0) goto LAB_140c59d71;
              }
              if (local_478[0] == '\0') {
                iVar3 = FUN_140c4fcf0(puVar5,param_1 + 0x38,local_460,&local_580);
              }
              else {
                FUN_140cd4970(puVar5[0x11]);
                local_648 = local_478;
                iVar3 = FUN_140c50910(puVar5,param_1 + 0x38,local_460,&local_580);
              }
              if (iVar3 == 0) {
                FUN_140c4ee40(puVar5);
              }
              else {
                if (param_2[0xd] != 0) {
                  *(undefined8 **)(param_2[0xd] + 0x18) = puVar5;
                }
                puVar5[4] = param_2[0xd];
                puVar5[3] = 0;
                param_2[0xd] = (longlong)puVar5;
                if (param_2[0xc] == 0) {
                  param_2[0xc] = (longlong)puVar5;
                }
                param_2[0xe] = param_2[0xe] + 1;
                if (local_628[0] == '\x01') {
                  FUN_140c5ad50(puVar5,param_1 + 0x38);
                }
                if (pcVar8 == (char *)0x0) {
                  iVar3 = FUN_140cd2ca0(pcVar6,&local_618);
                  while (iVar3 == 1) {
                    FUN_140c503f0(puVar5,local_618);
                    iVar3 = FUN_140cd2ca0(pcVar6,&local_618);
                  }
                  FUN_140cd2c40(pcVar6,puVar5[0x7b]);
                }
                else {
                  pcVar4 = (char *)0x0;
                }
              }
            }
            else {
              pcVar7 = pcVar4;
              if (local_550 != 0) goto LAB_140c599e2;
              port_send_retry(param_2,param_1 + 0x38,local_588);
            }
          }
        }
      }
    }
  }
LAB_140c59d71:
  FUN_140cd2b00(pcVar4);
  FUN_140cd2b00(pcVar9);
  FUN_140c4e400(param_2[8],param_1);
LAB_140c59d8d:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_668);
}

