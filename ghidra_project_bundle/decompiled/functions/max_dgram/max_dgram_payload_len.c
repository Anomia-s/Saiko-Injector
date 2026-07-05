/**
 * Function: max_dgram_payload_len
 * Address:  140cd82b0
 * Signature: undefined max_dgram_payload_len(void)
 * Body size: 185 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 max_dgram_payload_len(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140b93540(param_2,"max_dgram_payload_len");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar1 = FUN_140b93540(param_2,"cur_cwnd_size");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar1 = FUN_140b93540(param_2,"min_cwnd_size");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar1 = FUN_140b93540(param_2,"bytes_in_flight");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  lVar1 = FUN_140b93540(param_2,"cur_state");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return 1;
}

