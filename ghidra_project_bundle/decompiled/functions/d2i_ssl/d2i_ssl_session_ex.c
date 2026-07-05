/**
 * Function: d2i_ssl_session_ex
 * Address:  140c3cc20
 * Signature: undefined d2i_ssl_session_ex(void)
 * Body size: 1303 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * d2i_ssl_session_ex(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140c3cc3c;
  local_res10 = *param_2;
  piVar9 = (int *)0x0;
  piVar5 = (int *)FUN_140be0d50(0,&local_res10,param_3,&DAT_141252170);
  piVar6 = piVar9;
  if ((piVar5 == (int *)0x0) ||
     (((param_1 == (longlong *)0x0 || (piVar6 = (int *)*param_1, piVar6 == (int *)0x0)) &&
      (piVar6 = (int *)FUN_140ba4420(), piVar6 == (int *)0x0)))) goto LAB_140c3ccbf;
  if (*piVar5 == 1) {
    iVar4 = piVar5[1];
    if (((iVar4 >> 8 == 3) || (iVar4 >> 8 == 0xfe)) || (iVar4 == 0x100)) {
      *piVar6 = iVar4;
      piVar6[0xc1] = piVar5[0x2e];
      if (**(int **)(piVar5 + 2) == 2) {
        pbVar1 = *(byte **)(*(int **)(piVar5 + 2) + 2);
        piVar6[0xc0] = (*pbVar1 | 0x30000) << 8 | (uint)pbVar1[1];
        lVar7 = FUN_140bedf00();
        *(longlong *)(piVar6 + 0xbe) = lVar7;
        if (lVar7 == 0) goto LAB_140c3ccbf;
        puVar2 = *(uint **)(piVar5 + 8);
        piVar8 = piVar9;
        if (puVar2 != (uint *)0x0) {
          uVar10 = *puVar2;
          if (uVar10 != 0) {
            if (0x20 < uVar10) goto LAB_140c3ccbf;
            memcpy(piVar6 + 0x96,*(void **)(puVar2 + 2),(longlong)(int)uVar10);
            piVar8 = (int *)(longlong)(int)*puVar2;
          }
        }
        *(int **)(piVar6 + 0x94) = piVar8;
        puVar2 = *(uint **)(piVar5 + 6);
        piVar8 = piVar9;
        if (puVar2 != (uint *)0x0) {
          uVar10 = *puVar2;
          if (uVar10 != 0) {
            if (0x200 < uVar10) goto LAB_140c3ccbf;
            memcpy(piVar6 + 0x14,*(void **)(puVar2 + 2),(longlong)(int)uVar10);
            piVar8 = (int *)(longlong)(int)*puVar2;
          }
        }
        *(int **)(piVar6 + 2) = piVar8;
        if (*(longlong *)(piVar5 + 0xc) == 0) {
          lVar7 = FUN_140c21250();
        }
        else {
          lVar7 = *(longlong *)(piVar5 + 0xc) * 1000000000;
        }
        *(longlong *)(piVar6 + 0xb8) = lVar7;
        if (*(longlong *)(piVar5 + 0xe) == 0) {
          lVar7 = 3000000000;
        }
        else {
          lVar7 = *(longlong *)(piVar5 + 0xe) * 1000000000;
        }
        *(longlong *)(piVar6 + 0xb6) = lVar7;
        FUN_140ba55f0(piVar6);
        FUN_140b763d0(*(undefined8 *)(piVar6 + 0xb0));
        *(undefined8 *)(piVar6 + 0xb0) = *(undefined8 *)(piVar5 + 0x10);
        piVar5[0x10] = 0;
        piVar5[0x11] = 0;
        FUN_140b7efe0(*(undefined8 *)(piVar6 + 0xae));
        piVar6[0xae] = 0;
        piVar6[0xaf] = 0;
        puVar3 = *(undefined4 **)(piVar5 + 0x30);
        if (puVar3 != (undefined4 *)0x0) {
          local_38 = *(undefined8 *)(puVar3 + 2);
          lVar7 = FUN_140b9dad0(0,&local_38,*puVar3,param_4,param_5);
          *(longlong *)(piVar6 + 0xae) = lVar7;
          if (lVar7 == 0) goto LAB_140c3ccbf;
        }
        puVar2 = *(uint **)(piVar5 + 0x12);
        if (puVar2 != (uint *)0x0) {
          uVar10 = *puVar2;
          if (uVar10 != 0) {
            if (0x20 < uVar10) goto LAB_140c3ccbf;
            memcpy(piVar6 + 0xa0,*(void **)(puVar2 + 2),(longlong)(int)uVar10);
            piVar9 = (int *)(longlong)(int)*puVar2;
          }
        }
        *(int **)(piVar6 + 0x9e) = piVar9;
        piVar6[0xb4] = piVar5[0x14];
        iVar4 = FUN_140c3d140(piVar6 + 0xc6,*(undefined8 *)(piVar5 + 0x16));
        if (((iVar4 == 0) ||
            (iVar4 = FUN_140c3d140(piVar6 + 0xa8,*(undefined8 *)(piVar5 + 0x1e)), iVar4 == 0)) ||
           (iVar4 = FUN_140c3d140(piVar6 + 0xaa,*(undefined8 *)(piVar5 + 0x20)), iVar4 == 0))
        goto LAB_140c3ccbf;
        piVar6[0xcc] = piVar5[0x18];
        piVar6[0xcd] = piVar5[0x1a];
        FUN_140b8d990(*(undefined8 *)(piVar6 + 200),"ssl\\ssl_asn1.c",0x173);
        if (*(longlong *)(piVar5 + 0x1c) == 0) {
          piVar6[200] = 0;
          piVar6[0xc9] = 0;
        }
        else {
          *(undefined8 *)(piVar6 + 200) = *(undefined8 *)(*(longlong *)(piVar5 + 0x1c) + 8);
          *(longlong *)(piVar6 + 0xca) = (longlong)**(int **)(piVar5 + 0x1c);
          *(undefined8 *)(*(longlong *)(piVar5 + 0x1c) + 8) = 0;
        }
        piVar9 = *(int **)(piVar5 + 4);
        if (piVar9 == (int *)0x0) {
          uVar10 = 0;
        }
        else {
          if (*piVar9 != 1) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\ssl_asn1.c",0x17e,"d2i_SSL_SESSION_ex");
            uVar11 = 0x10f;
            goto LAB_140c3ccb5;
          }
          uVar10 = (uint)**(byte **)(piVar9 + 2);
        }
        piVar6[0xbc] = uVar10;
        iVar4 = FUN_140c3d140(piVar6 + 0xd6,*(undefined8 *)(piVar5 + 0x22));
        if (iVar4 != 0) {
          piVar6[0xdc] = piVar5[0x24];
          piVar6[0xce] = piVar5[0x26];
          FUN_140b8d990(*(undefined8 *)(piVar6 + 0xd0),"ssl\\ssl_asn1.c",399);
          if (*(longlong *)(piVar5 + 0x28) == 0) {
            piVar6[0xd0] = 0;
            piVar6[0xd1] = 0;
            piVar6[0xd2] = 0;
            piVar6[0xd3] = 0;
          }
          else {
            *(undefined8 *)(piVar6 + 0xd0) = *(undefined8 *)(*(longlong *)(piVar5 + 0x28) + 8);
            *(longlong *)(piVar6 + 0xd2) = (longlong)**(int **)(piVar5 + 0x28);
            *(undefined8 *)(*(longlong *)(piVar5 + 0x28) + 8) = 0;
          }
          *(char *)(piVar6 + 0xd4) = (char)piVar5[0x2a];
          FUN_140b8d990(*(undefined8 *)(piVar6 + 0xd8),"ssl\\ssl_asn1.c",0x19b);
          if (*(longlong *)(piVar5 + 0x2c) == 0) {
            piVar6[0xd8] = 0;
            piVar6[0xd9] = 0;
            piVar6[0xda] = 0;
            piVar6[0xdb] = 0;
          }
          else {
            *(undefined8 *)(piVar6 + 0xd8) = *(undefined8 *)(*(longlong *)(piVar5 + 0x2c) + 8);
            *(longlong *)(piVar6 + 0xda) = (longlong)**(int **)(piVar5 + 0x2c);
            *(undefined8 *)(*(longlong *)(piVar5 + 0x2c) + 8) = 0;
          }
          FUN_140be0760(piVar5,&DAT_141252170);
          if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
            *param_1 = (longlong)piVar6;
          }
          *param_2 = local_res10;
          return piVar6;
        }
        goto LAB_140c3ccbf;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_asn1.c",0x12e,"d2i_SSL_SESSION_ex");
      uVar11 = 0x89;
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_asn1.c",0x125,"d2i_SSL_SESSION_ex");
      uVar11 = 0x103;
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_asn1.c",0x11e,"d2i_SSL_SESSION_ex");
    uVar11 = 0xfe;
  }
LAB_140c3ccb5:
  FUN_140b91cc0(0x14,uVar11,0);
LAB_140c3ccbf:
  FUN_140be0760(piVar5,&DAT_141252170);
  if ((param_1 == (longlong *)0x0) || ((int *)*param_1 != piVar6)) {
    FUN_140ba4520(piVar6);
  }
  return (int *)0x0;
}

