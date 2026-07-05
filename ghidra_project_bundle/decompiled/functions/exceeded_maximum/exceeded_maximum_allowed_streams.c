/**
 * Function: exceeded_maximum_allowed_streams
 * Address:  140ccc7c0
 * Signature: undefined exceeded_maximum_allowed_streams(void)
 * Body size: 558 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
exceeded_maximum_allowed_streams
          (longlong param_1,ulonglong param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  lVar2 = FUN_140c57f30(param_1 + 0x300);
  if (lVar2 != 0) {
    *param_4 = lVar2;
    return 1;
  }
  uVar7 = param_2 >> 2;
  if ((((byte)~(byte)((uint)*(undefined4 *)(param_1 + 0x5d0) >> 0x18) >> 1 ^ (byte)param_2) & 1) ==
      0) {
    lVar2 = 0x558;
    if ((param_2 & 2) == 0) {
      lVar2 = 0x550;
    }
    puVar5 = (ulonglong *)(lVar2 + param_1);
    lVar2 = 0x2a0;
    if ((param_2 & 2) == 0) {
      lVar2 = 0x240;
    }
    iVar1 = FUN_140c561d0(lVar2 + param_1,uVar7 + 1,0);
    if (iVar1 == 0) {
      pcVar6 = "internal error (stream count RXFC)";
      uVar8 = 0x1b1;
LAB_140ccc968:
      quic_error_code_0xllxsss_reason_s
                (param_1,1,param_3,pcVar6,0,"ssl\\quic\\quic_rx_depack.c",uVar8,
                 "depack_do_implicit_stream_create");
      return 0;
    }
    iVar1 = FUN_140c56320(lVar2 + param_1,0);
    if (iVar1 != 0) {
      quic_error_code_0xllxsss_reason_s
                (param_1,4,param_3,"exceeded maximum allowed streams",0,
                 "ssl\\quic\\quic_rx_depack.c",0x1b8,"depack_do_implicit_stream_create");
      return 0;
    }
    uVar3 = *puVar5;
    lVar4 = 0;
    if (uVar3 <= uVar7) {
      do {
        lVar4 = FUN_140c50680(param_1,uVar3 * 4 | (ulonglong)((uint)param_2 & 3));
        if (lVar4 == 0) {
          pcVar6 = "internal error (stream allocation)";
          uVar8 = 0x1ca;
          goto LAB_140ccc968;
        }
        *puVar5 = *puVar5 + 1;
        uVar3 = *puVar5;
      } while (uVar3 <= uVar7);
    }
  }
  else {
    lVar2 = 0x548;
    if ((param_2 & 2) == 0) {
      lVar2 = 0x540;
    }
    lVar4 = 0;
    if (*(ulonglong *)(lVar2 + param_1) <= uVar7) {
      quic_error_code_0xllxsss_reason_s
                (param_1,5,param_3,"STREAM frame for nonexistent stream",0,
                 "ssl\\quic\\quic_rx_depack.c",0x1e1,"depack_do_implicit_stream_create");
      return 0;
    }
  }
  *param_4 = lVar4;
  return 1;
}

