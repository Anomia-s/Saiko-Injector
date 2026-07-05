/**
 * Function: tls_construct_server_hello
 * Address:  140bbe9e0
 * Signature: undefined tls_construct_server_hello(void)
 * Body size: 657 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_construct_server_hello(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  iVar2 = 0;
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
       (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) ||
     (*(int *)(param_1 + 0x8c8) == 1)) {
    iVar1 = 0x303;
    iVar6 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar6 = iVar2;
  }
  iVar1 = FUN_140c22430(param_2,(longlong)iVar1,2);
  if (iVar1 != 0) {
    puVar3 = &DAT_141235720;
    if (*(int *)(param_1 + 0x8c8) != 1) {
      puVar3 = (undefined *)(param_1 + 0x164);
    }
    iVar1 = FUN_140c22560(param_2,puVar3,0x20);
    if (iVar1 != 0) {
      if (((*(byte *)(*(longlong *)(param_1 + 8) + 0x50) & 2) == 0) &&
         (*(int *)(param_1 + 0x508) == 0)) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x250) = 0;
      }
      if (iVar6 == 0) {
        uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x8f8) + 0x250);
        lVar4 = *(longlong *)(param_1 + 0x8f8) + 600;
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 0x940);
        lVar4 = param_1 + 0x920;
      }
      if (uVar7 < 0x21) {
        if ((iVar6 == 0) && (*(int **)(param_1 + 0x390) != (int *)0x0)) {
          iVar2 = **(int **)(param_1 + 0x390);
        }
        iVar1 = FUN_140c22660(param_2,lVar4,uVar7,1);
        if (((iVar1 != 0) &&
            (iVar1 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0xb0))
                               (*(undefined8 *)(param_1 + 0x300),param_2,local_res8), iVar1 != 0))
           && (iVar2 = FUN_140c22430(param_2,(longlong)iVar2,1), iVar2 != 0)) {
          if (*(int *)(param_1 + 0x8c8) == 1) {
            uVar5 = 0x800;
          }
          else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0)
                   || (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) ||
                  (uVar5 = 0x200, iVar2 == 0x10000)) {
            uVar5 = 0x100;
          }
          iVar2 = FUN_140c32590(param_1,param_2,uVar5,0,0);
          if (iVar2 == 0) {
            return false;
          }
          if (*(int *)(param_1 + 0x8c8) == 1) {
            FUN_140ba4520(*(undefined8 *)(param_1 + 0x8f8));
            *(undefined8 *)(param_1 + 0x8f8) = 0;
            *(undefined4 *)(param_1 + 0x508) = 0;
            iVar2 = FUN_140bb6f10(param_1,0,0,0,0);
            if (iVar2 == 0) {
              return false;
            }
          }
          else if ((*(byte *)(param_1 + 0x948) & 1) == 0) {
            iVar2 = ssl3_digest_cached_records(param_1,0);
            return iVar2 != 0;
          }
          return true;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x9b6;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x9a4;
      }
      goto LAB_140bbec33;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  uVar5 = 0x981;
LAB_140bbec33:
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_srvr.c",uVar5,"tls_construct_server_hello");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return false;
}

