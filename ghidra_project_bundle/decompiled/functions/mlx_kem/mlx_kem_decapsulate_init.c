/**
 * Function: mlx_kem_decapsulate_init
 * Address:  140d52980
 * Signature: undefined mlx_kem_decapsulate_init(void)
 * Body size: 127 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 mlx_kem_decapsulate_init(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(uint *)(param_2 + 0x30) < 2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\mlx_kem.c",0x56,"mlx_kem_decapsulate_init");
    FUN_140b91cc0(0x39,0x80,0);
  }
  else {
    iVar1 = FUN_140b69250();
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 8) = param_2;
      *(undefined4 *)(param_1 + 0x10) = 0x2000;
      return 1;
    }
  }
  return 0;
}

