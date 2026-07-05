/**
 * Function: crypto_error_0x03llx
 * Address:  140cd1910
 * Signature: undefined crypto_error_0x03llx(void)
 * Body size: 725 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void crypto_error_0x03llx(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined1 local_38 [32];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140cd1920;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  local_48 = "connectivity:connection_closed";
  iVar2 = FUN_140cc8560(param_1,3,"connectivity","connection_closed");
  if (iVar2 == 0) goto LAB_140cd1bd8;
  pcVar3 = "local";
  if ((param_2[4] & 2) != 0) {
    pcVar3 = "remote";
  }
  FUN_140cc87d0(param_1,"owner",pcVar3);
  uVar1 = *param_2;
  if ((param_2[4] & 1) == 0) {
    switch(uVar1) {
    case 1:
      FUN_140cc87d0(param_1,"connection_code","internal_error");
      break;
    case 2:
      FUN_140cc87d0(param_1,"connection_code","connection_refused");
      break;
    case 3:
      FUN_140cc87d0(param_1,"connection_code","flow_control_error");
      break;
    case 4:
      FUN_140cc87d0(param_1,"connection_code","stream_limit_error");
      break;
    case 5:
      FUN_140cc87d0(param_1,"connection_code","stream_state_error");
      break;
    case 6:
      FUN_140cc87d0(param_1,"connection_code","final_size_error");
      break;
    case 7:
      FUN_140cc87d0(param_1,"connection_code","frame_encoding_error");
      break;
    case 8:
      FUN_140cc87d0(param_1,"connection_code","transport_parameter_error");
      break;
    case 9:
      FUN_140cc87d0(param_1,"connection_code","connection_id_limit_error");
      break;
    case 10:
      FUN_140cc87d0(param_1,"connection_code","protocol_violation");
      break;
    case 0xb:
      FUN_140cc87d0(param_1,"connection_code","invalid_token");
      break;
    case 0xc:
      FUN_140cc87d0(param_1,"connection_code","application_error");
      break;
    case 0xd:
      FUN_140cc87d0(param_1,"connection_code","crypto_buffer_exceeded");
      break;
    case 0xe:
      FUN_140cc87d0(param_1,"connection_code","key_update_error");
      break;
    case 0xf:
      FUN_140cc87d0(param_1,"connection_code","aead_limit_reached");
      break;
    case 0x10:
      FUN_140cc87d0(param_1,"connection_code","no_viable_path");
      break;
    default:
      if ((uVar1 < 0x100) || (0x1ff < uVar1)) {
        pcVar3 = "connection_code";
        goto LAB_140cd1bb1;
      }
      FUN_140c07aa0(local_38,0x20,"crypto_error_0x%03llx",uVar1);
      FUN_140cc87d0(param_1,"connection_code",local_38);
    }
  }
  else {
    pcVar3 = "application_code";
LAB_140cd1bb1:
    FUN_140cc8860(param_1,pcVar3);
  }
  FUN_140cc8810(param_1,"reason",param_2[2],param_2[3]);
  FUN_140cc8640(param_1);
LAB_140cd1bd8:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_68);
}

