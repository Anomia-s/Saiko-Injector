/**
 * Function: file_load_dir_entry
 * Address:  140d70470
 * Signature: undefined file_load_dir_entry(void)
 * Body size: 797 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void file_load_dir_entry(longlong param_1,code *param_2,undefined8 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  byte bVar11;
  char *pcVar12;
  byte *pbVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined4 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  char *local_90;
  size_t local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  pcVar8 = (char *)0x0;
  local_c0 = 1;
  local_c8 = &DAT_1413a6260;
  local_b0 = 4;
  local_b8 = &DAT_14130fa58;
  local_a8 = 0xffffffffffffffff;
  local_a0 = &DAT_1413a6588;
  local_98 = 4;
  local_90 = (char *)0x0;
  local_88 = 0;
  local_80 = 0xffffffffffffffff;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  do {
    pcVar2 = *(char **)(param_1 + 0x30);
    if (pcVar2 == (char *)0x0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\storemgmt\\file_store.c",0x2b7,"file_load_dir_entry"
                  );
        FUN_140b91cc0(2,*(undefined4 *)(param_1 + 0x38),0);
      }
      goto LAB_140d7076d;
    }
    if (*pcVar2 != '.') {
      sVar5 = strlen((char *)(param_1 + 0x24));
      if (*(char *)(param_1 + 0x24) == '\0') {
LAB_140d70609:
        pcVar8 = *(char **)(param_1 + 8);
        pcVar2 = *(char **)(param_1 + 0x30);
        cVar3 = '\0';
        pcVar12 = pcVar8;
        if (*pcVar8 != '\0') {
          sVar5 = strlen(pcVar8);
          pcVar12 = pcVar8 + (sVar5 - 1);
          cVar3 = *pcVar12;
        }
        if (cVar3 == '\\') {
          bVar15 = true;
        }
        else {
          bVar15 = *pcVar12 == '/';
        }
        pcVar12 = "/";
        if (bVar15) {
          pcVar12 = "";
        }
        sVar5 = strlen(pcVar2);
        sVar6 = strlen(pcVar12);
        sVar7 = strlen(pcVar8);
        lVar14 = (longlong)((int)sVar7 + 1 + (int)sVar6 + (int)sVar5);
        pcVar8 = (char *)FUN_140b8da80(lVar14,"providers\\implementations\\storemgmt\\file_store.c",
                                       0x25b);
        if (pcVar8 == (char *)0x0) goto LAB_140d7076d;
        FUN_140b8c1e0(pcVar8,*(undefined8 *)(param_1 + 8),lVar14);
        FUN_140b8c1e0(pcVar8,pcVar12,lVar14);
        FUN_140b8c1e0(pcVar8,pcVar2,lVar14);
      }
      else if ((((*(int *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x40) - 5U < 2)) &&
               (iVar4 = FUN_140b8c740(pcVar2,param_1 + 0x24,sVar5), iVar4 == 0)) &&
              (pcVar2[sVar5] == '.')) {
        iVar4 = *(int *)(param_1 + 0x40);
        pbVar13 = (byte *)(pcVar2 + sVar5 + 1);
        bVar11 = *pbVar13;
        if (bVar11 == 0x72) {
          pbVar13 = pbVar13 + 1;
          if ((iVar4 == 0) || (iVar4 == 6)) {
            bVar11 = *pbVar13;
LAB_140d705cf:
            iVar4 = isdigit((uint)bVar11);
            if (iVar4 != 0) {
              iVar4 = isdigit((uint)*pbVar13);
              while (iVar4 != 0) {
                pbVar1 = pbVar13 + 1;
                pbVar13 = pbVar13 + 1;
                iVar4 = isdigit((uint)*pbVar1);
              }
              if (*pbVar13 == 0) goto LAB_140d70609;
            }
          }
        }
        else if (iVar4 != 6) goto LAB_140d705cf;
      }
    }
    uVar9 = FUN_140c3d350(param_1 + 0x18,*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    piVar10 = _errno();
    iVar4 = *piVar10;
    *(int *)(param_1 + 0x38) = iVar4;
    if ((*(longlong *)(param_1 + 0x30) == 0) && (iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
  } while (pcVar8 == (char *)0x0);
  local_90 = pcVar8;
  local_88 = strlen(pcVar8);
  (*param_2)(&local_c8,param_3);
  FUN_140b8d990(pcVar8,"providers\\implementations\\storemgmt\\file_store.c",0x2d6);
LAB_140d7076d:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_e8);
}

