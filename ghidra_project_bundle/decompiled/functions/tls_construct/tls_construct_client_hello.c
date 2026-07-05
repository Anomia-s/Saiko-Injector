/**
 * Function: tls_construct_client_hello
 * Address:  140c36a00
 * Signature: undefined tls_construct_client_hello(void)
 * Body size: 1038 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_construct_client_hello(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  size_t _Size;
  ulonglong in_stack_ffffffffffffffd8;
  undefined8 uVar10;
  ulonglong uVar9;
  
  uVar10 = 0x140c36a18;
  puVar1 = *(undefined4 **)(param_1 + 0x8f8);
  puVar2 = *(undefined8 **)(param_1 + 8);
  iVar4 = FUN_140bb63d0();
  if (iVar4 != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x4a8,"tls_construct_client_hello");
    FUN_140ba3290(param_1,0x50,iVar4,0);
    return false;
  }
  if ((((puVar1 == (undefined4 *)0x0) || (iVar4 = FUN_140bb6210(param_1,*puVar1,0), iVar4 == 0)) ||
      (iVar4 = FUN_140ba43f0(puVar1), iVar4 == 0)) &&
     ((*(int *)(param_1 + 0x8c8) == 0 && (iVar4 = ssl_get_new_session(param_1,0), iVar4 == 0)))) {
    return false;
  }
  uVar9 = 0;
  _Size = 0x20;
  uVar6 = uVar9;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
    if (*(int *)(param_1 + 0x8c8) == 0) goto LAB_140c36aed;
  }
  else {
    do {
      if (*(char *)(uVar6 + 0x184 + param_1) != '\0') goto LAB_140c36b19;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x20);
LAB_140c36aed:
    iVar4 = FUN_140bed3e0(param_1,0,param_1 + 0x184,0x20,
                          in_stack_ffffffffffffffd8 & 0xffffffff00000000,uVar10);
    if (iVar4 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar10 = 0x4cc;
      goto LAB_140c36dcb;
    }
  }
LAB_140c36b19:
  iVar4 = FUN_140c22430(param_2,(longlong)*(int *)(param_1 + 0x9cc),2);
  if ((iVar4 == 0) || (iVar4 = FUN_140c22560(param_2,param_1 + 0x184,0x20), iVar4 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar10 = 0x4f3;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x8f8);
    piVar7 = piVar3 + 0x96;
    if ((*(int *)(param_1 + 0x7c) == 0) && (*piVar3 != 0x304)) {
      _Size = *(size_t *)(piVar3 + 0x94);
      if (*(int *)(param_1 + 0x48) == 0x304) {
        *(size_t *)(param_1 + 0x940) = _Size;
        memcpy((void *)(param_1 + 0x920),piVar7,_Size);
      }
    }
    else if ((*(int *)(param_1 + 0x48) == 0x304) && ((*(uint *)(param_1 + 0x9a8) >> 0x14 & 1) != 0))
    {
      piVar7 = (int *)(param_1 + 0x920);
      *(undefined8 *)(param_1 + 0x940) = 0x20;
      if ((*(int *)(param_1 + 0x8c8) == 0) &&
         (iVar4 = FUN_140b82f80(*puVar2,piVar7,0x20,0), iVar4 < 1)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar10 = 0x502;
        goto LAB_140c36dcb;
      }
    }
    else {
      _Size = 0;
    }
    iVar4 = FUN_140c22090(param_2,1);
    if ((iVar4 == 0) ||
       (((_Size != 0 && (iVar4 = FUN_140c22560(param_2,piVar7,_Size), iVar4 == 0)) ||
        (iVar4 = FUN_140c21e20(param_2), iVar4 == 0)))) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar10 = 0x514;
    }
    else {
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
        uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x4f0) + 0x100);
        if ((0xff < uVar6) ||
           (iVar4 = FUN_140c22660(param_2,*(longlong *)(param_1 + 0x4f0),uVar6,1), iVar4 == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar10 = 0x51d;
          goto LAB_140c36dcb;
        }
      }
      iVar4 = FUN_140c22090(param_2,2);
      if (iVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar10 = 0x524;
      }
      else {
        uVar10 = FUN_140b6b790(param_1);
        iVar4 = no_ciphers_enabled_for_max_supported_ssl_tls(param_1,uVar10,param_2);
        if (iVar4 == 0) {
          return false;
        }
        iVar4 = FUN_140c21e20(param_2);
        if (iVar4 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar10 = 0x52e;
        }
        else {
          iVar4 = FUN_140c22090(param_2,1);
          if (iVar4 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar10 = 0x534;
          }
          else {
            iVar4 = FUN_140bb6180(param_1);
            if ((((iVar4 != 0) && (puVar2[0x23] != 0)) &&
                (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0
                 || (*(int *)(param_1 + 0x41c) < 0x304)))) && (iVar4 = FUN_140b77980(), 0 < iVar4))
            {
              do {
                piVar7 = (int *)FUN_140b77990(puVar2[0x23],uVar9);
                iVar5 = FUN_140c22430(param_2,(longlong)*piVar7,1);
                if (iVar5 == 0) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  uVar10 = 0x540;
                  goto LAB_140c36dcb;
                }
                uVar8 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar8;
              } while ((int)uVar8 < iVar4);
            }
            iVar4 = FUN_140c22430(param_2,0,1);
            if ((iVar4 != 0) && (iVar4 = FUN_140c21e20(param_2), iVar4 != 0)) {
              iVar4 = FUN_140c32590(param_1,param_2,0x80,0,0);
              return iVar4 != 0;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar10 = 0x548;
          }
        }
      }
    }
  }
LAB_140c36dcb:
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_clnt.c",uVar10,"tls_construct_client_hello");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return false;
}

