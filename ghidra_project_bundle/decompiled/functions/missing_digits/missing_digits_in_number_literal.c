/**
 * Function: missing_digits_in_number_literal
 * Address:  1405d9090
 * Signature: undefined missing_digits_in_number_literal(void)
 * Body size: 2518 bytes
 */


byte * missing_digits_in_number_literal
                 (undefined8 *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  byte *pbVar14;
  bool bVar15;
  char *pcVar16;
  bool bVar17;
  
  if (param_2 == 0) {
    if (param_4 != '\0') {
      return (byte *)0x0;
    }
    uVar11 = *param_1;
    lVar12 = param_1[1];
    pcVar16 = "unexpected end of parser state";
    lVar9 = 0;
    goto LAB_1405d90fb;
  }
  param_1[2] = param_2;
  pbVar8 = (byte *)missing_for_multiline_comment(param_1);
  if (pbVar8 == (byte *)0x0) {
    return (byte *)0x0;
  }
  *(undefined4 *)(param_3 + 1) = 1;
  *param_3 = 0;
  bVar10 = *pbVar8;
  iVar13 = (int)(char)bVar10;
  if (iVar13 == 10) {
    *(undefined4 *)(param_3 + 1) = 10;
    pcVar16 = (char *)missing_for_multiline_comment(param_1,pbVar8 + 1);
    if (pcVar16 == (char *)0x0) {
      return (byte *)0x0;
    }
    return (byte *)(pcVar16 + (*pcVar16 == '\n'));
  }
  if (bVar10 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return pbVar8;
  }
  if (iVar13 - 0x30U < 10) {
LAB_1405d9147:
    *(undefined4 *)(param_3 + 1) = 0x73;
    pbVar14 = (byte *)param_1[3];
    *param_3 = pbVar14;
    bVar10 = *pbVar8;
    if (bVar10 == 0x2d) {
      *pbVar14 = 0x2d;
      pbVar14 = pbVar14 + 1;
      bVar10 = pbVar8[1];
      pbVar8 = pbVar8 + 1;
    }
    if (bVar10 == 0x30) {
      bVar2 = pbVar8[1];
      if (bVar2 < 0x62) {
        if (bVar2 == 0x42) {
LAB_1405d9323:
          *pbVar14 = 0x30;
          pbVar14[1] = pbVar8[1];
          pbVar14 = pbVar14 + 2;
          pbVar8 = pbVar8 + 2;
          bVar17 = false;
          bVar15 = false;
          do {
            bVar10 = *pbVar8;
            if (bVar10 == 0x2e) {
              if ((bVar17) || (bVar17 = true, bVar6 = bVar15, 9 < (int)(char)pbVar8[1] - 0x30U))
              goto LAB_1405d9377;
            }
            else {
              bVar6 = true;
              if ((bVar10 & 0xfe) != 0x30) goto LAB_1405d9377;
            }
            bVar15 = bVar6;
            *pbVar14 = bVar10;
            pbVar14 = pbVar14 + 1;
            pbVar8 = pbVar8 + 1;
          } while( true );
        }
        if (bVar2 == 0x58) {
LAB_1405d92c0:
          *pbVar14 = 0x30;
          pbVar14[1] = pbVar8[1];
          pbVar14 = pbVar14 + 2;
          pbVar8 = pbVar8 + 2;
          bVar17 = false;
          bVar15 = false;
          do {
            bVar10 = *pbVar8;
            if ((char)bVar10 == 0x2e) {
              if ((bVar17) || (bVar17 = true, bVar6 = bVar15, 9 < (int)(char)pbVar8[1] - 0x30U))
              goto LAB_1405d9377;
            }
            else {
              iVar13 = isxdigit((int)(char)bVar10);
              bVar6 = true;
              if (iVar13 == 0) goto LAB_1405d9377;
            }
            bVar15 = bVar6;
            *pbVar14 = bVar10;
            pbVar14 = pbVar14 + 1;
            pbVar8 = pbVar8 + 1;
          } while( true );
        }
      }
      else {
        if (bVar2 == 0x62) goto LAB_1405d9323;
        if (bVar2 == 0x78) goto LAB_1405d92c0;
      }
    }
    bVar5 = 0;
    bVar3 = 0;
    bVar4 = 0;
    bVar2 = 0;
joined_r0x0001405d9199:
    if (bVar10 == 0x2e) goto LAB_1405d91c2;
    do {
      if ((bVar10 & 0xdf) == 0x45) {
        if (!(bool)(~bVar3 & bVar2)) goto LAB_1405d937d;
        bVar2 = pbVar8[1];
        bVar3 = 1;
        if (9 < (int)(char)bVar2 - 0x30U) goto LAB_1405d9224;
        bVar2 = 1;
      }
      else {
        bVar2 = 1;
        if (9 < (int)(char)bVar10 - 0x30U) goto LAB_1405d937d;
      }
      while( true ) {
        *pbVar14 = bVar10;
        pbVar14 = pbVar14 + 1;
        pbVar8 = pbVar8 + 1;
        bVar10 = *pbVar8;
        bVar4 = bVar3;
        if (bVar10 != 0x2e) break;
LAB_1405d91c2:
        if (((bool)(bVar5 | bVar4)) || (9 < (int)(char)pbVar8[1] - 0x30U)) goto LAB_1405d937d;
        bVar5 = 1;
        bVar3 = 0;
      }
    } while( true );
  }
  switch(bVar10) {
  case 0x21:
    if (pbVar8[1] == 0x3d) {
      *param_3 = &DAT_14136c1c4;
      *(undefined4 *)(param_3 + 1) = 0x65;
      return pbVar8 + 2;
    }
switchD_1405d9696_caseD_21:
    *param_3 = &DAT_14139fff1;
    *(undefined4 *)(param_3 + 1) = 0x21;
    pbVar8 = pbVar8 + 1;
    break;
  default:
    goto switchD_1405d928c_caseD_22;
  case 0x25:
    *param_3 = &DAT_14139d643;
    *(undefined4 *)(param_3 + 1) = 0x25;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x26:
switchD_1405d928c_caseD_26:
    if (pbVar8[1] == 0x26) {
      *param_3 = "&&";
      *(undefined4 *)(param_3 + 1) = 0x6a;
      pbVar8 = pbVar8 + 2;
    }
    else {
      *param_3 = "&";
      *(undefined4 *)(param_3 + 1) = 0x26;
      pbVar8 = pbVar8 + 1;
    }
    break;
  case 0x28:
    *param_3 = &DAT_14139c234;
    *(undefined4 *)(param_3 + 1) = 0x28;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x29:
    *param_3 = ")";
    *(undefined4 *)(param_3 + 1) = 0x29;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x2a:
    if (pbVar8[1] == 0x3d) {
      *param_3 = &DAT_14136c1c1;
      *(undefined4 *)(param_3 + 1) = 0x89;
      pbVar8 = pbVar8 + 2;
    }
    else {
      *param_3 = "*";
      *(undefined4 *)(param_3 + 1) = 0x2a;
      pbVar8 = pbVar8 + 1;
    }
    break;
  case 0x2b:
    if (pbVar8[1] == 0x3d) {
      *param_3 = &DAT_14136c1be;
      *(undefined4 *)(param_3 + 1) = 0x88;
      pbVar8 = pbVar8 + 2;
    }
    else {
      *param_3 = "+";
      *(undefined4 *)(param_3 + 1) = 0x2b;
      pbVar8 = pbVar8 + 1;
    }
    break;
  case 0x2c:
    *param_3 = &DAT_1413944a3;
    *(undefined4 *)(param_3 + 1) = 0x2c;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x2d:
    if (9 < (int)(char)pbVar8[1] - 0x30U) {
      *param_3 = "-";
      *(undefined4 *)(param_3 + 1) = 0x2d;
      return pbVar8 + 1;
    }
    goto LAB_1405d9147;
  case 0x2e:
    if (pbVar8[1] == 0x2e) {
      *param_3 = "..";
      *(undefined4 *)(param_3 + 1) = 0x6d;
      pbVar8 = pbVar8 + 2;
    }
    else {
      *param_3 = ".";
      *(undefined4 *)(param_3 + 1) = 0x2e;
      pbVar8 = pbVar8 + 1;
    }
    break;
  case 0x2f:
    *param_3 = &DAT_14137ac84;
    *(undefined4 *)(param_3 + 1) = 0x2f;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x3a:
    *param_3 = ":";
    *(undefined4 *)(param_3 + 1) = 0x3a;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x3b:
    *param_3 = ";";
    *(undefined4 *)(param_3 + 1) = 0x3b;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x3c:
    if (pbVar8[1] == 0x3c) {
      *param_3 = &DAT_14136c1d1;
      *(undefined4 *)(param_3 + 1) = 0x6e;
      return pbVar8 + 2;
    }
    if (pbVar8[1] == 0x3d) {
      *param_3 = &DAT_14136c1a3;
      *(undefined4 *)(param_3 + 1) = 0x69;
      return pbVar8 + 2;
    }
    switch(bVar10) {
    case 0x21:
      goto switchD_1405d9696_caseD_21;
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
      break;
    case 0x26:
      goto switchD_1405d928c_caseD_26;
    case 0x3c:
      *param_3 = "<";
      *(undefined4 *)(param_3 + 1) = 0x68;
      return pbVar8 + 1;
    case 0x3d:
      goto switchD_1405d9696_caseD_3d;
    case 0x3e:
      goto switchD_1405d9696_caseD_3e;
    default:
      if (bVar10 == 0x7c) goto switchD_1405d928c_caseD_7c;
      if (bVar10 == 0x7e) goto switchD_1405d928c_caseD_7e;
    }
    goto switchD_1405d928c_caseD_22;
  case 0x3d:
    if (pbVar8[1] == 0x3d) {
      *param_3 = &DAT_14136c1a0;
      *(undefined4 *)(param_3 + 1) = 100;
      return pbVar8 + 2;
    }
switchD_1405d9696_caseD_3d:
    *param_3 = "=";
    *(undefined4 *)(param_3 + 1) = 0x3d;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x3e:
    if (pbVar8[1] == 0x3e) {
      *param_3 = ">>";
      *(undefined4 *)(param_3 + 1) = 0x6f;
      return pbVar8 + 2;
    }
    if (pbVar8[1] == 0x3d) {
      *param_3 = &DAT_14136c199;
      *(undefined4 *)(param_3 + 1) = 0x67;
      return pbVar8 + 2;
    }
switchD_1405d9696_caseD_3e:
    *param_3 = ">";
    *(undefined4 *)(param_3 + 1) = 0x66;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x3f:
    *param_3 = "?";
    *(undefined4 *)(param_3 + 1) = 0x3f;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x40:
    *param_3 = "@";
    *(undefined4 *)(param_3 + 1) = 0x40;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x5b:
    *param_3 = &DAT_141360dfd;
    *(undefined4 *)(param_3 + 1) = 0x5b;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x5d:
    *param_3 = "]";
    *(undefined4 *)(param_3 + 1) = 0x5d;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x7b:
    *param_3 = "{";
    *(undefined4 *)(param_3 + 1) = 0x7b;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x7c:
switchD_1405d928c_caseD_7c:
    if (pbVar8[1] == 0x7c) {
      *param_3 = "||";
      *(undefined4 *)(param_3 + 1) = 0x6b;
      pbVar8 = pbVar8 + 2;
    }
    else {
      *param_3 = "|";
      *(undefined4 *)(param_3 + 1) = 0x7c;
      pbVar8 = pbVar8 + 1;
    }
    break;
  case 0x7d:
    *param_3 = "}";
    *(undefined4 *)(param_3 + 1) = 0x7d;
    pbVar8 = pbVar8 + 1;
    break;
  case 0x7e:
switchD_1405d928c_caseD_7e:
    if (pbVar8[1] == 0x3d) {
      *param_3 = &DAT_14136c15e;
      *(undefined4 *)(param_3 + 1) = 0x6c;
      return pbVar8 + 2;
    }
switchD_1405d928c_caseD_22:
    cVar7 = FUN_1405d9c80(pbVar8,"with");
    if (cVar7 == '\0') {
      cVar7 = FUN_1405d9c80(pbVar8,"using");
      if (cVar7 != '\0') {
        *param_3 = "using";
        *(undefined4 *)(param_3 + 1) = 0x75;
LAB_1405d97b7:
        return pbVar8 + 5;
      }
      cVar7 = FUN_1405d9c80(pbVar8,"template");
      if (cVar7 != '\0') {
        *param_3 = "template";
        *(undefined4 *)(param_3 + 1) = 0x82;
        return pbVar8 + 8;
      }
      cVar7 = FUN_1405d9c80(pbVar8,&DAT_14133ec13);
      if (cVar7 == '\0') {
        cVar7 = FUN_1405d9c80(pbVar8,"const");
        if (cVar7 != '\0') {
          *param_3 = "const";
          *(undefined4 *)(param_3 + 1) = 0x84;
          goto LAB_1405d97b7;
        }
        cVar7 = FUN_1405d9c80(pbVar8,&DAT_14134921c);
        if (cVar7 != '\0') {
          *param_3 = &DAT_14134921c;
          *(undefined4 *)(param_3 + 1) = 0x77;
LAB_1405d9872:
          return pbVar8 + 2;
        }
        cVar7 = FUN_1405d9c80(pbVar8,&DAT_14134bc10);
        if (cVar7 == '\0') {
          cVar7 = FUN_1405d9c80(pbVar8,"for");
          if (cVar7 == '\0') {
            cVar7 = FUN_1405d9c80(pbVar8,"in");
            if (cVar7 != '\0') {
              *param_3 = "in";
              *(undefined4 *)(param_3 + 1) = 0x79;
              goto LAB_1405d9872;
            }
            cVar7 = FUN_1405d9c80(pbVar8,"match");
            if (cVar7 != '\0') {
              *param_3 = "match";
              *(undefined4 *)(param_3 + 1) = 0x85;
              goto LAB_1405d97b7;
            }
            cVar7 = FUN_1405d9c80(pbVar8,"new");
            if (cVar7 == '\0') {
              cVar7 = FUN_1405d9c80(pbVar8,"export");
              if (cVar7 == '\0') {
                cVar7 = FUN_1405d9c80(pbVar8,"module");
                if (cVar7 == '\0') {
                  if (bVar10 == 0x22) {
                    pbVar8 = (byte *)FUN_1405d9f10(param_1,pbVar8,param_3);
                    return pbVar8;
                  }
                  if (bVar10 == 0x60) {
                    pbVar8 = (byte *)FUN_1405da0f0(param_1,pbVar8,param_3);
                    return pbVar8;
                  }
                  if (bVar10 == 0x27) {
                    pbVar8 = (byte *)only_one_char_allowed(param_1,pbVar8,param_3);
                    return pbVar8;
                  }
                  iVar13 = isalpha(iVar13);
                  if ((iVar13 != 0) ||
                     ((bVar10 - 0x23 < 0x3d &&
                      ((0x1000000000000003U >> ((ulonglong)(bVar10 - 0x23) & 0x3f) & 1) != 0)))) {
                    pbVar8 = (byte *)without_in_identifier(param_1,pbVar8,param_3);
                    return pbVar8;
                  }
                  if (param_4 == '\0') {
                    uVar11 = *param_1;
                    lVar12 = param_1[1];
                    lVar9 = (longlong)pbVar8 - lVar12;
                    pcVar16 = "unknown token \'%c\'";
LAB_1405d90fb:
                    FUN_140399a50(uVar11,lVar12,lVar9,pcVar16);
                  }
                  return (byte *)0x0;
                }
                *param_3 = "module";
                *(undefined4 *)(param_3 + 1) = 0x74;
              }
              else {
                *param_3 = "export";
                *(undefined4 *)(param_3 + 1) = 0x87;
              }
              return pbVar8 + 6;
            }
            *param_3 = "new";
            *(undefined4 *)(param_3 + 1) = 0x86;
          }
          else {
            *param_3 = "for";
            *(undefined4 *)(param_3 + 1) = 0x78;
          }
          return pbVar8 + 3;
        }
        *param_3 = &DAT_14134bc10;
        *(undefined4 *)(param_3 + 1) = 0x7a;
      }
      else {
        *param_3 = &DAT_14133ec13;
        *(undefined4 *)(param_3 + 1) = 0x83;
      }
    }
    else {
      *param_3 = "with";
      *(undefined4 *)(param_3 + 1) = 0x76;
    }
    pbVar8 = pbVar8 + 4;
  }
  return pbVar8;
LAB_1405d9377:
  if (bVar15) {
LAB_1405d937d:
    *pbVar14 = 0;
    param_1[3] = pbVar14 + 1;
    return pbVar8;
  }
  uVar11 = *param_1;
  lVar12 = param_1[1];
  lVar9 = (longlong)pbVar8 - lVar12;
  pcVar16 = "missing digits in number literal";
  goto LAB_1405d90fb;
LAB_1405d9224:
  if (((bVar2 != 0x2d) && (bVar2 != 0x2b)) || (9 < (int)(char)pbVar8[2] - 0x30U))
  goto LAB_1405d937d;
  *pbVar14 = bVar10;
  pbVar1 = pbVar8 + 1;
  pbVar8 = pbVar8 + 2;
  pbVar14[1] = *pbVar1;
  pbVar14 = pbVar14 + 2;
  bVar3 = 1;
  bVar4 = 1;
  bVar10 = *pbVar8;
  bVar2 = 1;
  goto joined_r0x0001405d9199;
}

