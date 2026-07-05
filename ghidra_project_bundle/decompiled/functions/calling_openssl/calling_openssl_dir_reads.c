/**
 * Function: calling_openssl_dir_reads
 * Address:  140d6f650
 * Signature: undefined calling_openssl_dir_reads(void)
 * Body size: 1061 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void calling_openssl_dir_reads(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  longlong *plVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  uint local_90 [2];
  longlong local_88;
  uint local_80 [2];
  undefined8 local_78;
  undefined1 local_70 [6];
  ushort local_6a;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  uVar11 = 0;
  local_78 = param_1;
  FUN_140b932f0();
  local_90[0] = local_90[0] & 0xfffffffe;
  uVar12 = 1;
  local_98 = param_2;
  iVar3 = FUN_140b8c740(param_2,"file:",5);
  if (iVar3 == 0) {
    pcVar8 = (char *)(param_2 + 5);
    iVar3 = FUN_140b8c740(pcVar8,&DAT_1413a7094,2);
    if (iVar3 == 0) {
      pcVar8 = (char *)(param_2 + 7);
      iVar3 = FUN_140b8c740(pcVar8,"localhost/",10);
      if (iVar3 == 0) {
        pcVar8 = (char *)(param_2 + 0x10);
        plVar9 = &local_98;
        puVar10 = local_90;
      }
      else {
        iVar3 = FUN_140b8c740(pcVar8,&DAT_1413a7098,1);
        if (iVar3 != 0) {
          FUN_140b93470();
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\storemgmt\\file_store.c",0xe5,"file_open");
          FUN_140b91cc0(0x39,0xdf,0);
          goto LAB_140d6fa68;
        }
        plVar9 = &local_98;
        puVar10 = local_90;
      }
    }
    else {
      uVar12 = 2;
      plVar9 = &local_88;
      puVar10 = local_80;
    }
    uVar2 = *puVar10;
    cVar1 = *pcVar8;
    *puVar10 = uVar2 | 1;
    if ((((cVar1 == '/') && (pcVar8[2] == ':')) && (pcVar8[3] == '/')) &&
       (iVar3 = tolower((uint)(byte)pcVar8[1]), (byte)((char)iVar3 + 0x9fU) < 0x1a)) {
      pcVar8 = pcVar8 + 1;
      *puVar10 = uVar2 & 0xfffffffe;
    }
    *plVar9 = (longlong)pcVar8;
    param_1 = local_78;
  }
  plVar9 = &local_98;
  puVar10 = local_90;
  do {
    while( true ) {
      if (uVar12 <= uVar11) {
        FUN_140b93470();
        goto LAB_140d6fa68;
      }
      if (((*puVar10 & 1) != 0) && (pcVar8 = (char *)*plVar9, *pcVar8 != '/')) {
        FUN_140b93470();
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\storemgmt\\file_store.c",0x102,"file_open");
        FUN_140b91cc0(0x39,0xdb,"Given path=%s",pcVar8);
        goto LAB_140d6fa68;
      }
      lVar7 = *plVar9;
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + 4;
      plVar9 = plVar9 + 2;
      iVar3 = _stat64i32(lVar7,local_70);
      if (-1 < iVar3) break;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\storemgmt\\file_store.c",0x108,"file_open");
      piVar4 = _errno();
      FUN_140b91cc0(2,*piVar4,"calling stat(%s)",lVar7);
    }
  } while (lVar7 == 0);
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  if ((local_6a & 0xf000) == 0x4000) {
    lVar5 = FUN_140d6ff80(1,param_2,param_1);
    if (lVar5 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\storemgmt\\file_store.c",0xae,"file_open_dir");
      FUN_140b91cc0(0x39,0x80039,0);
    }
    else {
      uVar6 = FUN_140c3d350(lVar5 + 0x18,lVar7);
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      piVar4 = _errno();
      iVar3 = *piVar4;
      *(int *)(lVar5 + 0x38) = iVar3;
      if (*(longlong *)(lVar5 + 0x30) == 0) {
        if (iVar3 == 0) {
          *(undefined4 *)(lVar5 + 0x20) = 1;
        }
        else {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\storemgmt\\file_store.c",0xb6,"file_open_dir");
          FUN_140b91cc0(2,*(undefined4 *)(lVar5 + 0x38),"Calling OPENSSL_DIR_read(\"%s\")",lVar7);
          if (*(int *)(lVar5 + 0x10) == 0) {
            FUN_140b73150(*(undefined8 *)(lVar5 + 0x18));
            *(undefined8 *)(lVar5 + 0x18) = 0;
          }
          else {
            if (*(int *)(lVar5 + 0x10) != 1) goto LAB_140d6fa68;
            if (*(longlong *)(lVar5 + 0x18) != 0) {
              FUN_140c3d760(lVar5 + 0x18);
            }
          }
          FUN_140b8d990(*(undefined8 *)(lVar5 + 8),
                        "providers\\implementations\\storemgmt\\file_store.c",0x72);
          if (*(int *)(lVar5 + 0x10) != 1) {
            FUN_140c2b440(*(undefined8 *)(lVar5 + 0x20));
            FUN_140b8d990(*(undefined8 *)(lVar5 + 0x30),
                          "providers\\implementations\\storemgmt\\file_store.c",0x75);
            FUN_140b8d990(*(undefined8 *)(lVar5 + 0x28),
                          "providers\\implementations\\storemgmt\\file_store.c",0x76);
          }
          FUN_140b8d990(lVar5,"providers\\implementations\\storemgmt\\file_store.c",0x78);
        }
      }
    }
  }
  else {
    lVar7 = calling_fopens_s(lVar7,&DAT_1413a64f4);
    if (lVar7 != 0) {
      lVar5 = FUN_140d6ff80(0,param_2,param_1);
      if (lVar5 != 0) {
        *(longlong *)(lVar5 + 0x18) = lVar7;
        goto LAB_140d6fa68;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\storemgmt\\file_store.c",0x9d,"file_open_stream");
      FUN_140b91cc0(0x39,0x80039,0);
    }
    FUN_140b745e0(lVar7);
  }
LAB_140d6fa68:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_b8);
}

