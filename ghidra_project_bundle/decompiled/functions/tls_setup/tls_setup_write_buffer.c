/**
 * Function: tls_setup_write_buffer
 * Address:  140c41cc0
 * Signature: undefined tls_setup_write_buffer(void)
 * Body size: 495 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_setup_write_buffer(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((param_3 == 0) || ((lVar8 = 0, 1 < param_2 && (lVar8 = 0, param_4 == 0)))) {
    lVar4 = 0xe;
    if (*(int *)(param_1 + 0x10) == 0) {
      lVar4 = 5;
    }
    lVar8 = (ulonglong)(*(int *)(param_1 + 0x14) == 0x304) + 0x57 +
            (ulonglong)*(uint *)(param_1 + 0x104c) + *(longlong *)(param_1 + 0x1030) + lVar4;
    iVar2 = FUN_140c42bf0();
    if (iVar2 != 0) {
      lVar8 = lVar8 + 0x400;
    }
    if ((*(uint *)(param_1 + 0x50) >> 0xb & 1) == 0) {
      lVar8 = lVar8 + 0x57 + lVar4;
    }
  }
  uVar7 = 0;
  plVar5 = (longlong *)(param_1 + 0x60);
  if (param_2 != 0) {
    do {
      lVar4 = param_4;
      if (uVar7 == 0) {
        lVar4 = param_3;
      }
      if (lVar4 == 0) {
        lVar4 = lVar8;
      }
      if (plVar5[2] != lVar4) {
        FUN_140b8d990(*plVar5,"ssl\\record\\methods\\tls_common.c",0xbe);
        *plVar5 = 0;
      }
      lVar3 = *plVar5;
      if ((lVar3 == 0) &&
         (lVar3 = FUN_140b8d8d0(lVar4,"ssl\\record\\methods\\tls_common.c",0xc4), lVar3 == 0)) {
        if (*(ulonglong *)(param_1 + 0x698) < uVar7) {
          *(ulonglong *)(param_1 + 0x698) = uVar7;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\record\\methods\\tls_common.c",0xcd,"tls_setup_write_buffer");
        FUN_140c40330(param_1,0xffffffff,0x8000f,0);
        return 0;
      }
      plVar5[1] = 0;
      uVar7 = uVar7 + 1;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      *plVar5 = lVar3;
      plVar5[2] = lVar4;
      plVar5 = plVar5 + 6;
    } while (uVar7 < param_2);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x698);
  if (uVar7 < uVar1) {
    puVar6 = (undefined8 *)((uVar1 + 1) * 0x30 + param_1);
    lVar8 = uVar1 - uVar7;
    do {
      if (*(int *)(puVar6 + 5) == 0) {
        FUN_140b8d990(*puVar6,"ssl\\record\\methods\\tls_common.c",0x88);
      }
      else {
        *(undefined4 *)(puVar6 + 5) = 0;
      }
      *puVar6 = 0;
      puVar6 = puVar6 + -6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(ulonglong *)(param_1 + 0x698) = param_2;
  return 1;
}

