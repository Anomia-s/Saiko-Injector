/**
 * Function: pem_read_bio_ex
 * Address:  140bf3d50
 * Signature: undefined pem_read_bio_ex(void)
 * Body size: 1006 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pem_read_bio_ex(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                        uint *param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res18 [2];
  uint local_res20;
  longlong local_78;
  uint *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  uVar1 = param_6;
  lVar8 = 0;
  lVar10 = 0;
  lVar9 = 0;
  *param_5 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  local_58 = 0;
  local_78 = 0;
  local_60 = 0;
  if (((byte)param_6 & 6) == 6) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\pem\\pem_lib.c",0x3c3,"PEM_read_bio_ex");
    FUN_140b91cc0(9,0x80106,0);
    lVar9 = lVar8;
    lVar7 = lVar8;
    goto LAB_140bf40d5;
  }
  local_res20 = param_6 & 1;
  if (local_res20 == 0) {
    uVar5 = FUN_140c284d0();
  }
  else {
    uVar5 = FUN_140c284e0();
  }
  lVar6 = FUN_140b73040(uVar5);
  local_78 = lVar6;
  lVar7 = FUN_140b73040(uVar5);
  local_68 = lVar7;
  if ((lVar6 == 0) || (lVar7 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\pem\\pem_lib.c",0x3cb,"PEM_read_bio_ex");
    uVar5 = 0x80020;
  }
  else {
    iVar2 = FUN_140bf5620(param_1,&local_60,uVar1);
    lVar9 = local_60;
    if ((iVar2 == 0) ||
       (iVar2 = FUN_140bf57e0(param_1,&local_78,&local_68,local_60,uVar1), lVar7 = local_68,
       iVar2 == 0)) goto LAB_140bf40d5;
    FUN_140b74190(local_68,0x73,0,&local_70);
    param_6 = *local_70;
    if (param_6 == 0) goto LAB_140bf40d5;
    local_58 = FUN_140c70350();
    if (local_58 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pem\\pem_lib.c",0x3dd,"PEM_read_bio_ex");
      uVar5 = 0x80006;
    }
    else {
      FUN_140c705c0(local_58);
      lVar8 = local_58;
      iVar2 = FUN_140c705d0(local_58,*(longlong *)(local_70 + 2),&param_6,
                            *(longlong *)(local_70 + 2),param_6);
      if ((-1 < iVar2) &&
         (iVar2 = FUN_140c707c0(lVar8,(longlong)(int)param_6 + *(longlong *)(local_70 + 2),
                                local_res18), -1 < iVar2)) {
        param_6 = param_6 + local_res18[0];
        *(longlong *)local_70 = (longlong)(int)param_6;
        iVar2 = FUN_140b74190(local_78,3,0,0);
        if (local_res20 == 0) {
          lVar8 = FUN_140b8d8d0((longlong)(iVar2 + 1),"crypto\\pem\\pem_lib.c",0x3ed);
          *param_3 = lVar8;
          lVar8 = FUN_140b8d8d0((longlong)(int)param_6,"crypto\\pem\\pem_lib.c",0x3ee);
        }
        else {
          lVar8 = FUN_140b8dd10();
          *param_3 = lVar8;
          lVar8 = FUN_140b8dd10((longlong)(int)param_6,"crypto\\pem\\pem_lib.c",0x3ee);
        }
        *param_4 = lVar8;
        if (((*param_3 != 0) && (lVar8 != 0)) &&
           ((iVar2 == 0 || (iVar3 = FUN_140b732c0(local_78,*param_3,iVar2), iVar3 == iVar2)))) {
          *(undefined1 *)((longlong)iVar2 + *param_3) = 0;
          uVar4 = FUN_140b732c0(lVar7,*param_4,param_6);
          if (uVar4 == param_6) {
            *param_5 = param_6;
            *param_2 = lVar9;
            lVar9 = 0;
            lVar8 = 1;
            goto LAB_140bf40d5;
          }
        }
        if ((uVar1 & 1) == 0) {
          FUN_140b8d990(*param_3,"crypto\\pem\\pem_lib.c",0x3fd);
          *param_3 = 0;
          FUN_140b8d990(*param_4,"crypto\\pem\\pem_lib.c",0x3ff);
          *param_4 = 0;
          lVar8 = lVar10;
        }
        else {
          FUN_140b8dfb0(*param_3,0,"crypto\\pem\\pem_lib.c",0x3fd);
          *param_3 = 0;
          FUN_140b8dfb0(*param_4,0,"crypto\\pem\\pem_lib.c",0x3ff);
          *param_4 = 0;
          lVar8 = lVar10;
        }
        goto LAB_140bf40d5;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pem\\pem_lib.c",0x3e6,"PEM_read_bio_ex");
      uVar5 = 100;
    }
  }
  FUN_140b91cc0(9,uVar5,0);
  lVar8 = lVar10;
LAB_140bf40d5:
  FUN_140c70380(local_58);
  if ((uVar1 & 1) == 0) {
    FUN_140b8d990(lVar9,"crypto\\pem\\pem_lib.c",0x403);
  }
  else {
    FUN_140b8dfb0(lVar9,0,"crypto\\pem\\pem_lib.c",0x403);
  }
  FUN_140b73150(local_78);
  FUN_140b73150(lVar7);
  return lVar8;
}

