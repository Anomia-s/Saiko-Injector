/**
 * Function: unexpected_did_you_mean_not
 * Address:  14078ddf0
 * Signature: undefined unexpected_did_you_mean_not(void)
 * Body size: 1176 bytes
 */


AstExprUnary *
unexpected_did_you_mean_not(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  AstExprUnary *pAVar2;
  uint uVar3;
  longlong lVar4;
  AstExprUnary *this;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  AstExprUnary *pAVar9;
  uint uVar10;
  undefined4 uVar11;
  AstExprUnary *pAVar12;
  undefined1 auStackY_a8 [32];
  AstExprUnary *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_a8;
  iVar1 = *(int *)(param_1 + 0x114);
  uVar3 = iVar1 + 1;
  *(uint *)(param_1 + 0x114) = uVar3;
  if (DAT_141700390 < uVar3) {
                    /* WARNING: Subroutine does not return */
    Luau::ParseError::ParseError_Constructor_or_Destructor
              ((undefined8 *)(param_1 + 0x84),
               "Exceeded allowed recursion depth; simplify your %s to make the code compile",
               "expression",param_4);
  }
  pAVar2 = *(AstExprUnary **)(param_1 + 0x84);
  iVar8 = *(int *)(param_1 + 0x80);
  pAVar9 = pAVar2;
  if (iVar8 < 0x2d) {
    if (iVar8 == 0x21) {
      local_58 = *(AstExprUnary **)(param_1 + 0x84);
      uStack_50 = *(undefined8 *)(param_1 + 0x8c);
      FUN_14078f3b0(param_1,&local_58,"Unexpected \'!\'; did you mean \'not\'?");
      uVar11 = 0;
      pAVar9 = *(AstExprUnary **)(param_1 + 0x84);
      goto LAB_14078deb4;
    }
    if (iVar8 == 0x23) {
      uVar11 = 2;
      goto LAB_14078deb4;
    }
LAB_14078de73:
    this = (AstExprUnary *)FUN_140799720(param_1);
  }
  else {
    if (iVar8 == 0x2d) {
      uVar11 = 1;
    }
    else {
      if (iVar8 != 0x130) goto LAB_14078de73;
      uVar11 = 0;
    }
LAB_14078deb4:
    FUN_140787100(param_1);
    lVar4 = unexpected_did_you_mean_not(param_1,8);
    uStack_50 = *(undefined8 *)(lVar4 + 0x14);
    local_58 = pAVar2;
    this = (AstExprUnary *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x30);
    Luau::AstExprUnary::AstExprUnary(this,&local_58,uVar11,lVar4);
    if (*(char *)(param_1 + 0x58) == '\x01') {
      uVar5 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0xc);
      FUN_14079ef90(uVar5,pAVar9);
      local_58 = this;
      puVar6 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_58);
      *puVar6 = uVar5;
    }
  }
  uVar3 = 1;
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0x25:
    pAVar9 = (AstExprUnary *)0x5;
    break;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2e:
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
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
switchD_14078df67_caseD_26:
    unexpected_did_you_mean_or(param_1,&local_58,&DAT_14124e2c0,param_2);
    uVar3 = (uint)((ulonglong)local_58 >> 0x20) & 1;
    pAVar9 = local_58;
    break;
  case 0x2a:
    pAVar9 = (AstExprUnary *)0x2;
    break;
  case 0x2b:
    pAVar9 = (AstExprUnary *)0x0;
    break;
  case 0x2d:
    pAVar9 = (AstExprUnary *)0x1;
    break;
  case 0x2f:
    pAVar9 = (AstExprUnary *)0x3;
    break;
  case 0x3c:
    pAVar9 = (AstExprUnary *)0xa;
    break;
  case 0x3e:
    pAVar9 = (AstExprUnary *)0xc;
    break;
  case 0x5e:
    pAVar9 = (AstExprUnary *)0x6;
    break;
  default:
    switch(*(undefined4 *)(param_1 + 0x80)) {
    case 0x101:
      pAVar9 = (AstExprUnary *)0x9;
      break;
    case 0x102:
      pAVar9 = (AstExprUnary *)0xb;
      break;
    case 0x103:
      pAVar9 = (AstExprUnary *)&DAT_0000000d;
      break;
    case 0x104:
      pAVar9 = (AstExprUnary *)&DAT_00000008;
      break;
    case 0x105:
      pAVar9 = (AstExprUnary *)&DAT_00000007;
      break;
    default:
      goto switchD_14078df67_caseD_26;
    case 0x109:
      pAVar9 = (AstExprUnary *)0x4;
      break;
    case 0x123:
      pAVar9 = (AstExprUnary *)0xe;
      break;
    case 0x131:
      pAVar9 = (AstExprUnary *)0xf;
    }
  }
  do {
    pAVar12 = this;
    if ((char)uVar3 == '\0') {
LAB_14078e21b:
      *(int *)(param_1 + 0x114) = iVar1;
      if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_a8)) {
        return pAVar12;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_48 ^ (ulonglong)auStackY_a8);
    }
    iVar8 = (int)pAVar9;
    if ((byte)(&DAT_14124e2c0)[(longlong)iVar8 * 2] <= param_2) goto LAB_14078e21b;
    uVar5 = *(undefined8 *)(param_1 + 0x84);
    FUN_140787100(param_1);
    lVar4 = unexpected_did_you_mean_not(param_1,(&UNK_14124e2c1)[(longlong)iVar8 * 2]);
    uStack_50 = *(undefined8 *)(lVar4 + 0x14);
    local_58 = pAVar2;
    this = (AstExprUnary *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
    Luau::AstExprBinary::AstExprBinary((AstExprBinary *)this,&local_58,iVar8,pAVar12,lVar4);
    if (*(char *)(param_1 + 0x58) == '\x01') {
      uVar7 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0xc);
      FUN_14079ef90(uVar7,uVar5);
      local_58 = this;
      puVar6 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_58);
      *puVar6 = uVar7;
    }
    uVar3 = 1;
    switch(*(undefined4 *)(param_1 + 0x80)) {
    case 0x25:
      pAVar9 = (AstExprUnary *)0x5;
      break;
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2c:
    case 0x2e:
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
    case 0x3d:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
switchD_14078e13c_caseD_26:
      pAVar12 = (AstExprUnary *)(ulonglong)param_2;
      unexpected_did_you_mean_or(param_1,&local_58,&DAT_14124e2c0);
      uVar3 = (uint)((ulonglong)local_58 >> 0x20) & 1;
      pAVar9 = local_58;
      break;
    case 0x2a:
      pAVar9 = (AstExprUnary *)0x2;
      break;
    case 0x2b:
      pAVar9 = (AstExprUnary *)0x0;
      break;
    case 0x2d:
      pAVar9 = (AstExprUnary *)0x1;
      break;
    case 0x2f:
      pAVar9 = (AstExprUnary *)0x3;
      break;
    case 0x3c:
      pAVar9 = (AstExprUnary *)0xa;
      break;
    case 0x3e:
      pAVar9 = (AstExprUnary *)0xc;
      break;
    case 0x5e:
      pAVar9 = (AstExprUnary *)0x6;
      break;
    default:
      switch(*(undefined4 *)(param_1 + 0x80)) {
      case 0x101:
        pAVar9 = (AstExprUnary *)0x9;
        break;
      case 0x102:
        pAVar9 = (AstExprUnary *)0xb;
        break;
      case 0x103:
        pAVar9 = (AstExprUnary *)&DAT_0000000d;
        break;
      case 0x104:
        pAVar9 = (AstExprUnary *)&DAT_00000008;
        break;
      case 0x105:
        pAVar9 = (AstExprUnary *)&DAT_00000007;
        break;
      default:
        goto switchD_14078e13c_caseD_26;
      case 0x109:
        pAVar9 = (AstExprUnary *)0x4;
        break;
      case 0x123:
        pAVar9 = (AstExprUnary *)0xe;
        break;
      case 0x131:
        pAVar9 = (AstExprUnary *)0xf;
      }
    }
    uVar10 = *(int *)(param_1 + 0x114) + 1;
    *(uint *)(param_1 + 0x114) = uVar10;
    if (DAT_141700390 < uVar10) {
                    /* WARNING: Subroutine does not return */
      Luau::ParseError::ParseError_Constructor_or_Destructor
                ((undefined8 *)(param_1 + 0x84),
                 "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                 "expression",pAVar12);
    }
  } while( true );
}

