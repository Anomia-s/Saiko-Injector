/**
 * Function: ossl_provider_init
 * Address:  140bd47e0
 * Signature: undefined ossl_provider_init(void)
 * Body size: 1128 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_provider_init(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  uint *puVar8;
  int *piVar9;
  undefined8 uVar10;
  code *pcVar11;
  code *pcVar12;
  int *local_res8;
  undefined8 local_res10;
  
  pcVar11 = (code *)0x0;
  uVar10 = 0;
  local_res8 = (int *)0x0;
  local_res10 = 0;
  if ((*param_1 & 1) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\provider_core.c",0x3b9,"provider_init");
    FUN_140b91cc0(0xf,0xc0103,0);
    return 0;
  }
  pcVar7 = *(code **)(param_1 + 0x10);
  if (pcVar7 == (code *)0x0) {
    if (*(longlong *)(param_1 + 0xe) == 0) {
      lVar3 = FUN_140c5d290();
      *(longlong *)(param_1 + 0xe) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = FUN_140bd45c0(*(undefined8 *)(param_1 + 0x14));
      if (lVar3 == 0) {
        return 0;
      }
      iVar2 = FUN_140b8b750(*(undefined8 *)(lVar3 + 0x18));
      if (iVar2 == 0) {
        return 0;
      }
      if (*(longlong *)(lVar3 + 0x28) == 0) {
        FUN_140b8b7a0(*(undefined8 *)(lVar3 + 0x18));
        pcVar4 = (code *)uopenssl_win32_utf8("OPENSSL_MODULES");
        pcVar7 = pcVar11;
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_140c5c3b0();
          pcVar7 = (code *)0x0;
        }
      }
      else {
        pcVar4 = (code *)FUN_140b8c830(*(longlong *)(lVar3 + 0x28),"crypto\\provider_core.c",0x3d7);
        FUN_140b8b7a0(*(undefined8 *)(lVar3 + 0x18));
        pcVar7 = pcVar4;
        if (pcVar4 == (code *)0x0) {
          return 0;
        }
      }
      FUN_140c5d3d0(*(undefined8 *)(param_1 + 0xe),2,2,0);
      pcVar5 = *(code **)(param_1 + 0xc);
      pcVar12 = pcVar11;
      if ((((pcVar5 == (code *)0x0) &&
           (pcVar5 = (code *)FUN_140c5d500(*(undefined8 *)(param_1 + 0xe),
                                           *(undefined8 *)(param_1 + 10)), pcVar12 = pcVar5,
           pcVar6 = pcVar11, pcVar5 == (code *)0x0)) ||
          (pcVar6 = (code *)FUN_140c5d5e0(*(undefined8 *)(param_1 + 0xe),pcVar5,pcVar4),
          pcVar6 == (code *)0x0)) ||
         (lVar3 = dso_load(*(undefined8 *)(param_1 + 0xe),pcVar6,0,0), lVar3 == 0)) {
        FUN_140c5d2b0(*(undefined8 *)(param_1 + 0xe));
        param_1[0xe] = 0;
        param_1[0xf] = 0;
      }
      FUN_140b8d990(pcVar6,"crypto\\provider_core.c",0x3f6);
      FUN_140b8d990(pcVar12,"crypto\\provider_core.c",0x3f7);
      FUN_140b8d990(pcVar7,"crypto\\provider_core.c",0x3f8);
    }
    if (*(longlong *)(param_1 + 0xe) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\provider_core.c",0x3fd,"provider_init")
      ;
      FUN_140b91cc0(0xf,0x80025,"name=%s",*(undefined8 *)(param_1 + 10));
      return 0;
    }
    pcVar7 = (code *)FUN_140c5d7e0(*(longlong *)(param_1 + 0xe),"OSSL_provider_init");
    *(code **)(param_1 + 0x10) = pcVar7;
    if (pcVar7 == (code *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\provider_core.c",0x409,"provider_init")
      ;
      FUN_140b91cc0(0xf,0x8010c,"name=%s, provider has no provider init function",
                    *(undefined8 *)(param_1 + 10));
      return 0;
    }
  }
  iVar2 = (*pcVar7)(param_1,PTR_DAT_14150fc98,&local_res8,&local_res10);
  if (iVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\provider_core.c",0x417,"provider_init");
    FUN_140b91cc0(0xf,0xc0105,"name=%s",*(undefined8 *)(param_1 + 10));
  }
  else {
    *(undefined8 *)(param_1 + 0x36) = local_res10;
    *(int **)(param_1 + 0x38) = local_res8;
    if ((local_res8 != (int *)0x0) && (iVar2 = *local_res8, pcVar7 = pcVar11, iVar2 != 0)) {
      do {
        switch(iVar2) {
        case 0x400:
          *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(local_res8 + 2);
          break;
        case 0x401:
          *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(local_res8 + 2);
          break;
        case 0x402:
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(local_res8 + 2);
          break;
        case 0x403:
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(local_res8 + 2);
          break;
        case 0x404:
          *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(local_res8 + 2);
          break;
        case 0x405:
          pcVar7 = *(code **)(local_res8 + 2);
          break;
        case 0x406:
          *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(local_res8 + 2);
          break;
        case 0x407:
          *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(local_res8 + 2);
          break;
        case 0x408:
          *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(local_res8 + 2);
        }
        local_res8 = local_res8 + 4;
        iVar2 = *local_res8;
      } while (iVar2 != 0);
      if (pcVar7 != (code *)0x0) {
        puVar8 = (uint *)(*pcVar7)(local_res10);
        uVar1 = *puVar8;
        while (uVar1 != 0) {
          if ((int)uVar1 < 0) {
            return 0;
          }
          if ((uVar1 & 0x7f800000) != 0) {
            return 0;
          }
          pcVar11 = pcVar11 + 1;
          uVar1 = puVar8[(longlong)pcVar11 * 4];
        }
        pcVar7 = pcVar11 + 1;
        piVar9 = (int *)FUN_140b8da80((longlong)(pcVar11 + 2) * 0x10,"crypto\\provider_core.c",0x464
                                     );
        *(int **)(param_1 + 0x1a) = piVar9;
        if (piVar9 == (int *)0x0) {
          return 0;
        }
        *piVar9 = (uint)(byte)param_1[0x18] << 0x17;
        *(undefined8 *)(*(longlong *)(param_1 + 0x1a) + 8) = *(undefined8 *)(param_1 + 10);
        if (pcVar7 != (code *)0x0) {
          lVar3 = 0x10;
          do {
            *(undefined4 *)(lVar3 + *(longlong *)(param_1 + 0x1a)) =
                 *(undefined4 *)((longlong)puVar8 + lVar3 + -0x10);
            *(undefined8 *)(lVar3 + 8 + *(longlong *)(param_1 + 0x1a)) =
                 *(undefined8 *)((longlong)puVar8 + lVar3 + -8);
            pcVar7 = pcVar7 + -1;
            lVar3 = lVar3 + 0x10;
          } while (pcVar7 != (code *)0x0);
        }
        FUN_140b925c0(param_1[0x18],*(undefined8 *)(param_1 + 0x1a));
      }
    }
    *param_1 = *param_1 | 1;
    uVar10 = 1;
  }
  return uVar10;
}

