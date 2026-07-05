/**
 * Function: ssl_choose_client_version
 * Address:  140bb6900
 * Signature: undefined ssl_choose_client_version(void)
 * Body size: 745 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_choose_client_version(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  uVar4 = FUN_140c32280(param_1,0x13,0x300,param_3,0,0,0x140bb690d);
  if ((int)uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    return uVar4;
  }
  if ((*(int *)(param_1 + 0x8c8) != 0) && (*(int *)(param_1 + 0x48) != 0x304)) {
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0x91f,"ssl_choose_client_version");
    FUN_140ba3290(param_1,0x46,0x10a,0);
    return 0;
  }
  iVar2 = **(int **)(param_1 + 0x18);
  if (iVar2 == 0x10000) {
    piVar5 = &DAT_1412358e0;
LAB_140bb6a3a:
    iVar2 = FUN_140bb6bf0(param_1,local_res8,local_res10,local_res20);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x48);
      iVar3 = FUN_140bb61c0(param_1,iVar2,local_res8[0]);
      if ((iVar3 < 0) || (iVar3 = FUN_140bb61c0(param_1,iVar2,local_res10[0]), 0 < iVar3)) {
        *(undefined4 *)(param_1 + 0x48) = uVar1;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar4 = 0x947;
      }
      else {
        if ((*(byte *)(param_1 + 0x9b0) & 0x80) == 0) {
          local_res20[0] = local_res10[0];
        }
        if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) &&
           (iVar2 < local_res20[0])) {
          if (*(char (*) [8])(param_1 + 0x17c) == (char  [8])0x4452474e574f44) {
            *(undefined4 *)(param_1 + 0x48) = uVar1;
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar4 = 0x958;
          }
          else {
            if ((local_res20[0] != 0x304) || (*(longlong *)(param_1 + 0x17c) != 0x14452474e574f44))
            goto LAB_140bb6b3c;
            *(undefined4 *)(param_1 + 0x48) = uVar1;
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar4 = 0x963;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_lib.c",uVar4,"ssl_choose_client_version");
          uVar4 = 0x2f;
          iVar2 = 0x175;
          goto LAB_140bb6bcb;
        }
LAB_140bb6b3c:
        iVar3 = *piVar5;
        while (iVar3 != 0) {
          if ((*(code **)(piVar5 + 2) != (code *)0x0) && (iVar2 == *piVar5)) {
            uVar4 = (**(code **)(piVar5 + 2))();
            *(undefined8 *)(param_1 + 0x18) = uVar4;
            iVar2 = FUN_140baccd0(param_1,*(undefined4 *)(param_1 + 0x48));
            if (iVar2 != 0) {
              return 1;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar4 = 0x96e;
            goto LAB_140bb6a07;
          }
          piVar5 = piVar5 + 6;
          iVar3 = *piVar5;
        }
        *(undefined4 *)(param_1 + 0x48) = uVar1;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar4 = 0x975;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",uVar4,"ssl_choose_client_version");
      iVar2 = 0x102;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",0x941,"ssl_choose_client_version");
    }
  }
  else {
    if (iVar2 == 0x1ffff) {
      piVar5 = &DAT_141235970;
      goto LAB_140bb6a3a;
    }
    if (*(int *)(param_1 + 0x48) == iVar2) {
      iVar2 = FUN_140baccd0(param_1);
      if (iVar2 != 0) {
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x932;
LAB_140bb6a07:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",uVar4,"ssl_choose_client_version");
      uVar4 = 0x50;
      iVar2 = 0xc0103;
      goto LAB_140bb6bcb;
    }
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0x927,"ssl_choose_client_version");
    iVar2 = 0x10a;
  }
  uVar4 = 0x46;
LAB_140bb6bcb:
  FUN_140ba3290(param_1,uVar4,iVar2,0);
  return 0;
}

