/**
 * Function: tls_process_new_session_ticket
 * Address:  140c37de0
 * Signature: undefined tls_process_new_session_ticket(void)
 * Body size: 1724 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_new_session_ticket(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  longlong lVar7;
  ushort uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  longlong *plVar17;
  uint uVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  uint local_res8 [2];
  undefined8 local_res10;
  ulonglong local_res18;
  byte *local_res20;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar22;
  byte *local_68;
  ulonglong uStack_60;
  undefined8 *local_58;
  undefined8 uStack_48;
  
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uStack_48 = 0x140c37df7;
  uVar15 = param_2[1];
  local_res10 = 0;
  uVar16 = 0;
  local_res20 = (byte *)0x0;
  lVar20 = 0;
  local_58 = *(undefined8 **)(param_1 + 8);
  local_res18 = 0;
  if (uVar15 < 4) {
LAB_140c37f91:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar13 = 0xab6;
LAB_140c37f9b:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",uVar13,"tls_process_new_session_ticket");
    uVar13 = 0x32;
    uVar19 = 0x9f;
    lVar12 = 0;
  }
  else {
    puVar5 = (undefined1 *)*param_2;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    param_2[1] = uVar15 - 4;
    *param_2 = (longlong)(puVar5 + 4);
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar10 = **(int **)(param_1 + 0x18), 0x303 < iVar10)) && (iVar10 != 0x10000)) {
      if (3 < uVar15 - 4) {
        uVar16 = CONCAT31(CONCAT21(CONCAT11(puVar5[4],puVar5[5]),puVar5[6]),puVar5[7]);
        *param_2 = (longlong)(puVar5 + 8);
        param_2[1] = uVar15 - 8;
        local_68 = (byte *)*param_2;
        uStack_60 = param_2[1];
        if (uVar15 - 8 != 0) {
          local_res18 = (ulonglong)*local_68;
          local_res20 = local_68 + 1;
          if (local_res18 <= uVar15 - 9) {
            local_68 = local_res20 + local_res18;
            uStack_60 = (uVar15 - 9) - local_res18;
            *param_2 = (longlong)local_68;
            param_2[1] = uStack_60;
            goto LAB_140c37f29;
          }
        }
      }
      goto LAB_140c37f91;
    }
LAB_140c37f29:
    if ((ulonglong)param_2[1] < 2) goto LAB_140c37f91;
    puVar5 = (undefined1 *)*param_2;
    uVar8 = CONCAT11(*puVar5,puVar5[1]);
    uVar21 = (uint)uVar8;
    *param_2 = (longlong)(puVar5 + 2);
    uVar15 = param_2[1] - 2;
    param_2[1] = uVar15;
    piVar6 = *(int **)(param_1 + 0x18);
    uVar18 = *(uint *)(*(longlong *)(piVar6 + 0x36) + 0x50) & 8;
    lVar12 = lVar20;
    if (((uVar18 == 0) && (0x303 < *piVar6)) && (*piVar6 != 0x10000)) {
      if ((uVar8 != 0) && (uVar21 <= uVar15)) {
LAB_140c3803f:
        plVar17 = (longlong *)(param_1 + 0x8f8);
        local_68 = (byte *)FUN_140ba55c0(*plVar17,0);
        if (local_68 != (byte *)0x0) {
          if (((*(byte *)(*(longlong *)(param_1 + 0xb80) + 0x50) & 1) != 0) &&
             ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0 ||
               (iVar10 = **(int **)(param_1 + 0x18), iVar10 < 0x304)) || (iVar10 == 0x10000)))) {
            FUN_140ba48d0(*(longlong *)(param_1 + 0xb80),*plVar17);
          }
          FUN_140ba4520(*plVar17);
          *plVar17 = (longlong)local_68;
          goto LAB_140c380d0;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0xad2,"tls_process_new_session_ticket");
        uVar13 = 0x50;
        uVar19 = 0x80014;
        goto LAB_140c37fb9;
      }
      goto LAB_140c37f91;
    }
    if (uVar15 != uVar21) goto LAB_140c37f91;
    if (uVar8 == 0) {
      return 3;
    }
    if ((((uVar18 == 0) && (0x303 < *piVar6)) && (*piVar6 != 0x10000)) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x250) != 0)) goto LAB_140c3803f;
LAB_140c380d0:
    plVar17 = (longlong *)(param_1 + 0x8f8);
    lVar7 = *plVar17;
    uVar13 = FUN_140c21250();
    *(undefined8 *)(lVar7 + 0x2e0) = uVar13;
    FUN_140ba55f0(*plVar17);
    FUN_140b8d990(*(undefined8 *)(*plVar17 + 800),"ssl\\statem\\statem_clnt.c",0xae7);
    *(undefined8 *)(*plVar17 + 800) = 0;
    *(undefined8 *)(*plVar17 + 0x328) = 0;
    lVar7 = *plVar17;
    uVar13 = FUN_140b8d8d0(uVar21,"ssl\\statem\\statem_clnt.c",0xaeb);
    *(undefined8 *)(lVar7 + 800) = uVar13;
    if (*(longlong *)(*plVar17 + 800) != 0) {
      iVar10 = FUN_140bbc350(param_2,*(longlong *)(*plVar17 + 800),uVar21);
      if (iVar10 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar13 = 0xaf1;
      }
      else {
        *(uint *)(*plVar17 + 0x330) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
        *(undefined4 *)(*plVar17 + 0x334) = uVar16;
        *(ulonglong *)(*plVar17 + 0x328) = (ulonglong)uVar21;
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
            (iVar10 = **(int **)(param_1 + 0x18), iVar10 < 0x304)) || (iVar10 == 0x10000)) {
LAB_140c382ab:
          lVar12 = FUN_140b71980(*local_58,"SHA2-256",local_58[0x8c]);
          if (lVar12 == 0) {
            FUN_140ba3200(param_1,0x50);
            goto LAB_140c37fc4;
          }
          iVar10 = evp_digestupdate(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 800),uVar21,
                                    *(longlong *)(param_1 + 0x8f8) + 600,local_res8,lVar12,0);
          if (iVar10 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_clnt.c",0xb25,"tls_process_new_session_ticket");
            uVar13 = 0x50;
            uVar19 = 0x80006;
          }
          else {
            FUN_140b719e0(lVar12);
            lVar12 = 0;
            *(ulonglong *)(*(longlong *)(param_1 + 0x8f8) + 0x250) = (ulonglong)local_res8[0];
            *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b0) = 0;
            if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
                (iVar10 = **(int **)(param_1 + 0x18), iVar10 < 0x304)) || (iVar10 == 0x10000)) {
              return 3;
            }
            uVar13 = FUN_140ba7640(param_1);
            iVar10 = FUN_140b97b40(uVar13);
            if (0 < iVar10) {
              iVar11 = FUN_140bbb390(param_1,uVar13,param_1 + 0x634,"resumption",10,local_res20,
                                     local_res18,*(longlong *)(param_1 + 0x8f8) + 0x50,
                                     (longlong)iVar10,1);
              if (iVar11 != 0) {
                *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 8) = (longlong)iVar10;
                FUN_140b8d990(local_res10,"ssl\\statem\\statem_clnt.c",0xb47);
                FUN_140b6e240(param_1,1);
                return 1;
              }
              goto LAB_140c37fc4;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_clnt.c",0xb36,"tls_process_new_session_ticket");
            uVar13 = 0x50;
            uVar19 = 0xc0103;
          }
          goto LAB_140c37fb9;
        }
        pbVar9 = (byte *)*param_2;
        uVar15 = param_2[1];
        if (1 < (ulonglong)param_2[1]) {
          uVar14 = param_2[1] - 2;
          local_68 = pbVar9 + 2;
          uStack_60 = (ulonglong)CONCAT11(*pbVar9,pbVar9[1]);
          if (uStack_60 <= uVar14) {
            uVar15 = uVar14 - uStack_60;
            pbVar9 = local_68 + uStack_60;
            if (uVar15 == 0) {
              *param_2 = (longlong)(local_68 + uStack_60);
              param_2[1] = 0;
              pbVar9 = local_68;
              uVar15 = uStack_60;
              if (param_2[1] == 0) {
                iVar10 = FUN_140c31dc0(param_1,&local_68,0x2000,&local_res10,0,CONCAT44(uVar22,1));
                lVar12 = 0;
                if ((iVar10 == 0) ||
                   (iVar10 = FUN_140c32380(param_1,0x2000,local_res10,0,0,1), lVar12 = lVar20,
                   iVar10 == 0)) goto LAB_140c37fc4;
                goto LAB_140c382ab;
              }
            }
          }
        }
        uStack_60 = uVar15;
        local_68 = pbVar9;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar13 = 0xafe;
      }
      goto LAB_140c37f9b;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0xaed,"tls_process_new_session_ticket");
    uVar13 = 0x50;
    uVar19 = 0x8000f;
  }
LAB_140c37fb9:
  FUN_140ba3290(param_1,uVar13,uVar19,0);
LAB_140c37fc4:
  FUN_140b719e0(lVar12);
  FUN_140b8d990(local_res10,"ssl\\statem\\statem_clnt.c",0xb4f);
  return 0;
}

