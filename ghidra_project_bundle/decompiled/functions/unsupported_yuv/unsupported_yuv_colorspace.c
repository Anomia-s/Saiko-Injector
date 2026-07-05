/**
 * Function: unsupported_yuv_colorspace
 * Address:  140423400
 * Signature: undefined unsupported_yuv_colorspace(void)
 * Body size: 1673 bytes
 */


ulonglong unsupported_yuv_colorspace(longlong param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 unaff_RBX;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar13;
  undefined8 uVar12;
  
  lVar6 = *(longlong *)(param_1 + 0x2c0);
  puVar4 = (undefined1 *)FUN_140160c70(1,0xb0);
  if (puVar4 != (undefined1 *)0x0) {
    *(uint *)(puVar4 + 0x28) = 2 - (uint)(param_2[9] == 0);
    *(undefined1 **)(param_2 + 0x3c) = puVar4;
    iVar3 = param_2[2];
    iVar11 = *param_2;
    iVar13 = param_2[1];
    uVar9 = (uint)(param_2[7] == 2);
    if (iVar11 < 0x3132564e) {
      if (iVar11 == 0x15151002) {
        plVar8 = *(longlong **)(lVar6 + 0x10);
        *puVar4 = 0;
        *(int *)(puVar4 + 4) = iVar13;
        *(int *)(puVar4 + 8) = iVar3;
        *(uint *)(puVar4 + 0xc) = uVar9;
        *(undefined8 *)(puVar4 + 0x10) = 0x1715151002;
        pcVar5 = *(code **)(*plVar8 + 0xb8);
      }
      else if (iVar11 == 0x16161804) {
        plVar8 = *(longlong **)(lVar6 + 0x10);
        *puVar4 = 0;
        *(int *)(puVar4 + 4) = iVar13;
        *(int *)(puVar4 + 8) = iVar3;
        *(uint *)(puVar4 + 0xc) = uVar9;
        *(undefined8 *)(puVar4 + 0x10) = 0x1616161804;
        pcVar5 = *(code **)(*plVar8 + 0xb8);
      }
      else {
        if (iVar11 != 0x16362004) goto LAB_1404234f1;
        plVar8 = *(longlong **)(lVar6 + 0x10);
        *puVar4 = 0;
        *(int *)(puVar4 + 4) = iVar13;
        *(int *)(puVar4 + 8) = iVar3;
        *(uint *)(puVar4 + 0xc) = uVar9;
        *(undefined8 *)(puVar4 + 0x10) = 0x1516362004;
        pcVar5 = *(code **)(*plVar8 + 0xb8);
      }
    }
    else {
      uVar2 = 0x32;
      if (iVar11 < 0x32315659) {
        if ((iVar11 != 0x3132564e) && (iVar11 != 0x3231564e)) {
LAB_1404234f1:
          uVar2 = 0;
        }
      }
      else if ((iVar11 != 0x32315659) && (iVar11 != 0x56555949)) goto LAB_1404234f1;
      plVar8 = *(longlong **)(lVar6 + 0x10);
      *puVar4 = 0;
      *(int *)(puVar4 + 4) = iVar13;
      *(int *)(puVar4 + 8) = iVar3;
      *(uint *)(puVar4 + 0xc) = uVar9;
      *(int *)(puVar4 + 0x10) = iVar11;
      *(undefined4 *)(puVar4 + 0x14) = uVar2;
      pcVar5 = *(code **)(*plVar8 + 0xb8);
    }
    puVar10 = (undefined8 *)(lVar6 + 0x10);
    iVar3 = (*pcVar5)();
    if ((-1 < iVar3) ||
       (cVar1 = outofvideomemory("CreateTexture(D3DPOOL_DEFAULT)",iVar3), cVar1 != '\0')) {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if ((*param_2 != 0x56555949) && (*param_2 != 0x32315659)) goto LAB_140423a7c;
      puVar4[0x38] = 1;
      iVar11 = ((int)*(undefined8 *)(param_2 + 1) + 1) / 2;
      iVar13 = ((int)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) + 1) / 2;
      uVar12 = CONCAT44(iVar13,iVar11);
      iVar3 = *param_2;
      if (iVar3 < 0x3132564e) {
        if (iVar3 == 0x15151002) {
          plVar8 = (longlong *)*puVar10;
          puVar4[0x40] = 0;
          *(undefined8 *)(puVar4 + 0x44) = uVar12;
          *(uint *)(puVar4 + 0x4c) = uVar9;
          *(undefined8 *)(puVar4 + 0x50) = 0x1715151002;
          pcVar5 = *(code **)(*plVar8 + 0xb8);
          uVar2 = 0x17;
        }
        else if (iVar3 == 0x16161804) {
          plVar8 = (longlong *)*puVar10;
          puVar4[0x40] = 0;
          *(undefined8 *)(puVar4 + 0x44) = uVar12;
          *(uint *)(puVar4 + 0x4c) = uVar9;
          *(undefined8 *)(puVar4 + 0x50) = 0x1616161804;
          pcVar5 = *(code **)(*plVar8 + 0xb8);
LAB_1404237ef:
          uVar2 = 0x16;
        }
        else {
          if (iVar3 != 0x16362004) goto LAB_14042370c;
          plVar8 = (longlong *)*puVar10;
          puVar4[0x40] = 0;
          *(undefined8 *)(puVar4 + 0x44) = uVar12;
          *(uint *)(puVar4 + 0x4c) = uVar9;
          *(undefined8 *)(puVar4 + 0x50) = 0x1516362004;
          pcVar5 = *(code **)(*plVar8 + 0xb8);
          uVar2 = 0x15;
        }
      }
      else {
        uVar2 = 0x32;
        if (iVar3 < 0x32315659) {
          if ((iVar3 != 0x3132564e) && (iVar3 != 0x3231564e)) {
LAB_14042370c:
            uVar2 = 0;
          }
        }
        else if ((iVar3 != 0x32315659) && (iVar3 != 0x56555949)) goto LAB_14042370c;
        plVar8 = (longlong *)*puVar10;
        puVar4[0x40] = 0;
        *(undefined8 *)(puVar4 + 0x44) = uVar12;
        *(uint *)(puVar4 + 0x4c) = uVar9;
        *(int *)(puVar4 + 0x50) = iVar3;
        *(undefined4 *)(puVar4 + 0x54) = uVar2;
        pcVar5 = *(code **)(*plVar8 + 0xb8);
        if (iVar3 < 0x3132564e) {
          if (iVar3 == 0x15151002) {
            uVar2 = 0x17;
          }
          else {
            if (iVar3 == 0x16161804) goto LAB_1404237ef;
            if (iVar3 != 0x16362004) goto LAB_1404237ff;
            uVar2 = 0x15;
          }
        }
        else {
          if (iVar3 < 0x32315659) {
            if ((iVar3 == 0x3132564e) || (iVar3 == 0x3231564e)) {
LAB_140423791:
              uVar2 = 0x32;
              goto LAB_140423802;
            }
          }
          else if ((iVar3 == 0x32315659) || (iVar3 == 0x56555949)) goto LAB_140423791;
LAB_1404237ff:
          uVar2 = 0;
        }
      }
LAB_140423802:
      iVar3 = (*pcVar5)(plVar8,iVar11,iVar13,1,uVar9,uVar2,0,puVar4 + 0x58,0);
      if ((-1 < iVar3) ||
         (cVar1 = outofvideomemory("CreateTexture(D3DPOOL_DEFAULT)",iVar3), cVar1 != '\0')) {
        iVar11 = ((int)*(undefined8 *)(param_2 + 1) + 1) / 2;
        iVar13 = ((int)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) + 1) / 2;
        uVar12 = CONCAT44(iVar13,iVar11);
        iVar3 = *param_2;
        if (iVar3 < 0x3132564e) {
          if (iVar3 == 0x15151002) {
            plVar8 = (longlong *)*puVar10;
            puVar4[0x68] = 0;
            *(undefined8 *)(puVar4 + 0x6c) = uVar12;
            *(uint *)(puVar4 + 0x74) = uVar9;
            *(undefined8 *)(puVar4 + 0x78) = 0x1715151002;
            pcVar5 = *(code **)(*plVar8 + 0xb8);
            uVar2 = 0x17;
          }
          else if (iVar3 == 0x16161804) {
            plVar8 = (longlong *)*puVar10;
            puVar4[0x68] = 0;
            *(undefined8 *)(puVar4 + 0x6c) = uVar12;
            *(uint *)(puVar4 + 0x74) = uVar9;
            *(undefined8 *)(puVar4 + 0x78) = 0x1616161804;
            pcVar5 = *(code **)(*plVar8 + 0xb8);
LAB_1404239e2:
            uVar2 = 0x16;
          }
          else {
            if (iVar3 != 0x16362004) goto LAB_1404238ff;
            plVar8 = (longlong *)*puVar10;
            puVar4[0x68] = 0;
            *(undefined8 *)(puVar4 + 0x6c) = uVar12;
            *(uint *)(puVar4 + 0x74) = uVar9;
            *(undefined8 *)(puVar4 + 0x78) = 0x1516362004;
            pcVar5 = *(code **)(*plVar8 + 0xb8);
            uVar2 = 0x15;
          }
        }
        else {
          uVar2 = 0x32;
          if (iVar3 < 0x32315659) {
            if ((iVar3 != 0x3132564e) && (iVar3 != 0x3231564e)) {
LAB_1404238ff:
              uVar2 = 0;
            }
          }
          else if ((iVar3 != 0x32315659) && (iVar3 != 0x56555949)) goto LAB_1404238ff;
          plVar8 = (longlong *)*puVar10;
          puVar4[0x68] = 0;
          *(undefined8 *)(puVar4 + 0x6c) = uVar12;
          *(uint *)(puVar4 + 0x74) = uVar9;
          *(int *)(puVar4 + 0x78) = iVar3;
          *(undefined4 *)(puVar4 + 0x7c) = uVar2;
          pcVar5 = *(code **)(*plVar8 + 0xb8);
          if (iVar3 < 0x3132564e) {
            if (iVar3 == 0x15151002) {
              uVar2 = 0x17;
            }
            else {
              if (iVar3 == 0x16161804) goto LAB_1404239e2;
              if (iVar3 != 0x16362004) goto LAB_1404239f2;
              uVar2 = 0x15;
            }
          }
          else {
            if (iVar3 < 0x32315659) {
              if ((iVar3 == 0x3132564e) || (iVar3 == 0x3231564e)) {
LAB_140423984:
                uVar2 = 0x32;
                goto LAB_1404239f5;
              }
            }
            else if ((iVar3 == 0x32315659) || (iVar3 == 0x56555949)) goto LAB_140423984;
LAB_1404239f2:
            uVar2 = 0;
          }
        }
LAB_1404239f5:
        iVar3 = (*pcVar5)(plVar8,iVar11,iVar13,1,uVar9,uVar2,0,puVar4 + 0x80,0);
        if ((-1 < iVar3) ||
           (cVar1 = outofvideomemory("CreateTexture(D3DPOOL_DEFAULT)",iVar3), cVar1 != '\0')) {
          *(undefined4 *)(puVar4 + 0x2c) = 1;
          lVar6 = FUN_140156650(param_2[4],param_2[1],param_2[2],8);
          *(longlong *)(puVar4 + 0x30) = lVar6;
          if (lVar6 == 0) {
            uVar7 = FUN_1400fbed0("Unsupported YUV colorspace");
            return uVar7;
          }
          goto LAB_140423a7c;
        }
      }
    }
  }
  uVar7 = 0;
LAB_140423a7c:
  return uVar7 & 0xffffffff;
}

