/**
 * Function: action_d_state_d_names_values
 * Address:  140c054e0
 * Signature: undefined action_d_state_d_names_values(void)
 * Body size: 1899 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong action_d_state_d_names_values(uint param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  size_t sVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar15;
  undefined1 local_58 [48];
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar5 = FUN_140c05330();
  uVar11 = uVar5 & 0xffffffff;
  if ((int)uVar5 < 1) {
    return uVar5;
  }
  switch(param_1) {
  case 0:
  case 8:
    uVar11 = (ulonglong)*(uint *)((longlong)param_3 + 0x1c);
  case 7:
    if (param_1 == 7) {
      if (*(int *)(param_3 + 1) != 2) {
        if (*(int *)(param_3 + 1) != 1) {
          return uVar11;
        }
        if (*(int *)(param_2 + 0x30) != 7) {
          return uVar11;
        }
        param_3[4] = param_3 + 0x10;
        return uVar11;
      }
      iVar4 = *(int *)(param_2 + 0x30);
      if (iVar4 == 1) {
        uVar5 = FUN_140b93920(param_3[6],(longlong)param_3 + 0x1c);
        return uVar5;
      }
      if (iVar4 == 2) {
        if (param_3[4] == 0) {
          iVar4 = FUN_140b93940(param_3[6],(longlong)param_3 + 0x1c);
          return (ulonglong)(iVar4 != 0);
        }
        iVar4 = FUN_140b94bf0();
        if (iVar4 != 0) {
          return 1;
        }
      }
      else {
        if (iVar4 == 4) {
          uVar5 = FUN_140b94f00(param_3[6],param_3[4],param_3[5]);
          return uVar5;
        }
        if (iVar4 == 5) {
          uVar5 = FUN_140b95120(param_3[6],param_3 + 4,param_3[5],(longlong)param_3 + 0x1c);
          return uVar5;
        }
        if (iVar4 == 7) {
          uVar5 = FUN_140b95350(param_3[6],param_3[4],param_3 + 5);
          return uVar5;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\ctrl_params_translate.c",0x286,"default_fixup_args");
        FUN_140b91cc0(6,0x8010c,"[action:%d, state:%d] unknown OSSL_PARAM data type %d",
                      *(undefined4 *)(param_3 + 1),CONCAT44(uVar14,7),
                      CONCAT44(uVar15,*(undefined4 *)(param_2 + 0x30)));
      }
    }
    else {
      if ((param_1 & 0xfffffff7) != 0) {
        return uVar11;
      }
      if (*(int *)(param_3 + 1) != 1) {
        return uVar11;
      }
      iVar4 = *(int *)(param_2 + 0x30);
      lVar9 = (longlong)*(int *)((longlong)param_3 + 0x1c);
      if (param_1 == 0) {
        lVar9 = param_3[5];
      }
      if (iVar4 == 0) {
        if (*(longlong *)(param_2 + 0x38) == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\ctrl_params_translate.c",0x298,"default_fixup_args");
          FUN_140b91cc0(6,0xc0103,0);
          return 0;
        }
        iVar4 = *(int *)(param_3[6] + 8);
      }
      if (iVar4 == 1) {
        uVar5 = FUN_140b94350(param_3[6],(longlong)*(int *)((longlong)param_3 + 0x1c),lVar9);
        return uVar5;
      }
      if (iVar4 == 2) {
        if (param_3[4] == 0) {
          uVar5 = FUN_140b94370(param_3[6]);
          return uVar5;
        }
        uVar5 = FUN_140b94cf0(param_3[6],param_3[4]);
        return uVar5;
      }
      if (iVar4 == 4) {
        uVar5 = FUN_140b95090(param_3[6],param_3[4]);
        return uVar5;
      }
      if (iVar4 == 5) {
        uVar5 = FUN_140b95150(param_3[6],param_3[4]);
        return uVar5;
      }
      if (iVar4 == 7) {
        uVar5 = FUN_140b95400(param_3[6],*(undefined8 *)param_3[4]);
        return uVar5;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\ctrl_params_translate.c",0x2b4,"default_fixup_args");
      FUN_140b91cc0(6,0x8010c,"[action:%d, state:%d] unsupported OSSL_PARAM data type %d",
                    *(undefined4 *)(param_3 + 1),CONCAT44(uVar14,param_1),
                    CONCAT44(uVar15,*(undefined4 *)(param_2 + 0x30)));
    }
    return 0;
  case 1:
    if (*(int *)(param_3 + 1) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\ctrl_params_translate.c",0x1a0,"default_fixup_args");
      uVar10 = 0x8010c;
      uVar7 = CONCAT44(uVar14,1);
      goto LAB_140c05c0e;
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      puVar2 = (uint *)*param_3;
      uVar1 = *puVar2;
      if ((((((uVar1 & 0xc1f0) != 0) && (*(longlong *)(puVar2 + 0xc) == 0)) ||
           (((uVar1 >> 0xb & 1) != 0 && (*(longlong *)(puVar2 + 0xc) == 0)))) ||
          (((uVar1 & 0x600) != 0 && (*(longlong *)(puVar2 + 0xc) == 0)))) ||
         (((uVar1 & 0x3000) != 0 && (*(longlong *)(puVar2 + 0xc) == 0)))) {
LAB_140c055e0:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\ctrl_params_translate.c",0x1b6,"default_fixup_args");
        FUN_140b91cc0(6,0x93,0);
        return 0xfffffffe;
      }
      puVar2 = (uint *)*param_3;
      if ((((*puVar2 & 6) != 0) && (*(longlong *)(puVar2 + 10) == 0)) ||
         (((*puVar2 & 8) != 0 && (*(longlong *)(puVar2 + 10) == 0)))) goto LAB_140c055e0;
    }
    switch(*(undefined4 *)(param_2 + 0x30)) {
    case 1:
      puVar6 = (undefined8 *)
               FUN_140b935b0(local_58,*(undefined8 *)(param_2 + 0x28),(longlong)param_3 + 0x1c);
      break;
    case 2:
      if (param_3[4] == 0) {
        puVar6 = (undefined8 *)
                 FUN_140b93610(local_58,*(undefined8 *)(param_2 + 0x28),(longlong)param_3 + 0x1c);
        break;
      }
      if (*(int *)(param_3 + 1) == 2) {
        iVar4 = FUN_140bfc870();
        lVar9 = (longlong)((int)(iVar4 + 7 + (iVar4 + 7 >> 0x1f & 7U)) >> 3);
        param_3[0x11] = lVar9;
        lVar9 = FUN_140b8d8d0(lVar9,"crypto\\evp\\ctrl_params_translate.c",0x1d1);
        param_3[0xf] = lVar9;
        if (lVar9 == 0) {
          return 0;
        }
        iVar4 = FUN_140bfcd10(param_3[4],lVar9,*(undefined4 *)(param_3 + 0x11));
        if (iVar4 < 0) {
          FUN_140b8d990(param_3[0xf],"crypto\\evp\\ctrl_params_translate.c",0x1d5);
          param_3[0xf] = 0;
          return 0;
        }
        puVar6 = (undefined8 *)
                 FUN_140b93730(local_58,*(undefined8 *)(param_2 + 0x28),param_3[0xf],param_3[0x11]);
        break;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\ctrl_params_translate.c",0x1e2,"default_fixup_args");
      pcVar12 = "[action:%d, state:%d] trying to get a BIGNUM via ctrl call";
      uVar7 = CONCAT44(uVar14,1);
      uVar10 = 0x8010c;
      goto LAB_140c05c15;
    default:
      goto LAB_140c05c42;
    case 4:
      puVar6 = (undefined8 *)
               FUN_140b93780(local_58,*(undefined8 *)(param_2 + 0x28),param_3[4],
                             (longlong)*(int *)((longlong)param_3 + 0x1c));
      break;
    case 5:
      puVar6 = (undefined8 *)
               FUN_140b93860(local_58,*(undefined8 *)(param_2 + 0x28),param_3[4],
                             (longlong)*(int *)((longlong)param_3 + 0x1c));
      break;
    case 6:
      puVar6 = (undefined8 *)
               FUN_140b93810(local_58,*(undefined8 *)(param_2 + 0x28),param_3[4],
                             (longlong)*(int *)((longlong)param_3 + 0x1c));
      break;
    case 7:
      puVar6 = (undefined8 *)
               FUN_140b938b0(local_58,*(undefined8 *)(param_2 + 0x28),param_3[4],
                             (longlong)*(int *)((longlong)param_3 + 0x1c));
    }
    uVar10 = puVar6[1];
    puVar13 = (undefined8 *)param_3[6];
    *puVar13 = *puVar6;
    puVar13[1] = uVar10;
    uVar10 = puVar6[3];
    puVar13[2] = puVar6[2];
    puVar13[3] = uVar10;
    puVar13[4] = puVar6[4];
    break;
  case 2:
    if ((*(int *)(param_3 + 1) == 1) &&
       ((((iVar4 = *(int *)(param_2 + 0x30), iVar4 == 4 || (iVar4 == 5)) || (iVar4 == 6)) ||
        (iVar4 == 7)))) {
      *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)(param_3[6] + 0x20);
      return uVar11;
    }
    break;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\ctrl_params_translate.c",399,"default_fixup_args");
    uVar10 = 0xc0101;
    uVar7 = CONCAT44(uVar14,param_1);
LAB_140c05c0e:
    pcVar12 = "[action:%d, state:%d]";
LAB_140c05c15:
    iVar4 = *(int *)(param_3 + 1);
LAB_140c05c19:
    FUN_140b91cc0(6,uVar10,pcVar12,iVar4,uVar7);
    return 0;
  case 4:
    puVar6 = (undefined8 *)param_3[2];
    uVar10 = param_3[4];
    local_res20[0] = 0;
    if (*(int *)(param_3 + 1) == 2) {
      puVar13 = puVar6;
      if (param_2 != 0) {
        puVar3 = *(undefined8 **)(param_2 + 0x28);
        param_3[2] = puVar3;
        puVar13 = puVar3;
        if (*(int *)(param_3 + 3) != 0) {
          puVar13 = param_3 + 8;
          *(undefined4 *)puVar13 = 0x786568;
          uVar5 = FUN_140b8c1e0(puVar13,puVar3,0x32);
          if (uVar5 < 4) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\ctrl_params_translate.c",0x238,"default_fixup_args");
            FUN_140b91cc0(6,0xc0103,0);
            return 0xffffffff;
          }
        }
      }
      uVar7 = FUN_140b7baf0(*param_3);
      sVar8 = strlen((char *)param_3[4]);
      iVar4 = FUN_140c93e00(param_3[6],uVar7,puVar13,param_3[4],sVar8,local_res20);
      uVar14 = (undefined4)(sVar8 >> 0x20);
      if (iVar4 == 0) {
        if (local_res20[0] != 0) {
          return 0;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\ctrl_params_translate.c",0x245,"default_fixup_args");
        FUN_140b91cc0(6,0x93,"[action:%d, state:%d] name=%s, value=%s",*(undefined4 *)(param_3 + 1),
                      CONCAT44(uVar14,4),puVar6,uVar10);
        return 0xfffffffe;
      }
      param_3[0xf] = *(undefined8 *)(param_3[6] + 0x10);
      param_3[0x11] = *(undefined8 *)(param_3[6] + 0x18);
      return uVar11;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\ctrl_params_translate.c",0x227,"default_fixup_args");
    iVar4 = *(int *)(param_3 + 1);
    pcVar12 = "[action:%d, state:%d] only setting allowed";
    uVar10 = 0x93;
    uVar7 = CONCAT44(uVar14,4);
    goto LAB_140c05c19;
  case 5:
    break;
  }
LAB_140c05c42:
  return uVar11;
}

