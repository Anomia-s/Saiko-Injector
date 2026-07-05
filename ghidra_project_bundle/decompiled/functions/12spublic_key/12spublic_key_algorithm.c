/**
 * Function: 12spublic_key_algorithm
 * Address:  140b9fab0
 * Signature: undefined 12spublic_key_algorithm(void)
 * Body size: 1592 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 _2spublic_key_algorithm(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar16;
  uint local_48;
  undefined4 uStack_44;
  longlong local_40;
  ulonglong uVar9;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_40 = 0x140b9faca;
  uVar9 = 0;
  uVar11 = 0;
  bVar15 = (param_3 & 0xf0000) != 0x40000;
  uVar8 = 0;
  uVar12 = 10;
  if (bVar15) {
    uVar12 = 0x20;
  }
  uVar14 = 0xc;
  if (bVar15) {
    uVar14 = uVar9;
  }
  local_48 = (uint)uVar14;
  if ((param_4 & 1) == 0) {
    iVar1 = FUN_140b73860(param_1,"Certificate:\n",0xd);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_140b73860(param_1,"    Data:\n",10);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if ((param_4 & 2) == 0) {
    uVar2 = FUN_140b9f260(param_2);
    if (uVar2 < 3) {
      uVar6 = CONCAT44(uVar16,uVar2);
      iVar1 = FUN_140c078a0(param_1,"%8sVersion: %ld (0x%lx)\n",&DAT_1413a2ad6,uVar2 + 1,uVar6);
      uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      iVar1 = FUN_140c078a0(param_1,"%8sVersion: Unknown (%ld)\n",&DAT_1413a2ad6,uVar2);
    }
    if (iVar1 < 1) {
      return 0;
    }
  }
  if ((param_4 & 4) == 0) {
    piVar4 = (int *)FUN_140b74ca0(param_2);
    iVar1 = FUN_140b73860(param_1,"        Serial Number:",0x16);
    if (iVar1 < 1) {
      return 0;
    }
    if (*piVar4 == 0) {
      iVar1 = FUN_140b73bf0(param_1," (Empty)");
    }
    else {
      FUN_140b932f0();
      iVar3 = FUN_140bd8560(&local_40,piVar4);
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      iVar1 = piVar4[1];
      if (iVar3 == 0) {
        pcVar5 = "";
        if (iVar1 == 0x102) {
          pcVar5 = " (Negative)";
        }
        iVar1 = FUN_140c078a0(param_1,"\n%*s%s",0xc,&DAT_1413a2ad6,pcVar5);
        if (iVar1 < 1) {
          return 0;
        }
        uVar13 = uVar9;
        if (0 < *piVar4 + -1) {
          do {
            iVar1 = FUN_140c078a0(param_1,"%02x%c",
                                  *(undefined1 *)(*(longlong *)(piVar4 + 2) + uVar13),0x3a,pcVar5);
            if (iVar1 < 1) {
              return 0;
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            uVar13 = uVar13 + 1;
          } while ((int)uVar8 < *piVar4 + -1);
          uVar14 = (ulonglong)local_48;
        }
        uVar16 = (undefined4)((ulonglong)pcVar5 >> 0x20);
        iVar1 = FUN_140c078a0(param_1,&DAT_1413a59b0,
                              *(undefined1 *)(*(longlong *)(piVar4 + 2) + (longlong)(int)uVar8));
      }
      else {
        lVar7 = local_40;
        if (iVar1 == 0x102) {
          lVar7 = -local_40;
        }
        puVar10 = &DAT_1413a70b0;
        if (iVar1 != 0x102) {
          puVar10 = &DAT_1413a2ad6;
        }
        iVar1 = FUN_140c078a0(param_1," %s%ju (%s0x%jx)",puVar10,lVar7,puVar10,lVar7);
        uVar16 = (undefined4)((ulonglong)puVar10 >> 0x20);
      }
    }
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_140b73bf0(param_1,&DAT_1413a7288);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if ((param_4 & 8) == 0) {
    uVar6 = FUN_140b9f320(param_2);
    iVar1 = FUN_140b73bf0(param_1,&DAT_1413a71e8);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = nssignature_value(param_1,uVar6,0);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if ((param_4 & 0x10) == 0) {
    iVar1 = FUN_140c078a0(param_1,"        Issuer:%c",uVar12);
    if (iVar1 < 1) {
      return 0;
    }
    uVar6 = FUN_140b74cb0(param_2);
    iVar1 = FUN_140c27030(param_1,uVar6,uVar14,param_3);
    if (iVar1 < (int)(uint)(param_3 == 0)) {
      return 0;
    }
    iVar1 = FUN_140b73860(param_1,&DAT_1413a7288,1);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if ((param_4 & 0x20) == 0) {
    iVar1 = FUN_140b73860(param_1,"        Validity\n",0x11);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_140b73860(param_1,"            Not Before: ",0x18);
    if (iVar1 < 1) {
      return 0;
    }
    uVar6 = FUN_140b9f2c0(param_2);
    iVar1 = bad_time_value(param_1,uVar6,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_140b73860(param_1,"\n            Not After : ",0x19);
    if (iVar1 < 1) {
      return 0;
    }
    uVar6 = FUN_140b73250(param_2);
    iVar1 = bad_time_value(param_1,uVar6,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_140b73860(param_1,&DAT_1413a7288,1);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if ((param_4 & 0x40) == 0) {
    iVar1 = FUN_140c078a0(param_1,"        Subject:%c",uVar12);
    if (iVar1 < 1) {
      return 0;
    }
    uVar6 = FUN_140b74cc0(param_2);
    iVar1 = FUN_140c27030(param_1,uVar6,uVar14,param_3);
    if (iVar1 < (int)(uint)(param_3 == 0)) {
      return 0;
    }
    iVar1 = FUN_140b73860(param_1,&DAT_1413a7288,1);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (-1 < (char)param_4) {
    uVar6 = FUN_140b9f2f0(param_2);
    FUN_140b9df40(&local_40,0,0,0,uVar6);
    uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
    iVar1 = FUN_140b73860(param_1,"        Subject Public Key Info:\n",0x21);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_140c078a0(param_1,"%12sPublic Key Algorithm: ",&DAT_1413a2ad6);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_140bde8c0(param_1,local_40);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_140b73bf0(param_1,&DAT_1413a7288);
    if (iVar1 < 1) {
      return 0;
    }
    lVar7 = FUN_140b74cd0(param_2);
    if (lVar7 == 0) {
      FUN_140c078a0(param_1,"%12sUnable to load Public Key\n",&DAT_1413a2ad6);
      FUN_140c2f660(param_1);
    }
    else {
      FUN_140b7f4d0(param_1,lVar7,0x10,0);
    }
  }
  if (((param_4 >> 0xc & 1) != 0) ||
     (((FUN_140b9f300(param_2,&local_40,&local_48), local_40 == 0 ||
       ((iVar1 = FUN_140c078a0(param_1,"%8sIssuer Unique ID: ",&DAT_1413a2ad6), 0 < iVar1 &&
        (iVar1 = FUN_140b9f530(param_1,local_40,0xc), iVar1 != 0)))) &&
      ((CONCAT44(uStack_44,local_48) == 0 ||
       ((iVar1 = FUN_140c078a0(param_1,"%8sSubject Unique ID: ",&DAT_1413a2ad6), 0 < iVar1 &&
        (iVar1 = FUN_140b9f530(param_1,CONCAT44(uStack_44,local_48),0xc), iVar1 != 0)))))))) {
    if ((param_4 >> 8 & 1) == 0) {
      uVar6 = FUN_140b97b30(param_2);
      iVar1 = FUN_140c2fe50(param_1,"X509v3 extensions",uVar6,param_4,CONCAT44(uVar16,8));
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_4 >> 9 & 1) == 0) {
      FUN_140b76630(&local_40,&local_48,param_2);
      iVar1 = nssignature_value(param_1,CONCAT44(uStack_44,local_48),local_40);
      if (iVar1 < 1) {
        return 0;
      }
    }
    if (((param_4 >> 10 & 1) != 0) || (iVar1 = srejected_uses_ns(param_1,param_2,0), iVar1 != 0)) {
      uVar11 = 1;
    }
  }
  return uVar11;
}

