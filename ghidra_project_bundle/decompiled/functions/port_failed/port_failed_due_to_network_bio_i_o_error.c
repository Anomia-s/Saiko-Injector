/**
 * Function: port_failed_due_to_network_bio_i_o_error
 * Address:  140c59360
 * Signature: undefined port_failed_due_to_network_bio_i_o_error(void)
 * Body size: 177 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void port_failed_due_to_network_bio_i_o_error(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_port.c",0x6c0,"ossl_quic_port_raise_net_error");
    FUN_140b91cc0(0x14,0x183,"port failed due to network BIO I/O error");
    d_aplatformplatformopenssl_srccryptoerrerr_lo(*(undefined8 *)(param_1 + 0x90));
    if ((*(uint *)(param_1 + 0x9c) & 1) == 0) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 1;
    }
    if (param_2 != 0) {
      network_bio_i_o_error(param_2);
    }
    for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      if (lVar1 != param_2) {
        network_bio_i_o_error(lVar1);
      }
    }
  }
  return;
}

