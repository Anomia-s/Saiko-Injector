/**
 * Function: no_encoders_were_found_for_standard_encoders
 * Address:  140c11810
 * Signature: undefined no_encoders_were_found_for_standard_encoders(void)
 * Body size: 244 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool no_encoders_were_found_for_standard_encoders(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined8 uStack_10;
  
  uStack_10 = 0x140c11820;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_58 = param_1;
  local_50 = param_2;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    local_48 = FUN_140b77980();
    if (local_48 != 0) {
      if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
        iVar1 = FUN_140c120c0(&local_58);
        return 0 < iVar1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\encode_decode\\encoder_lib.c",0x56,"OSSL_ENCODER_to_bio");
      pcVar3 = (char *)0x0;
      uVar2 = 0xc0105;
      goto LAB_140c118ea;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\encode_decode\\encoder_lib.c",0x4e,"OSSL_ENCODER_to_bio");
  pcVar3 = 
  "No encoders were found. For standard encoders you need at least one of the default or base providers available. Did you forget to load them?"
  ;
  uVar2 = 0x65;
LAB_140c118ea:
  FUN_140b91cc0(0x3b,uVar2,pcVar3);
  return false;
}

