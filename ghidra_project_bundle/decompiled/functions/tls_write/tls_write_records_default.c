/**
 * Function: tls_write_records_default
 * Address:  140c42560
 * Signature: undefined tls_write_records_default(void)
 * Body size: 1262 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls_write_records_default(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  byte *pbVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_1168 [32];
  longlong *local_1148;
  longlong local_1140;
  ulonglong *local_1138;
  ulonglong local_1120;
  int local_1118;
  ulonglong local_1110;
  longlong local_1108;
  longlong local_1100;
  longlong local_10f8;
  byte local_10f0 [24];
  longlong local_10d8 [232];
  longlong local_998 [298];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1168;
  uVar14 = 0;
  local_1118 = 0;
  local_1110 = 0;
  local_1120 = 0;
  iVar6 = 0;
  local_1100 = param_2;
  local_10f8 = param_3;
  if (((*(longlong *)(param_1 + 0x1038) != 0) && (lVar8 = FUN_140b76060(), iVar6 = 0, lVar8 != 0))
     && (iVar6 = FUN_140b97c20(*(undefined8 *)(param_1 + 0x1038)), local_1118 = iVar6, iVar6 < 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\record\\methods\\tls_common.c",0x6e7,"tls_write_records_default");
    FUN_140c40330(param_1,0x50,0xc0103,0);
    goto LAB_140c428e5;
  }
  iVar7 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 0x50))(param_1,param_2,param_3,&local_1120)
  ;
  if (iVar7 == 0) goto LAB_140c428e5;
  local_1140 = param_1 + 0x60;
  local_1138 = &local_1110;
  local_1148 = local_10d8;
  iVar7 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 0x58))(param_1,param_2,param_3,local_10f0);
  if (iVar7 == 0) goto LAB_140c428e5;
  memset(local_998,0,0x948);
  if (local_1120 + param_3 != 0) {
    plVar9 = local_10d8;
    plVar11 = local_998 + 1;
    uVar13 = uVar14;
    do {
      local_1108 = 0;
      if (uVar13 < local_1120) {
        pbVar10 = local_10f0;
      }
      else {
        pbVar10 = (byte *)(local_1100 + (uVar13 - local_1120) * 0x18);
      }
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1148) + 0x60);
      if (pcVar2 == (code *)0x0) {
        bVar5 = *pbVar10;
      }
      else {
        bVar5 = (*pcVar2)(param_1,pbVar10);
      }
      *(uint *)((longlong)plVar11 + -4) = (uint)bVar5;
      *(undefined4 *)(plVar11 + -1) = *(undefined4 *)(pbVar10 + 4);
      local_1148 = &local_1108;
      iVar6 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 0x68))(param_1,plVar9,pbVar10);
      if (iVar6 == 0) goto LAB_140c428e5;
      lVar8 = *(longlong *)(param_1 + 0x1040);
      plVar11[3] = local_1108;
      lVar3 = *(longlong *)(pbVar10 + 0x10);
      *plVar11 = lVar3;
      lVar4 = *(longlong *)(pbVar10 + 8);
      plVar11[4] = lVar4;
      if (lVar8 != 0) {
        local_1148 = (longlong *)CONCAT44(local_1148._4_4_,(int)lVar3);
        iVar6 = FUN_140c3d290(lVar8,local_1108,(int)lVar3 + 0x400);
        if (-1 < iVar6) {
          plVar11[4] = plVar11[3];
          *plVar11 = (longlong)iVar6;
          iVar6 = FUN_140c221d0(plVar9,(longlong)iVar6,0);
          if (iVar6 != 0) goto LAB_140c427f1;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\record\\methods\\tls_common.c",0x723,"tls_write_records_default");
        uVar12 = 0x8d;
        goto LAB_140c428ca;
      }
      if (local_1108 != 0) {
        iVar6 = FUN_140c22560(plVar9,lVar4,lVar3);
        if (iVar6 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar12 = 0x728;
          goto LAB_140c428b8;
        }
        plVar11[4] = plVar11[3];
      }
LAB_140c427f1:
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1148) + 0x70);
      if (((pcVar2 != (code *)0x0) &&
          (iVar6 = (*pcVar2)(param_1,pbVar10,plVar9,plVar11 + -1), iVar6 == 0)) ||
         (iVar6 = local_1118,
         iVar7 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 0x78))
                           (param_1,(longlong)local_1118,plVar9,plVar11 + -1), iVar7 == 0))
      goto LAB_140c428e5;
      uVar13 = uVar13 + 1;
      plVar9 = plVar9 + 7;
      plVar11 = plVar11 + 9;
    } while (uVar13 < local_1120 + param_3);
  }
  if (local_1120 == 0) {
LAB_140c42959:
    lVar8 = local_10f8;
    local_1148 = (longlong *)0x0;
    local_1140 = (longlong)iVar6;
    iVar7 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 8))
                      (param_1,local_998 + local_1120 * 9,local_10f8,1);
    if (0 < iVar7) {
      if (lVar8 + local_1120 != 0) {
        plVar9 = local_10d8;
        plVar11 = local_998;
        plVar15 = (longlong *)(param_1 + 0x80);
        uVar13 = uVar14;
        do {
          if (uVar13 < local_1120) {
            pbVar10 = local_10f0;
          }
          else {
            pbVar10 = (byte *)(local_1100 + (uVar13 - local_1120) * 0x18);
          }
          local_1148 = plVar11;
          iVar7 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 0x80))
                            (param_1,(longlong)iVar6,pbVar10,plVar9);
          if (iVar7 == 0) break;
          plVar1 = plVar11 + 1;
          uVar13 = uVar13 + 1;
          plVar11 = plVar11 + 9;
          *plVar15 = *plVar1;
          plVar9 = plVar9 + 7;
          plVar15 = plVar15 + 6;
        } while (uVar13 < local_10f8 + local_1120);
      }
      goto LAB_140c428e5;
    }
    if (*(int *)(param_1 + 0x1008) != -1) goto LAB_140c428e5;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar12 = 0x746;
  }
  else {
    local_1140 = (longlong)iVar6;
    local_1148 = (longlong *)0x0;
    iVar7 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 8))(param_1,local_998,1);
    if (0 < iVar7) goto LAB_140c42959;
    if (*(int *)(param_1 + 0x1008) != -1) goto LAB_140c428e5;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar12 = 0x73e;
  }
LAB_140c428b8:
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\record\\methods\\tls_common.c",uVar12,"tls_write_records_default");
  uVar12 = 0xc0103;
LAB_140c428ca:
  FUN_140c40330(param_1,0x50,uVar12,0);
LAB_140c428e5:
  if (local_1110 != 0) {
    plVar9 = local_10d8;
    do {
      FUN_140c227c0(plVar9);
      uVar14 = uVar14 + 1;
      plVar9 = plVar9 + 7;
    } while (uVar14 < local_1110);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_1168);
}

