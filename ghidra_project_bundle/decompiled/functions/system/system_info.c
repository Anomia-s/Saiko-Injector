/**
 * Function: system_info
 * Address:  140cc8950
 * Signature: undefined system_info(void)
 * Body size: 777 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void system_info(longlong param_1)

{
  longlong lVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140cc895c;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0xf0) == 0) {
    lVar1 = param_1 + 0x98;
    FUN_140d03ec0(lVar1);
    FUN_140d03f60(lVar1,"qlog_version");
    FUN_140d040d0(lVar1,&DAT_1413a6eb0);
    FUN_140d03f60(lVar1,"qlog_format");
    FUN_140d040d0(lVar1,"JSON-SEQ");
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_140d03f60(lVar1,"title");
      FUN_140d040d0(lVar1,*(undefined8 *)(param_1 + 0x18));
      FUN_140b8d990(*(undefined8 *)(param_1 + 0x18),"ssl\\quic\\qlog.c",0x112);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_140d03f60(lVar1,"description");
      FUN_140d040d0(lVar1,*(undefined8 *)(param_1 + 0x20));
      FUN_140b8d990(*(undefined8 *)(param_1 + 0x20),"ssl\\quic\\qlog.c",0x112);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    FUN_140d03f60(lVar1,"trace");
    FUN_140d03ec0(lVar1);
    FUN_140d03f60(lVar1,"common_fields");
    FUN_140d03ec0(lVar1);
    FUN_140d03f60(lVar1,"time_format");
    FUN_140d040d0(lVar1,"delta");
    FUN_140d03f60(lVar1,"protocol_type");
    FUN_140d03f10(lVar1);
    FUN_140d040d0(lVar1,&DAT_1413a6a68);
    FUN_140d03f40(lVar1);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_140d03f60(lVar1,"group_id");
      FUN_140d040d0(lVar1,*(undefined8 *)(param_1 + 0x28));
      FUN_140b8d990(*(undefined8 *)(param_1 + 0x28),"ssl\\quic\\qlog.c",0x112);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_140d03f60(lVar1,"system_info");
    FUN_140d03ec0(lVar1);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      FUN_140d03f60(lVar1,"process_id");
      DVar2 = GetCurrentProcessId();
      uVar5 = (ulonglong)DVar2;
    }
    else {
      FUN_140d03f60(lVar1,"process_id");
      uVar5 = *(ulonglong *)(param_1 + 0x48);
    }
    FUN_140d040b0(lVar1,uVar5);
    FUN_140d03ef0(lVar1);
    FUN_140d03ef0(lVar1);
    FUN_140d03f60(lVar1,"vantage_point");
    FUN_140d03ec0(lVar1);
    puVar7 = *(undefined1 **)(param_1 + 0x50);
    if (puVar7 == (undefined1 *)0x0) {
      lVar3 = built_on_fri_may_29_03_35_17_2026_utc(3);
      uVar4 = built_on_fri_may_29_03_35_17_2026_utc(7);
      local_a8 = lVar3 + 10;
      FUN_140c07aa0(local_98,0x80,"OpenSSL/%s (%s)",uVar4);
      puVar7 = local_98;
    }
    FUN_140d03f60(lVar1,&DAT_1413a6260);
    pcVar6 = "client";
    if (*(int *)(param_1 + 0x30) != 0) {
      pcVar6 = "server";
    }
    FUN_140d040d0(lVar1,pcVar6);
    FUN_140d03f60(lVar1,&DAT_1413a62ac);
    FUN_140d040d0(lVar1,puVar7);
    FUN_140d03ef0(lVar1);
    FUN_140d03ef0(lVar1);
    FUN_140d03ef0(lVar1);
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_c8);
}

