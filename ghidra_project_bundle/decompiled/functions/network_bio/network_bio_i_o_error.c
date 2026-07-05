/**
 * Function: network_bio_i_o_error
 * Address:  140c50320
 * Signature: undefined network_bio_i_o_error(void)
 * Body size: 95 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void network_bio_i_o_error(longlong param_1)

{
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x140c5032a;
  local_30 = 0;
  local_18 = 0;
  if ((*(uint *)(param_1 + 0x5d4) & 0x20) == 0) {
    local_38 = 1;
    *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) | 0x20;
    local_20 = 0x15;
    local_28 = "network BIO I/O error";
    FUN_140c54a70(param_1,&local_38,1);
  }
  return;
}

