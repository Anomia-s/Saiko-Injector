/**
 * Function: does_not_take_a_form
 * Address:  1406ab6d0
 * Signature: undefined does_not_take_a_form(void)
 * Body size: 1749 bytes
 */


undefined8 does_not_take_a_form(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  size_t sVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  int iVar11;
  byte *pbVar12;
  double dVar13;
  undefined1 auStack_4f8 [40];
  undefined8 local_4d0;
  longlong local_4c8;
  ulonglong local_4c0;
  char local_4b8 [512];
  char local_2b8;
  byte local_2b7 [39];
  byte *local_290;
  byte *local_288;
  ulonglong local_70;
  
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_4f8;
  iVar1 = FUN_1404731e0();
  iVar11 = 1;
  pbVar3 = (byte *)FUN_1406b7610(param_1,1,&local_4c8);
  local_4d0 = param_1;
  FUN_1406b80b0(param_1,&local_290);
  if (local_4c8 != 0) {
    pbVar12 = pbVar3 + local_4c8;
    do {
      bVar10 = *pbVar3;
      if (bVar10 != 0x25) {
        if (local_288 <= local_290) {
          buffer_too_large(&local_290,1);
          bVar10 = *pbVar3;
        }
        pbVar3 = pbVar3 + 1;
        *local_290 = bVar10;
LAB_1406ab791:
        local_290 = local_290 + 1;
        goto LAB_1406ab793;
      }
      bVar10 = pbVar3[1];
      if (bVar10 == 0x2a) {
        if (iVar1 <= iVar11) {
LAB_1406abd63:
                    /* WARNING: Subroutine does not return */
          FUN_1406b7390(local_4d0,"missing argument #%d",iVar11 + 1);
        }
        pbVar3 = pbVar3 + 2;
        FUN_1406b8500(&local_290,iVar11 + 1);
        iVar11 = iVar11 + 1;
        goto LAB_1406ab793;
      }
      pbVar8 = pbVar3 + 1;
      if (bVar10 == 0x25) {
        bVar10 = 0x25;
        if (local_288 <= local_290) {
          buffer_too_large(&local_290,1);
          bVar10 = *pbVar8;
        }
        pbVar3 = pbVar3 + 2;
        *local_290 = bVar10;
        goto LAB_1406ab791;
      }
      iVar2 = iVar11 + 1;
      if (iVar1 <= iVar11) goto LAB_1406abd63;
      pbVar3 = pbVar8;
      if (bVar10 == 0) {
        uVar4 = 0;
      }
      else {
        do {
          if ((0x3f < bVar10) || ((1L << (bVar10 & 0x3f) & 0x1280900000001U) == 0))
          goto LAB_1406ab8a1;
          bVar10 = pbVar3[1];
          pbVar3 = pbVar3 + 1;
        } while (bVar10 != 0);
        bVar10 = 0;
LAB_1406ab8a1:
        uVar4 = (ulonglong)((byte)(bVar10 - 0x30) < 10);
        if (5 < (ulonglong)((longlong)pbVar3 - (longlong)pbVar8)) {
                    /* WARNING: Subroutine does not return */
          FUN_1406b7390(local_4d0,"invalid format (repeated flags)");
        }
      }
      pbVar3 = pbVar3 + ((byte)(pbVar3[uVar4] - 0x30) < 10) + uVar4;
      bVar10 = *pbVar3;
      if (bVar10 == 0x2e) {
        pbVar9 = pbVar3 + 2;
        if (9 < (byte)(pbVar3[1] - 0x30)) {
          pbVar9 = pbVar3 + 1;
        }
        pbVar3 = pbVar9 + ((byte)(pbVar3[(ulonglong)((byte)(pbVar3[1] - 0x30) < 10) + 1] - 0x30) <
                          10);
        bVar10 = *pbVar3;
      }
      if ((byte)(bVar10 - 0x30) < 10) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(local_4d0,"invalid format (width or precision too long)");
      }
      local_2b8 = '%';
      pbVar9 = pbVar3 + (1 - (longlong)pbVar8);
      strncpy((char *)local_2b7,(char *)pbVar8,(size_t)pbVar9);
      pbVar3[(longlong)(local_2b7 + (1 - (longlong)pbVar8))] = 0;
      bVar10 = *pbVar3;
      if (0x4e < bVar10 - 0x2a) {
switchD_1406ab97a_caseD_2b:
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(local_4d0,"invalid option \'%%%c\' to \'format\'",(int)(char)bVar10);
      }
      pbVar3 = pbVar3 + 1;
      iVar11 = iVar2;
      switch((uint)bVar10) {
      case 0x2a:
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(local_4d0,"\'%%*\' does not take a form");
      default:
        goto switchD_1406ab97a_caseD_2b;
      case 0x45:
      case 0x47:
      case 0x65:
      case 0x66:
      case 0x67:
        uVar6 = FUN_1406b7730(local_4d0,iVar2);
        FUN_1400a3c00(local_4b8,0x200,&local_2b8,uVar6);
        goto LAB_1406aba4c;
      case 0x58:
      case 0x6f:
      case 0x75:
      case 0x78:
        dVar13 = (double)FUN_1406b7730(local_4d0,iVar2);
        (local_2b7 + (longlong)(pbVar9 + -1))[0] = 0x6c;
        (local_2b7 + (longlong)(pbVar9 + -1))[1] = 0x6c;
        pbVar9[(longlong)(local_2b7 + 1)] = bVar10;
        pbVar9[(longlong)(local_2b7 + 2)] = 0;
        uVar4 = (longlong)dVar13;
        if (0.0 <= dVar13) {
          uVar4 = (longlong)(dVar13 - 9.223372036854776e+18) & (longlong)dVar13 >> 0x3f |
                  (longlong)dVar13;
        }
        goto LAB_1406aba2f;
      case 99:
        dVar13 = (double)FUN_1406b7730(local_4d0,iVar2);
        iVar2 = FUN_1400a3c00(local_4b8,0x200,&local_2b8,(int)dVar13);
        buffer_too_large(&local_290,local_4b8,(longlong)iVar2);
        break;
      case 100:
      case 0x69:
        (local_2b7 + (longlong)(pbVar9 + -1))[0] = 0x6c;
        (local_2b7 + (longlong)(pbVar9 + -1))[1] = 0x6c;
        pbVar9[(longlong)(local_2b7 + 1)] = bVar10;
        pbVar9[(longlong)(local_2b7 + 2)] = 0;
        dVar13 = (double)FUN_1406b7730(local_4d0,iVar2);
        uVar4 = (longlong)dVar13;
LAB_1406aba2f:
        FUN_1400a3c00(local_4b8,0x200,&local_2b8,uVar4);
LAB_1406aba4c:
        sVar5 = strlen(local_4b8);
        buffer_too_large(&local_290,local_4b8,sVar5);
        break;
      case 0x71:
        pbVar8 = (byte *)FUN_1406b7610(local_4d0,iVar2,&local_4c0);
        buffer_too_large(&local_290,local_4c0 + 2);
        if (local_288 <= local_290) {
          buffer_too_large(&local_290,1);
        }
        *local_290 = 0x22;
        local_290 = local_290 + 1;
        uVar4 = local_4c0;
        while (local_4c0 = uVar4 - 1, uVar4 != 0) {
          bVar10 = *pbVar8;
          switch(bVar10) {
          case 0:
            buffer_too_large(&local_290,&DAT_14137a8c4,4);
            break;
          case 10:
          case 0x22:
switchD_1406abc10_caseD_a:
            pbVar9 = local_290;
            if (local_288 <= local_290) {
              buffer_too_large(&local_290,1);
              pbVar9 = local_290;
            }
            local_290 = pbVar9 + 1;
            *pbVar9 = 0x5c;
            if (local_288 <= local_290) {
              buffer_too_large(&local_290,1);
            }
            *local_290 = *pbVar8;
            local_290 = local_290 + 1;
            break;
          case 0xd:
            buffer_too_large(&local_290,&DAT_14133dda5,2);
            break;
          default:
            if (bVar10 == 0x5c) goto switchD_1406abc10_caseD_a;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xb:
          case 0xc:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
            if (local_288 <= local_290) {
              buffer_too_large(&local_290,1);
              bVar10 = *pbVar8;
            }
            *local_290 = bVar10;
            local_290 = local_290 + 1;
          }
          pbVar8 = pbVar8 + 1;
          uVar4 = local_4c0;
        }
        if (local_288 <= local_290) {
          buffer_too_large(&local_290,1);
        }
        *local_290 = 0x22;
        local_290 = local_290 + 1;
        break;
      case 0x73:
        uVar6 = FUN_1406b7610(local_4d0,iVar2,&local_4c0);
        uVar4 = local_4c0;
        if ((local_2b7[1] != '\0') &&
           (pcVar7 = strchr(&local_2b8,0x2e), pcVar7 != (char *)0x0 || uVar4 < 100)) {
          FUN_1400a3c00(local_4b8,0x200,&local_2b8,uVar6);
          goto LAB_1406aba4c;
        }
        buffer_too_large(&local_290,uVar6,uVar4);
      }
LAB_1406ab793:
    } while (pbVar3 < pbVar12);
  }
  FUN_1406b82d0(&local_290);
  if (DAT_1414ef3c0 != (local_70 ^ (ulonglong)auStack_4f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_70 ^ (ulonglong)auStack_4f8);
  }
  return 1;
}

