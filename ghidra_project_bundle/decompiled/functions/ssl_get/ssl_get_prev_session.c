/**
 * Function: ssl_get_prev_session
 * Address:  140ba5110
 * Signature: undefined ssl_get_prev_session(void)
 * Body size: 1191 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl_get_prev_session(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  int *local_res8;
  
  bVar3 = false;
  local_res8 = (int *)0x0;
  bVar5 = 0;
  bVar2 = false;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar6 = **(int **)(param_1 + 0x18), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
    FUN_140ba4520(*(undefined8 *)(param_1 + 0x8f8));
    *(undefined8 *)(param_1 + 0x8f8) = 0;
    *(undefined4 *)(param_1 + 0xa58) = 1;
    iVar6 = FUN_140c32280(param_1,0x14,0x80,*(undefined8 *)(param_2 + 0x288),0,0);
    if ((iVar6 == 0) ||
       (iVar6 = FUN_140c32280(param_1,0x1c,0x80,*(undefined8 *)(param_2 + 0x288),0,0), iVar6 == 0))
    {
      return -1;
    }
    local_res8 = *(int **)(param_1 + 0x8f8);
    bVar2 = false;
  }
  else {
    iVar6 = FUN_140bb0140(param_1,param_2,&local_res8);
    if ((iVar6 == 0) || (iVar6 == 1)) {
      bVar4 = 1;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0x26d,"ssl_get_prev_session");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      piVar9 = local_res8;
      goto LAB_140ba555b;
    }
    if (((iVar6 == 2) || (iVar6 == 3)) && (*(longlong *)(param_2 + 0x28) != 0)) {
      bVar2 = true;
      local_res8 = (int *)FUN_140ba4f60(param_1,param_2 + 0x30);
    }
  }
  piVar9 = local_res8;
  if (local_res8 == (int *)0x0) {
    return 0;
  }
  bVar3 = bVar2;
  bVar4 = 0;
  if (((*local_res8 == *(int *)(param_1 + 0x48)) &&
      (bVar4 = bVar5, *(size_t *)(local_res8 + 0x9e) == *(size_t *)(param_1 + 0x8d0))) &&
     (iVar6 = memcmp(local_res8 + 0xa0,(void *)(param_1 + 0x8d8),*(size_t *)(local_res8 + 0x9e)),
     iVar6 == 0)) {
    if (((*(byte *)(param_1 + 0x948) & 1) == 0) || (*(longlong *)(param_1 + 0x8d0) != 0)) {
      uVar8 = FUN_140c21250();
      if (*(ulonglong *)(piVar9 + 0xba) < uVar8) {
        LOCK();
        piVar9 = (int *)(*(longlong *)(param_1 + 0xb80) + 0x94);
        *piVar9 = *piVar9 + 1;
        UNLOCK();
        piVar9 = local_res8;
        bVar4 = 0;
        if (bVar2) {
          FUN_140ba48d0(*(undefined8 *)(param_1 + 0xb80),local_res8);
          piVar9 = local_res8;
          bVar4 = bVar5;
        }
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x160) & 0x200;
        if ((*(byte *)(local_res8 + 0xdc) & 1) == 0) {
          piVar9 = local_res8;
          if (uVar7 == 0) goto LAB_140ba5375;
        }
        else {
          if (uVar7 != 0) {
LAB_140ba5375:
            if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
                (iVar6 = **(int **)(param_1 + 0x18), iVar6 < 0x304)) || (iVar6 == 0x10000)) {
              lVar1 = *(longlong *)(param_1 + 0x8f8);
              if (lVar1 != 0) {
                LOCK();
                piVar9 = (int *)(lVar1 + 0x390);
                iVar6 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar6 < 2) {
                  get_and_lock(2,lVar1,lVar1 + 0x308);
                  FUN_14046e980(lVar1 + 0x50,0x200);
                  FUN_14046e980(lVar1 + 600,0x20);
                  FUN_140b763d0(*(undefined8 *)(lVar1 + 0x2c0));
                  FUN_140b7efe0(*(undefined8 *)(lVar1 + 0x2b8));
                  FUN_140b9f7a0(*(undefined8 *)(lVar1 + 0x2c8));
                  FUN_140b8d990(*(undefined8 *)(lVar1 + 0x318),"ssl\\ssl_sess.c",0x363);
                  FUN_140b8d990(*(undefined8 *)(lVar1 + 800),"ssl\\ssl_sess.c",0x364);
                  FUN_140b8d990(*(undefined8 *)(lVar1 + 0x2a0),"ssl\\ssl_sess.c",0x366);
                  FUN_140b8d990(*(undefined8 *)(lVar1 + 0x2a8),"ssl\\ssl_sess.c",0x367);
                  FUN_140b8d990(*(undefined8 *)(lVar1 + 0x358),"ssl\\ssl_sess.c",0x36a);
                  FUN_140b8d990(*(undefined8 *)(lVar1 + 0x340),"ssl\\ssl_sess.c",0x36c);
                  FUN_140b8d990(*(undefined8 *)(lVar1 + 0x360),"ssl\\ssl_sess.c",0x36d);
                  FUN_140b8db20(lVar1,0x398,"ssl\\ssl_sess.c",0x36f);
                }
              }
              *(int **)(param_1 + 0x8f8) = local_res8;
            }
            LOCK();
            piVar9 = (int *)(*(longlong *)(param_1 + 0xb80) + 0x9c);
            *piVar9 = *piVar9 + 1;
            UNLOCK();
            *(undefined4 *)(param_1 + 0x990) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x2d0);
            return 1;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\ssl_sess.c",0x2ae,"ssl_get_prev_session");
          FUN_140ba3290(param_1,0x2f,0x68,0);
          bVar4 = 1;
          piVar9 = local_res8;
        }
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0x29c,"ssl_get_prev_session");
      FUN_140ba3290(param_1,0x50,0x115,0);
      piVar9 = local_res8;
      bVar4 = 1;
    }
  }
LAB_140ba555b:
  if (piVar9 != (int *)0x0) {
    FUN_140ba4520(piVar9);
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar6 = **(int **)(param_1 + 0x18), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
      *(undefined8 *)(param_1 + 0x8f8) = 0;
    }
    if (!bVar3) {
      *(undefined4 *)(param_1 + 0xa58) = 1;
    }
  }
  return -(uint)bVar4;
}

