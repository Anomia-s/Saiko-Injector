/**
 * Function: prompt_info_data_type_incorrect
 * Address:  140c71680
 * Signature: undefined prompt_info_data_type_incorrect(void)
 * Body size: 584 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int prompt_info_data_type_incorrect
              (void *param_1,ulonglong param_2,ulonglong *param_3,undefined8 param_4,
              undefined4 param_5,int *param_6)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulonglong _Size;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar10;
  undefined8 uVar9;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar7 = 0;
  if (*param_6 == 1) {
    pvVar4 = *(void **)(param_6 + 2);
    _Size = *(ulonglong *)(param_6 + 4);
    if (pvVar4 != (void *)0x0) {
LAB_140c71703:
      if (param_2 < _Size) {
        _Size = param_2;
      }
      memcpy(param_1,pvVar4,_Size);
      *param_3 = _Size;
      return 1;
    }
  }
  else if (((*(byte *)(param_6 + 6) & 1) != 0) &&
          (pvVar4 = *(void **)(param_6 + 8), pvVar4 != (void *)0x0)) {
    _Size = *(ulonglong *)(param_6 + 10);
    goto LAB_140c71703;
  }
  if (*param_6 == 3) {
    uVar5 = *(undefined8 *)(param_6 + 4);
    iVar2 = (**(code **)(param_6 + 2))(param_1,param_2,param_3,param_4,uVar5);
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
    goto LAB_140c717fc;
  }
  lVar3 = FUN_140b93540(param_4,&DAT_1413a5edc);
  lVar8 = lVar7;
  if (lVar3 == 0) {
LAB_140c71766:
    if (*param_6 == 2) {
      lVar3 = pem_password_callback_wrapper(*(undefined8 *)(param_6 + 2),param_5);
      uVar5 = *(undefined8 *)(param_6 + 4);
      lVar7 = lVar3;
      if (lVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\passphrase.c",0x10a,"ossl_pw_get_passphrase");
        pcVar6 = (char *)0x0;
        uVar5 = 0x80028;
        goto LAB_140c7189c;
      }
LAB_140c717d2:
      uVar9 = CONCAT44(uVar10,param_5);
      iVar2 = FUN_140c71990(param_1,param_2,param_3,lVar8,uVar9,lVar3,uVar5);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_140ce0390(lVar7);
LAB_140c717fc:
      if (iVar2 == 0) {
        return 0;
      }
      if ((*(byte *)(param_6 + 6) & 1) != 0) {
        pvVar4 = *(void **)(param_6 + 8);
        puVar1 = (ulonglong *)(param_6 + 10);
        if ((pvVar4 == (void *)0x0) || (*puVar1 < *param_3)) {
          pvVar4 = (void *)FUN_140b8dba0(pvVar4,*puVar1,*param_3 + 1,"crypto\\passphrase.c",
                                         CONCAT44(uVar10,0x124));
          if (pvVar4 == (void *)0x0) {
            FUN_14046e980(param_1,*param_3);
            return 0;
          }
          *(void **)(param_6 + 8) = pvVar4;
        }
        memcpy(pvVar4,param_1,*param_3);
        *(undefined1 *)(*param_3 + *(longlong *)(param_6 + 8)) = 0;
        *puVar1 = *param_3;
        return iVar2;
      }
      return iVar2;
    }
    if (*param_6 == 4) {
      lVar3 = *(longlong *)(param_6 + 2);
      uVar5 = *(undefined8 *)(param_6 + 4);
      if (lVar3 != 0) goto LAB_140c717d2;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\passphrase.c",0x113,"ossl_pw_get_passphrase");
    pcVar6 = "No password method specified";
  }
  else {
    if (*(int *)(lVar3 + 8) == 4) {
      lVar8 = *(longlong *)(lVar3 + 0x10);
      goto LAB_140c71766;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\passphrase.c",0xfa,"ossl_pw_get_passphrase");
    pcVar6 = "Prompt info data type incorrect";
  }
  uVar5 = 0x80106;
LAB_140c7189c:
  FUN_140b91cc0(0xf,uVar5,pcVar6);
  return 0;
}

