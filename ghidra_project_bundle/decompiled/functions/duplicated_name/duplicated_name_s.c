/**
 * Function: duplicated_name_s
 * Address:  140c5f650
 * Signature: undefined duplicated_name_s(void)
 * Body size: 341 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * duplicated_name_s(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  iVar4 = FUN_140b77980(param_2);
  iVar10 = 0;
  iVar9 = 0;
  if (0 < iVar4) {
    iVar9 = iVar4 + -1;
  }
  piVar5 = (int *)FUN_140b8d8d0((longlong)iVar9 * 0x18 + 0x20,"crypto\\property\\property_parse.c",
                                0x141);
  if (piVar5 != (int *)0x0) {
    FUN_140b78500(param_2);
    piVar5[1] = piVar5[1] & 0xfffffffe;
    iVar9 = 0;
    if (0 < iVar4) {
      lVar11 = 0;
      piVar8 = piVar5 + 2;
      do {
        piVar6 = (int *)FUN_140b77990(param_2,iVar9);
        iVar1 = piVar6[1];
        iVar2 = piVar6[2];
        iVar3 = piVar6[3];
        *piVar8 = *piVar6;
        piVar8[1] = iVar1;
        piVar8[2] = iVar2;
        piVar8[3] = iVar3;
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar6 + 4);
        piVar5[1] = (piVar5[1] | piVar8[3]) & 1U ^ piVar5[1] & 0xfffffffeU;
        if ((0 < iVar9) && (*piVar8 == iVar10)) {
          FUN_140b8d990(piVar5,"crypto\\property\\property_parse.c",0x14c);
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\property\\property_parse.c",0x14d,"stack_to_property_list");
          uVar7 = FUN_140caa370(param_1,iVar10);
          FUN_140b91cc0(0x37,0x6c,"Duplicated name `%s\'",uVar7);
          return (int *)0x0;
        }
        iVar10 = *piVar8;
        iVar9 = iVar9 + 1;
        piVar8 = piVar8 + 6;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar4);
    }
    *piVar5 = iVar4;
  }
  return piVar5;
}

