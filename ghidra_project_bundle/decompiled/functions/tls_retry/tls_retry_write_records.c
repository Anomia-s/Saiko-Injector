/**
 * Function: tls_retry_write_records
 * Address:  140c3f7d0
 * Signature: undefined tls_retry_write_records(void)
 * Body size: 588 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong tls_retry_write_records(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar7 = 0;
  lVar10 = lVar7;
  if (*(ulonglong *)(param_1 + 0x690) < *(ulonglong *)(param_1 + 0x698)) {
    do {
      while( true ) {
        plVar8 = (longlong *)((*(longlong *)(param_1 + 0x690) + 2) * 0x30 + param_1);
        SetLastError(0);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\record\\methods\\tls_common.c",0x79c,"tls_retry_write_records");
          FUN_140c40330(param_1,0x50,0x80,0);
          lVar5 = 0xfffffffe;
          goto LAB_140c3f99e;
        }
        pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1148) + 0x88);
        if ((pcVar1 != (code *)0x0) &&
           (lVar5 = (*pcVar1)(param_1,*(undefined4 *)((longlong)plVar8 + 0x2c)), (int)lVar5 != 1)) {
          return lVar5;
        }
        iVar2 = FUN_140b73860(*(undefined8 *)(param_1 + 0x40),*plVar8 + plVar8[3],(int)plVar8[4]);
        lVar11 = (longlong)iVar2;
        lVar5 = lVar7;
        if (-1 < iVar2) break;
        iVar3 = FUN_140b73020(*(undefined8 *)(param_1 + 0x40),8);
        if (iVar3 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\record\\methods\\tls_common.c",0x796,"tls_retry_write_records");
          DVar4 = GetLastError();
          FUN_140b91cc0(2,DVar4,"tls_retry_write_records failure");
          lVar5 = 0xfffffffe;
        }
LAB_140c3f954:
        if (iVar2 < 1) {
LAB_140c3f99e:
          if (*(int *)(param_1 + 0x10) == 0) {
            return lVar5;
          }
          plVar8[4] = 0;
          lVar10 = *(longlong *)(param_1 + 0x698);
          lVar7 = *(longlong *)(param_1 + 0x690) + 1;
          *(longlong *)(param_1 + 0x690) = lVar7;
          if (lVar7 != lVar10) {
            return lVar5;
          }
          if ((*(byte *)(param_1 + 0x58) & 0x10) == 0) {
            return lVar5;
          }
          if (lVar10 != 0) {
            puVar9 = (undefined8 *)((lVar10 + 1) * 0x30 + param_1);
            do {
              if (*(int *)(puVar9 + 5) == 0) {
                FUN_140b8d990(*puVar9,"ssl\\record\\methods\\tls_common.c",0x88);
              }
              else {
                *(undefined4 *)(puVar9 + 5) = 0;
              }
              *puVar9 = 0;
              puVar9 = puVar9 + -6;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          *(undefined8 *)(param_1 + 0x698) = 0;
          return lVar5;
        }
        plVar8[3] = plVar8[3] + lVar10;
        plVar8[4] = plVar8[4] - lVar10;
      }
      if ((iVar2 != 0) || (iVar3 = FUN_140b73020(*(undefined8 *)(param_1 + 0x40),8), iVar3 == 0)) {
        lVar5 = 1;
      }
      lVar10 = lVar11;
      if (lVar11 != plVar8[4]) goto LAB_140c3f954;
      plVar8[3] = plVar8[3] + lVar11;
      plVar8[4] = 0;
      uVar6 = *(longlong *)(param_1 + 0x690) + 1;
      *(ulonglong *)(param_1 + 0x690) = uVar6;
    } while (uVar6 < *(ulonglong *)(param_1 + 0x698));
    if ((uVar6 == *(ulonglong *)(param_1 + 0x698)) && ((*(byte *)(param_1 + 0x58) & 0x10) != 0)) {
      FUN_140c42c50(param_1,0);
      *(undefined8 *)(param_1 + 0x698) = 0;
    }
  }
  return 1;
}

