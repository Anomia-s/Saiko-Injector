/**
 * Function: providersimplementationssignatureeddsa_sigc
 * Address:  140d45c80
 * Signature: undefined providersimplementationssignatureeddsa_sigc(void)
 * Body size: 320 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * providersimplementationssignatureeddsa_sigc(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  iVar7 = FUN_140b69250();
  if ((iVar7 == 0) ||
     (puVar8 = (undefined8 *)
               FUN_140b8da80(0x228,"providers\\implementations\\signature\\eddsa_sig.c",0x2f5),
     puVar8 == (undefined8 *)0x0)) {
    return (undefined8 *)0x0;
  }
  lVar11 = 4;
  puVar5 = param_1;
  puVar6 = puVar8;
  do {
    puVar10 = puVar6;
    puVar9 = puVar5;
    uVar4 = puVar9[1];
    *puVar10 = *puVar9;
    puVar10[1] = uVar4;
    uVar4 = puVar9[3];
    puVar10[2] = puVar9[2];
    puVar10[3] = uVar4;
    uVar4 = puVar9[5];
    puVar10[4] = puVar9[4];
    puVar10[5] = uVar4;
    uVar4 = puVar9[7];
    puVar10[6] = puVar9[6];
    puVar10[7] = uVar4;
    uVar4 = puVar9[9];
    puVar10[8] = puVar9[8];
    puVar10[9] = uVar4;
    uVar4 = puVar9[0xb];
    puVar10[10] = puVar9[10];
    puVar10[0xb] = uVar4;
    uVar4 = puVar9[0xd];
    puVar10[0xc] = puVar9[0xc];
    puVar10[0xd] = uVar4;
    uVar4 = puVar9[0xf];
    puVar10[0xe] = puVar9[0xe];
    puVar10[0xf] = uVar4;
    lVar11 = lVar11 + -1;
    puVar5 = puVar9 + 0x10;
    puVar6 = puVar10 + 0x10;
  } while (lVar11 != 0);
  uVar1 = *(undefined4 *)((longlong)puVar9 + 0x84);
  uVar2 = *(undefined4 *)(puVar9 + 0x11);
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x8c);
  *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar9 + 0x10);
  *(undefined4 *)((longlong)puVar10 + 0x84) = uVar1;
  *(undefined4 *)(puVar10 + 0x11) = uVar2;
  *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar9 + 0x94);
  uVar2 = *(undefined4 *)(puVar9 + 0x13);
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x9c);
  *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)(puVar9 + 0x12);
  *(undefined4 *)((longlong)puVar10 + 0x94) = uVar1;
  *(undefined4 *)(puVar10 + 0x13) = uVar2;
  *(undefined4 *)((longlong)puVar10 + 0x9c) = uVar3;
  puVar10[0x14] = puVar9[0x14];
  puVar8[1] = 0;
  if ((param_1[1] != 0) && (iVar7 = FUN_140c131f0(), iVar7 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\eddsa_sig.c",0x2fd,"eddsa_dupctx");
    FUN_140b91cc0(0x39,0xc0103,0);
    FUN_140c13180(puVar8[1]);
    FUN_140b8d990(puVar8,"providers\\implementations\\signature\\eddsa_sig.c",0x2ea);
    return (undefined8 *)0x0;
  }
  puVar8[1] = param_1[1];
  return puVar8;
}

