/**
 * Function: tls_construct_ctos_session_ticket
 * Address:  140cbba10
 * Signature: undefined tls_construct_ctos_session_ticket(void)
 * Body size: 460 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_session_ticket(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong _Size;
  
  iVar5 = FUN_140bb09e0();
  if (iVar5 == 0) {
LAB_140cbbbc1:
    uVar6 = 2;
  }
  else {
    if ((((*(int *)(param_1 + 0x7c) == 0) &&
         (piVar2 = *(int **)(param_1 + 0x8f8), piVar2 != (int *)0x0)) &&
        (*(longlong *)(piVar2 + 200) != 0)) && (*piVar2 != 0x304)) {
      _Size = *(ulonglong *)(piVar2 + 0xca);
LAB_140cbbb31:
      if (_Size == 0) goto LAB_140cbbb3a;
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x8f8);
      if (((*plVar1 != 0) && (puVar3 = *(ushort **)(param_1 + 0xac0), puVar3 != (ushort *)0x0)) &&
         (*(longlong *)(puVar3 + 4) != 0)) {
        _Size = (ulonglong)*puVar3;
        lVar4 = *plVar1;
        uVar6 = FUN_140b8d8d0(_Size,"ssl\\statem\\extensions_clnt.c",300);
        *(undefined8 *)(lVar4 + 800) = uVar6;
        if (*(void **)(*plVar1 + 800) == (void *)0x0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\extensions_clnt.c",0x12e,"tls_construct_ctos_session_ticket");
          FUN_140ba3290(param_1,0x50,0xc0103,0);
          return 0;
        }
        memcpy(*(void **)(*plVar1 + 800),*(void **)(*(longlong *)(param_1 + 0xac0) + 8),_Size);
        *(ulonglong *)(*plVar1 + 0x328) = _Size;
        goto LAB_140cbbb31;
      }
      _Size = 0;
LAB_140cbbb3a:
      if ((*(longlong *)(param_1 + 0xac0) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xac0) + 8) == 0)) goto LAB_140cbbbc1;
    }
    iVar5 = FUN_140c22430(param_2,0x23,2);
    if ((iVar5 == 0) ||
       (iVar5 = FUN_140c22660(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 800),_Size,2)
       , iVar5 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_clnt.c",0x13e,"tls_construct_ctos_session_ticket");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}

