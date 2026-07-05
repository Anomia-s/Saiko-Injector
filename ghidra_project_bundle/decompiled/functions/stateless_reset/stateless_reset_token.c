/**
 * Function: stateless_reset_token
 * Address:  140cd1ea0
 * Signature: undefined stateless_reset_token(void)
 * Body size: 2262 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void stateless_reset_token(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  longlong local_2c0;
  undefined1 *local_2b8;
  ulonglong local_2b0;
  ulonglong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  byte local_288;
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  longlong local_270;
  longlong lStack_268;
  uint local_260;
  undefined4 uStack_25c;
  longlong local_258;
  undefined1 local_250;
  undefined7 uStack_24f;
  undefined8 local_248;
  uint local_240;
  undefined4 uStack_23c;
  undefined1 local_228 [512];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140cd1eba;
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_2e8;
  local_270 = *param_2;
  lStack_268 = param_2[1];
  iVar1 = FUN_140ccb020(param_2,&local_2c0,0);
  if (iVar1 == 0) {
    *param_3 = -1;
    goto LAB_140cd2767;
  }
  switch(local_2c0) {
  case 0:
    FUN_140cc87d0(param_1,"frame_type","padding");
    uVar2 = FUN_140ccbf40(param_2);
    FUN_140cc8860(param_1,"payload_length",uVar2);
    goto LAB_140cd2767;
  case 1:
    iVar1 = FUN_140ccbf80(param_2);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type",&DAT_1413a6144);
      goto LAB_140cd2767;
    }
    break;
  case 2:
  case 3:
    iVar1 = FUN_140ccb0c0(param_2,local_280);
    if (iVar1 != 0) {
      local_2b8 = local_228;
      local_2b0 = 0x20;
      iVar1 = FUN_140ccb230(param_2,3,&local_2b8,local_278);
      if (iVar1 != 0) {
        FUN_140cc87d0(param_1,"frame_type",&DAT_1413a60c0);
        FUN_140cc8860(param_1,"ack_delay",local_2a8 / 1000000);
        if ((local_288 & 1) != 0) {
          FUN_140cc8860(param_1,&DAT_1413a6fac,local_2a0);
          FUN_140cc8860(param_1,&DAT_1413a7048,local_298);
          FUN_140cc8860(param_1,&DAT_1413a634c,local_290);
        }
        FUN_140cc8780(param_1,"acked_ranges");
        uVar4 = 0;
        uVar5 = uVar4;
        if (local_2b0 != 0) {
          do {
            FUN_140cc8780(param_1,0);
            FUN_140cc8860(param_1,0,*(undefined8 *)(local_2b8 + uVar5));
            if (*(longlong *)(local_2b8 + uVar5 + 8) != *(longlong *)(local_2b8 + uVar5)) {
              FUN_140cc8860(param_1);
            }
            FUN_140cc87b0(param_1);
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 0x10;
          } while (uVar4 < local_2b0);
        }
        FUN_140cc87b0(param_1);
        goto LAB_140cd2767;
      }
    }
    break;
  case 4:
    iVar1 = FUN_140ccb5a0(param_2,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","reset_stream");
      FUN_140cc8860(param_1,"stream_id",CONCAT44(uStack_25c,local_260));
      FUN_140cc8860(param_1,"error_code",local_258);
      FUN_140cc8860(param_1,"final_size",CONCAT71(uStack_24f,local_250));
      goto LAB_140cd2767;
    }
    break;
  case 5:
    iVar1 = FUN_140ccb620(param_2,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","stop_sending");
      FUN_140cc8860(param_1,"stream_id",CONCAT44(uStack_25c,local_260));
      FUN_140cc8860(param_1,"error_code",local_258);
      goto LAB_140cd2767;
    }
    break;
  case 6:
    iVar1 = FUN_140ccb690(param_2,1,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","crypto");
      FUN_140cc8860(param_1,"offset",CONCAT44(uStack_25c,local_260));
      FUN_140cc8860(param_1,"payload_length",local_258);
      *param_3 = *param_3 + local_258;
      goto LAB_140cd2767;
    }
    break;
  case 7:
    iVar1 = FUN_140ccb750(param_2,&local_2c8,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","new_token");
      FUN_140cc8730(param_1,"token");
      FUN_140cc8730(param_1,&DAT_1413a59d0);
      FUN_140cc88e0(param_1,&DAT_1413a6588,local_2c8,CONCAT44(uStack_25c,local_260));
      FUN_140cc8760(param_1);
      FUN_140cc8760(param_1);
      goto LAB_140cd2767;
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    iVar1 = FUN_140ccb7f0(param_2,1,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","stream");
      FUN_140cc8860(param_1,"stream_id",CONCAT44(uStack_25c,local_260));
      FUN_140cc8860(param_1,"offset",local_258);
      FUN_140cc8860(param_1,"payload_length",CONCAT71(uStack_24f,local_250));
      FUN_140cc88a0(param_1,"explicit_length",local_240 & 1);
      if ((local_240 & 2) != 0) {
        FUN_140cc88a0(param_1,&DAT_1413a5f1c,1);
      }
      if ((local_240 & 1) == 0) {
        *param_3 = -1;
      }
      else {
        *param_3 = CONCAT71(uStack_24f,local_250) + *param_3;
      }
      goto LAB_140cd2767;
    }
    break;
  case 0x10:
    iVar1 = FUN_140ccb950(param_2,&local_2c8);
    if (iVar1 != 0) {
      pcVar6 = "max_data";
      pcVar3 = "frame_type";
LAB_140cd22bf:
      FUN_140cc87d0(param_1,pcVar3,pcVar6);
      FUN_140cc8860(param_1,"maximum",local_2c8);
      goto LAB_140cd2767;
    }
    break;
  case 0x11:
    iVar1 = FUN_140ccb9b0(param_2,&local_2c8,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","max_stream_data");
      FUN_140cc8860(param_1,"stream_id",local_2c8);
      FUN_140cc8860(param_1,"maximum",CONCAT44(uStack_25c,local_260));
      goto LAB_140cd2767;
    }
    break;
  case 0x12:
  case 0x13:
    iVar1 = FUN_140ccba30(param_2,&local_2c8);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","max_streams");
      pcVar6 = "unidirectional";
      if (local_2c0 == 0x12) {
        pcVar6 = "bidirectional";
      }
      pcVar3 = "stream_type";
      goto LAB_140cd22bf;
    }
    break;
  case 0x14:
    iVar1 = FUN_140ccbac0(param_2,&local_260);
    if (iVar1 != 0) {
      pcVar6 = "data_blocked";
      pcVar3 = "frame_type";
LAB_140cd25b1:
      FUN_140cc87d0(param_1,pcVar3,pcVar6);
      FUN_140cc8860(param_1,"limit",CONCAT44(uStack_25c,local_260));
      goto LAB_140cd2767;
    }
    break;
  case 0x15:
    iVar1 = FUN_140ccbb20(param_2,&local_260,&local_2c8);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","stream_data_blocked");
      FUN_140cc8860(param_1,"stream_id",CONCAT44(uStack_25c,local_260));
      FUN_140cc8860(param_1,"limit",local_2c8);
      goto LAB_140cd2767;
    }
    break;
  case 0x16:
  case 0x17:
    iVar1 = FUN_140ccbba0(param_2,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","streams_blocked");
      pcVar6 = "unidirectional";
      if (local_2c0 == 0x16) {
        pcVar6 = "bidirectional";
      }
      pcVar3 = "stream_type";
      goto LAB_140cd25b1;
    }
    break;
  case 0x18:
    iVar1 = FUN_140ccbc30(param_2,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","new_connection_id");
      FUN_140cc8860(param_1,"sequence_number",CONCAT44(uStack_25c,local_260));
      FUN_140cc8860(param_1,"retire_prior_to",local_258);
      FUN_140cc88e0(param_1,"connection_id",&uStack_24f,local_250);
      FUN_140cc88e0(param_1,"stateless_reset_token",(longlong)&uStack_23c + 1,0x10);
      goto LAB_140cd2767;
    }
    break;
  case 0x19:
    iVar1 = FUN_140ccbd20(param_2,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","retire_connection_id");
      FUN_140cc8860(param_1,"sequence_number",CONCAT44(uStack_25c,local_260));
      goto LAB_140cd2767;
    }
    break;
  case 0x1a:
    iVar1 = FUN_140ccbd80(param_2,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","path_challenge");
      goto LAB_140cd2767;
    }
    break;
  case 0x1b:
    iVar1 = FUN_140ccbde0(param_2,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","path_response");
      goto LAB_140cd2767;
    }
    break;
  case 0x1c:
  case 0x1d:
    iVar1 = FUN_140ccbe40(param_2,&local_260);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","connection_close");
      pcVar6 = "transport";
      if ((local_260 & 1) != 0) {
        pcVar6 = "application";
      }
      FUN_140cc87d0(param_1,"error_space",pcVar6);
      FUN_140cc8860(param_1,"error_code_value",local_258);
      if ((((local_260 & 1) == 0) ||
          (FUN_140cc8860(param_1,"error_code",local_258), (local_260 & 1) == 0)) &&
         (CONCAT71(uStack_24f,local_250) != 0)) {
        FUN_140cc8860(param_1,"trigger_frame_type");
      }
      FUN_140cc8810(param_1,"reason",local_248,CONCAT44(uStack_23c,local_240));
      goto LAB_140cd2767;
    }
    break;
  case 0x1e:
    iVar1 = FUN_140ccbfa0(param_2);
    if (iVar1 != 0) {
      FUN_140cc87d0(param_1,"frame_type","handshake_done");
      goto LAB_140cd2767;
    }
  }
  FUN_140cc87d0(param_1,"frame_type","unknown");
  FUN_140cc8860(param_1,"frame_type_value",local_2c0);
  FUN_140cc8730(param_1,&DAT_1413a59d0);
  FUN_140cc88e0(param_1,&DAT_1413a6588,local_270,lStack_268);
  FUN_140cc8760(param_1);
  *param_2 = *param_2 + param_2[1];
  param_2[1] = 0;
LAB_140cd2767:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_2e8);
}

