/**
 * Function: BindingLayout
 * Address:  140744bc0
 * Signature: BindingLayout * __thiscall BindingLayout(BindingLayout * this, undefined8 * param_1)
 * Body size: 1923 bytes
 */


BindingLayout * __thiscall
nvrhi::d3d12::BindingLayout::BindingLayout(BindingLayout *this,undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined8 **ppuVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  char cVar18;
  ulonglong uVar19;
  longlong lVar20;
  size_t _Size;
  int *piVar21;
  char cVar22;
  char cVar23;
  int iVar24;
  void *_Dst;
  int *piVar25;
  int *piVar26;
  bool bVar27;
  undefined4 local_6c;
  int local_68;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  (this->BindingLayout_data).offset_0x0 = 1;
  this->vftablePtr = &vftable;
  uVar10 = *param_1;
  (this->BindingLayout_data).offset_0x8 = (short)uVar10;
  *(short *)&(this->BindingLayout_data).field_0xa = (short)((ulonglong)uVar10 >> 0x10);
  (this->BindingLayout_data).offset_0xc = (int)((ulonglong)uVar10 >> 0x20);
  (this->BindingLayout_data).offset_0x10 = *(undefined1 *)(param_1 + 1);
  (this->BindingLayout_data).offset_0x18 = (void *)0x0;
  (this->BindingLayout_data).offset_0x20 = (void *)0x0;
  (this->BindingLayout_data).offset_0x28 = 0;
  uVar13 = 0;
  lVar20 = param_1[3] - param_1[2];
  if (lVar20 == 0) {
    piVar21 = (int *)0x0;
    piVar25 = (int *)0x0;
  }
  else {
    uVar15 = (longlong)(param_1[3] - param_1[2]) >> 3;
    if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      vector_too_long();
    }
    if (uVar15 < 0x200) {
      _Dst = (void *)FUN_140b65d30(lVar20);
    }
    else {
      lVar16 = FUN_140b65d30(lVar20 + 0x27);
      _Dst = (void *)(lVar16 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar16;
    }
    (this->BindingLayout_data).offset_0x18 = _Dst;
    (this->BindingLayout_data).offset_0x20 = _Dst;
    (this->BindingLayout_data).offset_0x28 = lVar20 + (longlong)_Dst;
    _Size = param_1[3] - (longlong)param_1[2];
    memmove(_Dst,(void *)param_1[2],_Size);
    piVar21 = (int *)(_Size + (longlong)_Dst);
    (this->BindingLayout_data).offset_0x20 = piVar21;
    piVar25 = (this->BindingLayout_data).offset_0x18;
  }
  uVar10 = param_1[6];
  (this->BindingLayout_data).offset_0x30 = param_1[5];
  (this->BindingLayout_data).offset_0x38 = uVar10;
  (this->BindingLayout_data).offset_0x40 = 0;
  (this->BindingLayout_data).offset_0x44 = -1;
  (this->BindingLayout_data).offset_0x48 = -1;
  (this->BindingLayout_data).offset_0x4c = -1;
  puVar1 = &(this->BindingLayout_data).offset_0x50;
  plVar4 = &(this->BindingLayout_data).offset_0x88;
  piVar26 = &(this->BindingLayout_data).offset_0xa0;
  puVar5 = &(this->BindingLayout_data).offset_0x108;
  memset(puVar1,0,0x4c0);
  cVar22 = -1;
  iVar24 = -1;
  local_6c = 0;
  local_68 = 0;
  do {
    while( true ) {
      while( true ) {
        if (piVar25 == piVar21) {
          if ((this->BindingLayout_data).offset_0x508 != 0) {
            uVar15 = 0;
            puVar17 = (undefined8 *)puVar5;
            do {
              puVar17[2] = 0;
              puVar17[3] = 0;
              *puVar17 = 0;
              puVar17[1] = 0;
              uVar15 = uVar15 + 1;
              puVar17 = puVar17 + 4;
            } while (uVar15 < (this->BindingLayout_data).offset_0x508);
          }
          (this->BindingLayout_data).offset_0x508 = 0;
          if (uVar13 != 0) {
            (this->BindingLayout_data).offset_0x508 = 1;
            *(undefined8 *)&(this->BindingLayout_data).offset_0x118 = 0;
            *(undefined8 *)&(this->BindingLayout_data).offset_0x120 = 0;
            *(undefined8 *)puVar5 = 0;
            (this->BindingLayout_data).offset_0x110 = 0;
            (this->BindingLayout_data).offset_0x114 = 0;
            (this->BindingLayout_data).offset_0x108 = 1;
            uVar14 = FUN_14071d610();
            (this->BindingLayout_data).offset_0x120 = uVar14;
            (this->BindingLayout_data).offset_0x110 = local_68;
            (this->BindingLayout_data).offset_0x114 = local_6c;
            (this->BindingLayout_data).offset_0x118 = uVar13;
            (this->BindingLayout_data).offset_0x44 =
                 (int)(this->BindingLayout_data).offset_0x508 + -1;
          }
          piVar25 = piVar26 + (this->BindingLayout_data).offset_0x100 * 4;
          for (; piVar26 != piVar25; piVar26 = piVar26 + 4) {
            uVar15 = (this->BindingLayout_data).offset_0x508;
            if (uVar15 + 1 == 0) {
              uVar19 = 0;
              puVar17 = (undefined8 *)puVar5;
              do {
                puVar17[2] = 0;
                puVar17[3] = 0;
                *puVar17 = 0;
                puVar17[1] = 0;
                uVar19 = uVar19 + 1;
                puVar17 = puVar17 + 4;
              } while (uVar19 < (this->BindingLayout_data).offset_0x508);
            }
            else {
              puVar3 = &(this->BindingLayout_data).offset_0x118 + uVar15 * 8;
              *(undefined8 *)puVar3 = 0;
              *(undefined8 *)(puVar3 + 2) = 0;
              *(undefined8 *)(puVar5 + uVar15 * 8) = 0;
              *(undefined8 *)((longlong)(puVar5 + uVar15 * 8) + 8) = 0;
            }
            (this->BindingLayout_data).offset_0x508 = uVar15 + 1;
            puVar5[uVar15 * 8] = 2;
            uVar14 = FUN_14071d610();
            puVar5[(uVar15 * 4 + 3) * 2] = uVar14;
            *(undefined8 *)(puVar5 + (uVar15 * 4 + 1) * 2) = *(undefined8 *)(piVar26 + 1);
            puVar5[(uVar15 * 4 + 2) * 2] = piVar26[3];
            *piVar26 = (int)(this->BindingLayout_data).offset_0x508 + -1;
          }
          if (0 < (int)(this->BindingLayout_data).offset_0x54) {
            uVar15 = (this->BindingLayout_data).offset_0x508;
            if (uVar15 + 1 == 0) {
              uVar19 = 0;
              puVar17 = (undefined8 *)puVar5;
              do {
                puVar17[2] = 0;
                puVar17[3] = 0;
                *puVar17 = 0;
                puVar17[1] = 0;
                uVar19 = uVar19 + 1;
                puVar17 = puVar17 + 4;
              } while (uVar19 < (this->BindingLayout_data).offset_0x508);
            }
            else {
              puVar3 = &(this->BindingLayout_data).offset_0x118 + uVar15 * 8;
              *(undefined8 *)puVar3 = 0;
              *(undefined8 *)(puVar3 + 2) = 0;
              *(undefined8 *)(puVar5 + uVar15 * 8) = 0;
              *(undefined8 *)((longlong)(puVar5 + uVar15 * 8) + 8) = 0;
            }
            (this->BindingLayout_data).offset_0x508 = uVar15 + 1;
            puVar5[uVar15 * 8] = 0;
            uVar14 = FUN_14071d610((this->BindingLayout_data).offset_0x8);
            puVar5[(uVar15 * 4 + 3) * 2] = uVar14;
            puVar17 = (this->BindingLayout_data).offset_0x70;
            puVar5[(uVar15 * 4 + 1) * 2] =
                 (int)((ulonglong)
                       ((longlong)(this->BindingLayout_data).offset_0x78 - (longlong)puVar17) >> 3)
                 * -0x55555555;
            *(undefined8 **)(puVar5 + (uVar15 * 4 + 2) * 2) = puVar17;
            (this->BindingLayout_data).offset_0x4c =
                 (int)(this->BindingLayout_data).offset_0x508 + -1;
          }
          if (0 < (int)*puVar1) {
            uVar15 = (this->BindingLayout_data).offset_0x508;
            if (uVar15 + 1 == 0) {
              uVar19 = 0;
              puVar17 = (undefined8 *)puVar5;
              do {
                puVar17[2] = 0;
                puVar17[3] = 0;
                *puVar17 = 0;
                puVar17[1] = 0;
                uVar19 = uVar19 + 1;
                puVar17 = puVar17 + 4;
              } while (uVar19 < (this->BindingLayout_data).offset_0x508);
            }
            else {
              puVar1 = &(this->BindingLayout_data).offset_0x118 + uVar15 * 8;
              *(undefined8 *)puVar1 = 0;
              *(undefined8 *)(puVar1 + 2) = 0;
              *(undefined8 *)(puVar5 + uVar15 * 8) = 0;
              *(undefined8 *)((longlong)(puVar5 + uVar15 * 8) + 8) = 0;
            }
            (this->BindingLayout_data).offset_0x508 = uVar15 + 1;
            puVar5[uVar15 * 8] = 0;
            uVar14 = FUN_14071d610((this->BindingLayout_data).offset_0x8);
            puVar5[(uVar15 * 4 + 3) * 2] = uVar14;
            puVar17 = (this->BindingLayout_data).offset_0x58;
            puVar5[(uVar15 * 4 + 1) * 2] =
                 (int)((ulonglong)
                       ((longlong)(this->BindingLayout_data).offset_0x60 - (longlong)puVar17) >> 3)
                 * -0x55555555;
            *(undefined8 **)(puVar5 + (uVar15 * 4 + 2) * 2) = puVar17;
            (this->BindingLayout_data).offset_0x48 =
                 (int)(this->BindingLayout_data).offset_0x508 + -1;
          }
          return this;
        }
        cVar8 = (char)piVar25[1];
        if (cVar8 != '\r') break;
        (this->BindingLayout_data).offset_0x40 = (uint)*(ushort *)((longlong)piVar25 + 6);
        local_68 = *piVar25;
        local_6c = (this->BindingLayout_data).offset_0xc;
        uVar13 = (uint)(*(ushort *)((longlong)piVar25 + 6) >> 2);
        piVar25 = piVar25 + 2;
      }
      if (cVar8 != '\n') break;
      iVar9 = *piVar25;
      uVar14 = (this->BindingLayout_data).offset_0xc;
      lVar20 = (this->BindingLayout_data).offset_0x100;
      piVar26[lVar20 * 4] = -1;
      *(int *)(&(this->BindingLayout_data).offset_0xa4 + lVar20 * 2) = iVar9;
      *(undefined4 *)((longlong)&(this->BindingLayout_data).offset_0xa4 + lVar20 * 0x10 + 4) =
           uVar14;
      (&(this->BindingLayout_data).offset_0xac)[lVar20 * 4] = 8;
      plVar6 = &(this->BindingLayout_data).offset_0x100;
      *plVar6 = *plVar6 + 1;
      piVar25 = piVar25 + 2;
    }
    if (cVar8 == cVar22) {
LAB_140744e50:
      if (*piVar25 != iVar24 + 1) goto LAB_140744e7e;
      if (cVar8 == '\v') {
        piVar2 = (int *)((longlong)(this->BindingLayout_data).offset_0x78 + -0x14);
        *piVar2 = *piVar2 + (uint)*(ushort *)((longlong)piVar25 + 6);
        puVar3 = &(this->BindingLayout_data).offset_0x54;
        *puVar3 = *puVar3 + (uint)*(ushort *)((longlong)piVar25 + 6);
      }
      else {
        piVar2 = (int *)((longlong)(this->BindingLayout_data).offset_0x60 + -0x14);
        *piVar2 = *piVar2 + (uint)*(ushort *)((longlong)piVar25 + 6);
        puVar3 = &(this->BindingLayout_data).offset_0x50;
        *puVar3 = *puVar3 + (uint)*(ushort *)((longlong)piVar25 + 6);
        puVar17 = (this->BindingLayout_data).offset_0x90;
        if (puVar17 == (this->BindingLayout_data).offset_0x98) {
          FUN_140029790(plVar4,puVar17,piVar25);
        }
        else {
          *puVar17 = *(undefined8 *)piVar25;
          ppuVar7 = &(this->BindingLayout_data).offset_0x90;
          *ppuVar7 = *ppuVar7 + 1;
        }
      }
LAB_140744fed:
      iVar24 = *piVar25;
    }
    else {
      cVar18 = cVar8;
      if ((byte)(cVar8 - 5U) < 4) {
        cVar18 = (char)(0x4030403 >> ((cVar8 - 5U) * '\b' & 0x1f));
      }
      if ((byte)(cVar22 - 5U) < 4) {
        bVar27 = false;
        cVar23 = (char)(0x4030403 >> ((cVar22 - 5U) * '\b' & 0x1f));
      }
      else {
        bVar27 = cVar22 == '\x01';
        cVar23 = cVar22;
        if ((bVar27) && (cVar18 == '\x03')) goto LAB_140744e50;
      }
      if ((((((cVar18 == '\x01') && (cVar23 == '\x03')) ||
            ((cVar18 == '\x01' || cVar18 == '\x03' && (cVar23 == '\f')))) ||
           ((cVar18 == '\f' && (bVar27 || cVar23 == '\x03')))) ||
          ((cVar18 == '\x04' && (cVar23 == '\x02')))) || ((cVar18 == '\x02' && (cVar23 == '\x04'))))
      goto LAB_140744e50;
LAB_140744e7e:
      if (cVar8 == '\v') {
        puVar17 = (this->BindingLayout_data).offset_0x70;
        puVar11 = (this->BindingLayout_data).offset_0x78;
        uVar15 = ((longlong)puVar11 - (longlong)puVar17 >> 3) * -0x5555555555555555 + 1;
        if ((longlong)puVar11 - (longlong)puVar17 == -0x18) {
LAB_140744fb1:
          (this->BindingLayout_data).offset_0x78 = puVar17;
        }
        else {
          if (uVar15 <= (ulonglong)
                        (((this->BindingLayout_data).offset_0x80 - (longlong)puVar17 >> 3) *
                        -0x5555555555555555)) {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar17 = puVar11 + 3;
            goto LAB_140744fb1;
          }
          FUN_1401d7a00(&(this->BindingLayout_data).offset_0x70,uVar15,&local_61);
          puVar17 = (this->BindingLayout_data).offset_0x78;
        }
        *(undefined4 *)(puVar17 + -3) = 3;
        *(uint *)((longlong)puVar17 + -0x14) = (uint)*(ushort *)((longlong)piVar25 + 6);
        *(int *)(puVar17 + -2) = *piVar25;
        *(undefined4 *)((longlong)puVar17 + -0xc) = (this->BindingLayout_data).offset_0xc;
        *(uint *)((longlong)puVar17 + -4) = (this->BindingLayout_data).offset_0x54;
        *(undefined4 *)(puVar17 + -1) = 0;
        puVar3 = &(this->BindingLayout_data).offset_0x54;
        *puVar3 = *puVar3 + (uint)*(ushort *)((longlong)piVar25 + 6);
LAB_140744fe8:
        cVar22 = (char)piVar25[1];
        goto LAB_140744fed;
      }
      puVar17 = (this->BindingLayout_data).offset_0x58;
      puVar11 = (this->BindingLayout_data).offset_0x60;
      uVar15 = ((longlong)puVar11 - (longlong)puVar17 >> 3) * -0x5555555555555555 + 1;
      if ((longlong)puVar11 - (longlong)puVar17 == -0x18) {
LAB_140745008:
        (this->BindingLayout_data).offset_0x60 = puVar17;
        cVar8 = (char)piVar25[1];
      }
      else {
        if (uVar15 <= (ulonglong)
                      (((this->BindingLayout_data).offset_0x68 - (longlong)puVar17 >> 3) *
                      -0x5555555555555555)) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar17 = puVar11 + 3;
          goto LAB_140745008;
        }
        FUN_1401d7a00(&(this->BindingLayout_data).offset_0x58,uVar15,&local_62);
        puVar17 = (this->BindingLayout_data).offset_0x60;
        cVar8 = (char)piVar25[1];
      }
      bVar12 = cVar8 - 1;
      if ((bVar12 < 0xe) && ((0x29ffU >> (bVar12 & 0x1f) & 1) != 0)) {
        *(undefined4 *)(puVar17 + -3) = *(undefined4 *)(&DAT_14123d18c + (ulonglong)bVar12 * 4);
        *(uint *)((longlong)puVar17 + -0x14) = (uint)*(ushort *)((longlong)piVar25 + 6);
        *(int *)(puVar17 + -2) = *piVar25;
        *(undefined4 *)((longlong)puVar17 + -0xc) = (this->BindingLayout_data).offset_0xc;
        *(uint *)((longlong)puVar17 + -4) = (this->BindingLayout_data).offset_0x50;
        *(undefined4 *)(puVar17 + -1) = 2;
        puVar3 = &(this->BindingLayout_data).offset_0x50;
        *puVar3 = *puVar3 + (uint)*(ushort *)((longlong)piVar25 + 6);
        puVar17 = (this->BindingLayout_data).offset_0x90;
        if (puVar17 == (this->BindingLayout_data).offset_0x98) {
          FUN_140029790(plVar4,puVar17,piVar25);
        }
        else {
          *puVar17 = *(undefined8 *)piVar25;
          ppuVar7 = &(this->BindingLayout_data).offset_0x90;
          *ppuVar7 = *ppuVar7 + 1;
        }
        goto LAB_140744fe8;
      }
      httplib::ClientImpl::vfunction4();
    }
    piVar25 = piVar25 + 2;
  } while( true );
}

