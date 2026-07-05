/**
 * Function: tls_construct_new_session_ticket
 * Address:  140bc0830
 * Signature: undefined tls_construct_new_session_ticket(void)
 * Body size: 1316 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls_construct_new_session_ticket(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140bc084c;
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0xb80);
  local_48[0] = 0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar4 = **(int **)(param_1 + 0x18), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
    uVar6 = FUN_140ba7640(param_1,param_2,0);
    iVar4 = FUN_140b97b40(uVar6);
    if (iVar4 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x106c,"tls_construct_new_session_ticket");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      goto LAB_140bc0d45;
    }
    if ((*(longlong *)(param_1 + 0x1548) != 0) || (*(int *)(param_1 + 0x508) != 0)) {
      lVar7 = FUN_140ba55c0(*(undefined8 *)(param_1 + 0x8f8),0);
      if (lVar7 == 0) goto LAB_140bc0d45;
      FUN_140ba4520(*(undefined8 *)(param_1 + 0x8f8));
      *(longlong *)(param_1 + 0x8f8) = lVar7;
    }
    iVar5 = ssl_generate_session_id(param_1,*(undefined8 *)(param_1 + 0x8f8));
    if (iVar5 == 0) goto LAB_140bc0d45;
    iVar5 = FUN_140b82f80(**(undefined8 **)(param_1 + 8),local_48,4,0);
    if (iVar5 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x1088,"tls_construct_new_session_ticket");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      goto LAB_140bc0d45;
    }
    local_50 = 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x334) = local_48[0];
    uVar2 = *(undefined8 *)(param_1 + 0x1550);
    local_39 = (undefined1)uVar2;
    local_3a = (undefined1)((ulonglong)uVar2 >> 8);
    local_3b = (undefined1)((ulonglong)uVar2 >> 0x10);
    local_3c = (undefined1)((ulonglong)uVar2 >> 0x18);
    local_3d = (undefined1)((ulonglong)uVar2 >> 0x20);
    local_3e = (undefined1)((ulonglong)uVar2 >> 0x28);
    local_3f = (undefined1)((ulonglong)uVar2 >> 0x30);
    local_40 = (undefined1)((ulonglong)uVar2 >> 0x38);
    local_60 = *(longlong *)(param_1 + 0x8f8) + 0x50;
    local_70 = &local_40;
    local_68 = 8;
    local_78 = 10;
    local_58 = (longlong)iVar4;
    iVar5 = FUN_140bbb390(param_1,uVar6,param_1 + 0x634,"resumption");
    if (iVar5 == 0) goto LAB_140bc0d45;
    *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 8) = (longlong)iVar4;
    lVar7 = *(longlong *)(param_1 + 0x8f8);
    uVar6 = FUN_140c21250();
    *(undefined8 *)(lVar7 + 0x2e0) = uVar6;
    FUN_140ba55f0(*(undefined8 *)(param_1 + 0x8f8));
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
      FUN_140b8d990(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x340),
                    "ssl\\statem\\statem_srvr.c",0x10a2);
      lVar7 = *(longlong *)(param_1 + 0x8f8);
      uVar6 = FUN_140b8c7c0(*(undefined8 *)(param_1 + 0x4b8),*(undefined8 *)(param_1 + 0x4c0),
                            "ssl\\statem\\statem_srvr.c",0x10a4);
      *(undefined8 *)(lVar7 + 0x340) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x8f8);
      if (*(longlong *)(lVar7 + 0x340) == 0) {
        *(undefined8 *)(lVar7 + 0x348) = 0;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0x10a7,"tls_construct_new_session_ticket");
        FUN_140ba3290(param_1,0x50,0x8000f,0);
        goto LAB_140bc0d45;
      }
      *(undefined8 *)(lVar7 + 0x348) = *(undefined8 *)(param_1 + 0x4c0);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x338) = *(undefined4 *)(param_1 + 0x1530);
  }
  pcVar3 = *(code **)(lVar1 + 0x418);
  if ((pcVar3 != (code *)0x0) &&
     (iVar4 = (*pcVar3)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar1 + 0x428),local_48[0]),
     iVar4 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x10b2,"tls_construct_new_session_ticket");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    goto LAB_140bc0d45;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
       (iVar4 = **(int **)(param_1 + 0x18), 0x303 < iVar4)) && (iVar4 != 0x10000)) &&
     (((*(ulonglong *)(param_1 + 0x9a8) >> 0xe & 1) != 0 ||
      ((*(int *)(param_1 + 0x1530) != 0 && ((*(ulonglong *)(param_1 + 0x9a8) >> 0x18 & 1) == 0))))))
  {
    iVar4 = create_ticket_prequel(param_1,param_2,local_48[0],&local_40);
    if (iVar4 == 0) goto LAB_140bc0d45;
    iVar4 = FUN_140c22560(param_2,*(longlong *)(param_1 + 0x8f8) + 600,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x250));
    if ((iVar4 == 0) || (iVar4 = FUN_140c21e20(param_2), iVar4 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x1042,"construct_stateful_ticket");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      goto LAB_140bc0d45;
    }
  }
  else {
    iVar4 = FUN_140bc3530(param_1,param_2,local_48[0],&local_40);
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        *(longlong *)(param_1 + 0x1548) = *(longlong *)(param_1 + 0x1548) + 1;
        *(longlong *)(param_1 + 0x1550) = *(longlong *)(param_1 + 0x1550) + 1;
        if (0 < *(int *)(param_1 + 0xa5c)) {
          *(int *)(param_1 + 0xa5c) = *(int *)(param_1 + 0xa5c) + -1;
        }
      }
      goto LAB_140bc0d45;
    }
  }
  if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
     ((iVar4 = **(int **)(param_1 + 0x18), 0x303 < iVar4 && (iVar4 != 0x10000)))) {
    local_78 = 0;
    iVar4 = FUN_140c32590(param_1,param_2,0x2000,0);
    if (iVar4 != 0) {
      *(longlong *)(param_1 + 0x1548) = *(longlong *)(param_1 + 0x1548) + 1;
      *(longlong *)(param_1 + 0x1550) = *(longlong *)(param_1 + 0x1550) + 1;
      if (0 < *(int *)(param_1 + 0xa5c)) {
        *(int *)(param_1 + 0xa5c) = *(int *)(param_1 + 0xa5c) + -1;
      }
      FUN_140b6e240(param_1,2);
    }
  }
LAB_140bc0d45:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_98);
}

