/**
 * Function: 1_entities_explorer_summarized
 * Address:  140295a10
 * Signature: undefined 1_entities_explorer_summarized(void)
 * Body size: 5327 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001402968e5) */

void __entities_explorer_summarized(QObject *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  QTreeWidgetItem *pQVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 _Src;
  char cVar9;
  int iVar10;
  byte bVar16;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  QObject QVar15;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  QTreeWidgetItem *pQVar21;
  void *_Dst;
  void *pvVar22;
  QObject QVar23;
  ulonglong uVar24;
  QObject *pQVar25;
  QObject *this;
  ulonglong uVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined8 in_stack_fffffffffffffd58;
  undefined4 uVar30;
  undefined4 local_298;
  undefined4 uStack_294;
  longlong local_290;
  undefined4 local_288;
  int iStack_284;
  longlong local_280;
  undefined1 local_130 [8];
  undefined8 *local_128;
  undefined1 local_118 [16];
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f0 [3];
  ulonglong *local_d8;
  QObject *local_d0;
  longlong local_c8;
  undefined8 local_c0 [3];
  uint local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong local_98;
  undefined1 local_88 [16];
  undefined8 *local_78;
  longlong local_70;
  QTreeWidgetItem *local_68;
  QObject *local_60;
  ulonglong local_58;
  byte local_4a;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = param_2;
  lVar11 = FUN_1401a9cc0();
  local_4a = *(byte *)(lVar11 + 0x288);
  if ((local_4a & 1) == 0) {
    local_c8 = 0;
  }
  else {
    lVar11 = FUN_1401a9cc0();
    local_c8 = *(longlong *)(lVar11 + 0x290);
    lVar12 = FUN_1401a9e60();
    uVar18 = *(ulonglong *)(lVar12 + 0x28);
    lVar11 = lVar12;
    if ((uVar18 & 0xffff) == 0) {
      lVar11 = FUN_1400637c0(lVar12,uVar18);
    }
    lVar14 = *(longlong *)(lVar12 + 0x48);
    uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
    *(undefined1 *)(lVar14 + uVar28) = 0xf;
    uVar20 = rdtsc();
    *(ulonglong *)(lVar14 + 1 + uVar28) =
         uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
    *(undefined ***)(lVar14 + 9 + uVar28) = &PTR_s_Studio_Outliner_Rebuild_140e02250;
    *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  QObject::blockSignals(param_1,true);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined8 *)0x0;
  local_298 = 0;
  FUN_140067ea0(local_130,&local_298);
  if (local_58 == 0) {
    QTreeWidgetItem::takeChildren((QTreeWidgetItem *)param_1[6]);
    if (CONCAT44(iStack_284,local_288) != 0) {
      lVar11 = 0;
      do {
        if (*(undefined8 **)(local_290 + lVar11) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(local_290 + lVar11))();
        }
        lVar11 = lVar11 + 8;
      } while (CONCAT44(iStack_284,local_288) << 3 != lVar11);
    }
    piVar8 = (int *)CONCAT44(uStack_294,local_298);
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        free((void *)CONCAT44(uStack_294,local_298));
      }
    }
    if (param_1[0xb] != (QObject)0x0) {
      QVar23 = param_1[10];
      if ((ulonglong)param_1[0xb] < (ulonglong)param_1[0x10] >> 3) {
        FUN_140098440(param_1 + 9);
      }
      else {
        **(undefined8 **)((longlong)QVar23 + 8) = 0;
        puVar17 = *(undefined8 **)QVar23;
        while (puVar17 != (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*puVar17;
          thunk_FUN_140b68ba8(puVar17,0x20);
          puVar17 = puVar5;
        }
        QVar23 = param_1[10];
        *(QObject *)QVar23 = QVar23;
        *(QObject *)((longlong)QVar23 + 8) = QVar23;
        param_1[0xb] = (QObject)0x0;
        QVar23 = param_1[0xc];
        QVar15 = param_1[0xd];
        if (QVar23 != QVar15) {
          uVar30 = *(undefined4 *)(param_1 + 10);
          uVar6 = *(undefined4 *)&param_1[10].field_0x4;
          uVar18 = ((longlong)QVar15 - (longlong)QVar23) - 8;
          if (0x17 < uVar18) {
            uVar18 = (uVar18 >> 3) + 1;
            uVar20 = uVar18 & 0xfffffffffffffffc;
            uVar28 = 0;
            do {
              puVar1 = (undefined4 *)((longlong)QVar23 + uVar28 * 8);
              *puVar1 = uVar30;
              puVar1[1] = uVar6;
              puVar1[2] = uVar30;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)((longlong)QVar23 + 0x10) + uVar28 * 2;
              *puVar1 = uVar30;
              puVar1[1] = uVar6;
              puVar1[2] = uVar30;
              puVar1[3] = uVar6;
              uVar28 = uVar28 + 4;
            } while (uVar20 != uVar28);
            QVar23 = (QObject)((longlong)QVar23 + uVar20 * 8);
            if (uVar18 == uVar20) goto LAB_140296b5c;
          }
          do {
            *(undefined4 *)QVar23 = uVar30;
            *(undefined4 *)((longlong)QVar23 + 4) = uVar6;
            QVar23 = (QObject)((longlong)QVar23 + 8);
          } while (QVar23 != QVar15);
        }
      }
    }
LAB_140296b5c:
    QTreeView::resizeColumnToContents((QTreeView *)param_1,0);
    QObject::blockSignals(param_1,false);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    FUN_1401f9540(&local_298);
    lVar11 = FUN_1401a9cc0();
    local_60 = (QObject *)CONCAT71(local_60._1_7_,*(byte *)(lVar11 + 0x288));
    local_d0 = param_1;
    if ((*(byte *)(lVar11 + 0x288) & 1) == 0) {
      local_68 = (QTreeWidgetItem *)0x0;
    }
    else {
      lVar11 = FUN_1401a9cc0();
      pQVar21 = *(QTreeWidgetItem **)(lVar11 + 0x290);
      lVar12 = FUN_1401a9e60();
      uVar18 = *(ulonglong *)(lVar12 + 0x28);
      lVar11 = lVar12;
      if ((uVar18 & 0xffff) == 0) {
        lVar11 = FUN_1400637c0(lVar12,uVar18);
      }
      lVar14 = *(longlong *)(lVar12 + 0x48);
      uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
      *(undefined1 *)(lVar14 + uVar28) = 0xf;
      uVar20 = rdtsc();
      *(ulonglong *)(lVar14 + 1 + uVar28) =
           uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
      *(undefined ***)(lVar14 + 9 + uVar28) = &PTR_s_Studio_Outliner_Collect_Entities_140e02270;
      *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
      local_68 = pQVar21;
    }
    while (cVar9 = FUN_1401f9650(&local_298), this = local_d0, cVar9 != '\0') {
      uVar18 = 0;
      if (0 < iStack_284) {
        do {
          local_c0[0] = *(undefined8 *)(local_280 + uVar18 * 8);
          _Src = local_88._0_8_;
          if ((undefined8 *)local_88._8_8_ == local_78) {
            uVar26 = local_88._8_8_ - local_88._0_8_;
            uVar13 = (longlong)uVar26 >> 3;
            uVar20 = uVar13 + 1;
            uVar28 = (uVar13 >> 1) + uVar13;
            if (uVar28 <= uVar20) {
              uVar28 = uVar20;
            }
            if (0x1fffffffffffffff - (uVar13 >> 1) < uVar13) {
              uVar28 = 0x1fffffffffffffff;
            }
            if (uVar28 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::bad_array_new_length::bad_array_new_length();
            }
            if (uVar28 == 0) {
              _Dst = (void *)0x0;
            }
            else if (uVar28 < 0x200) {
              _Dst = (void *)FUN_140b65d30(uVar28 * 8);
            }
            else {
              if (0x1ffffffffffffffb < uVar28) {
                    /* WARNING: Subroutine does not return */
                std::bad_array_new_length::bad_array_new_length();
              }
              lVar11 = FUN_140b65d30(uVar28 * 8 + 0x27);
              _Dst = (void *)(lVar11 + 0x27U & 0xffffffffffffffe0);
              *(longlong *)((longlong)_Dst - 8) = lVar11;
            }
            *(undefined8 *)((longlong)_Dst + uVar26) = local_c0[0];
            memmove(_Dst,(void *)_Src,uVar26);
            if ((void *)_Src != (void *)0x0) {
              pvVar22 = (void *)_Src;
              if (0xfff < uVar26) {
                pvVar22 = *(void **)(_Src + -8);
                if (0x1f < (ulonglong)(_Src + (-8 - (longlong)pvVar22))) goto LAB_140296f10;
                uVar26 = uVar26 + 0x27;
              }
              thunk_FUN_140b68ba8(pvVar22,uVar26);
            }
            local_88._8_8_ = (void *)((longlong)_Dst + uVar20 * 8);
            local_88._0_8_ = _Dst;
            local_78 = (undefined8 *)((longlong)_Dst + uVar28 * 8);
          }
          else {
            *(undefined8 *)local_88._8_8_ = local_c0[0];
            local_88._8_8_ = (undefined8 *)(local_88._8_8_ + 8);
          }
          unordered_map_set_too_long(local_130);
          uVar19 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar19;
        } while ((int)uVar19 < iStack_284);
      }
    }
    if ((((ulonglong)local_60 & 1) != 0) &&
       (lVar11 = FUN_1401a9cc0(), *(QTreeWidgetItem **)(lVar11 + 0x290) == local_68)) {
      lVar12 = FUN_1401a9e60();
      uVar18 = *(ulonglong *)(lVar12 + 0x28);
      lVar11 = lVar12;
      if ((uVar18 & 0xffff) == 0) {
        lVar11 = FUN_1400637c0(lVar12,uVar18);
      }
      lVar14 = *(longlong *)(lVar12 + 0x48);
      uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
      *(undefined1 *)(lVar14 + uVar28) = 0x11;
      uVar20 = rdtsc();
      *(ulonglong *)(lVar14 + 1 + uVar28) =
           uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
      *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
    }
    if ((local_4a & 1) != 0) {
      lVar12 = local_88._8_8_ - local_88._0_8_;
      lVar11 = FUN_1401a9cc0();
      if (*(longlong *)(lVar11 + 0x290) == local_c8) {
        lVar11 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar11 + 0x28);
        uVar20 = uVar18 & 0xffff;
        if (uVar20 == 0) {
          FUN_1400637c0(lVar11);
        }
        lVar14 = *(longlong *)(lVar11 + 0x48);
        uVar20 = (ulonglong)(uint)((int)uVar20 << 5);
        *(undefined1 *)(lVar14 + uVar20) = 0x45;
        *(longlong *)(lVar14 + 1 + uVar20) = lVar12 >> 3;
        *(ulonglong *)(lVar11 + 0x28) = uVar18 + 1;
      }
    }
    if ((ulonglong)(local_88._8_8_ - local_88._0_8_) < 0x3d0901) {
      lVar11 = FUN_1401a9cc0();
      bVar16 = *(byte *)(lVar11 + 0x288);
      if ((bVar16 & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = FUN_1401a9cc0();
        lVar11 = *(longlong *)(lVar11 + 0x290);
        lVar14 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar14 + 0x28);
        lVar12 = lVar14;
        if ((uVar18 & 0xffff) == 0) {
          lVar12 = FUN_1400637c0(lVar14,uVar18);
        }
        lVar2 = *(longlong *)(lVar14 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar2 + uVar28) = 0xf;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar2 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar12 >> 0x20),(int)uVar20);
        *(undefined ***)(lVar2 + 9 + uVar28) = &PTR_s_Studio_Outliner_Remove_Dead_Item_140e022b0;
        *(ulonglong *)(lVar14 + 0x28) = uVar18 + 1;
      }
      local_60 = this + 9;
      QVar15 = this[10];
      QVar23 = *(QObject *)QVar15;
      if (QVar23 != QVar15) {
        do {
          while( true ) {
            lVar12 = (((ulonglong)*(byte *)((longlong)QVar23 + 0x17) ^
                      ((ulonglong)*(byte *)((longlong)QVar23 + 0x16) ^
                      ((ulonglong)*(byte *)((longlong)QVar23 + 0x15) ^
                      ((ulonglong)*(byte *)((longlong)QVar23 + 0x14) ^
                      ((ulonglong)*(byte *)((longlong)QVar23 + 0x13) ^
                      ((ulonglong)*(byte *)((longlong)QVar23 + 0x12) ^
                      ((ulonglong)*(byte *)((longlong)QVar23 + 0x11) ^
                      ((ulonglong)*(byte *)((longlong)QVar23 + 0x10) ^ 0xcbf29ce484222325) *
                      0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
                      0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3 & local_100)
                     * 0x10;
            puVar17 = *(undefined8 **)(local_118._0_8_ + 8 + lVar12);
            if (puVar17 == local_128) break;
            if (*(longlong *)((longlong)QVar23 + 0x10) != puVar17[2]) {
              do {
                if (puVar17 == *(undefined8 **)(local_118._0_8_ + lVar12)) goto LAB_140296180;
                puVar17 = (undefined8 *)puVar17[1];
              } while (*(longlong *)((longlong)QVar23 + 0x10) != puVar17[2]);
            }
            QVar23 = *(QObject *)QVar23;
            if (QVar23 == QVar15) goto LAB_1402961b3;
          }
LAB_140296180:
          puVar17 = *(undefined8 **)((longlong)QVar23 + 0x18);
          if (puVar17 != (undefined8 *)0x0) {
            (**(code **)*puVar17)(puVar17,1);
          }
          QVar23 = (QObject)FUN_140184290(local_60);
          QVar15 = this[10];
        } while (QVar23 != QVar15);
      }
LAB_1402961b3:
      if (((bVar16 & 1) != 0) && (lVar12 = FUN_1401a9cc0(), *(longlong *)(lVar12 + 0x290) == lVar11)
         ) {
        lVar12 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar12 + 0x28);
        lVar11 = lVar12;
        if ((uVar18 & 0xffff) == 0) {
          lVar11 = FUN_1400637c0(lVar12,uVar18);
        }
        lVar14 = *(longlong *)(lVar12 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar14 + uVar28) = 0x11;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar14 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
        *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
      }
      lVar11 = FUN_1401a9cc0();
      local_49 = *(byte *)(lVar11 + 0x288);
      if ((local_49 & 1) == 0) {
        local_70 = 0;
      }
      else {
        lVar11 = FUN_1401a9cc0();
        lVar11 = *(longlong *)(lVar11 + 0x290);
        lVar14 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar14 + 0x28);
        lVar12 = lVar14;
        if ((uVar18 & 0xffff) == 0) {
          lVar12 = FUN_1400637c0(lVar14,uVar18);
        }
        lVar2 = *(longlong *)(lVar14 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar2 + uVar28) = 0xf;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar2 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar12 >> 0x20),(int)uVar20);
        *(undefined ***)(lVar2 + 9 + uVar28) = &PTR_s_Studio_Outliner_Ensure_Items_140e022d0;
        *(ulonglong *)(lVar14 + 0x28) = uVar18 + 1;
        local_70 = lVar11;
      }
      local_d8 = (ulonglong *)local_88._8_8_;
      puVar27 = (ulonglong *)local_88._0_8_;
      while (puVar27 != local_d8) {
        uVar18 = *puVar27;
        lVar11 = ((uVar18 >> 0x38 ^
                  (uVar18 >> 0x30 & 0xff ^
                  (uVar18 >> 0x28 & 0xff ^
                  (uVar18 >> 0x20 & 0xff ^
                  (uVar18 >> 0x18 & 0xff ^
                  (uVar18 >> 0x10 & 0xff ^
                  (uVar18 >> 8 & 0xff ^ (uVar18 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                  0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3)
                  * 0x100000001b3) * 0x100000001b3 & (ulonglong)this[0xf]) * 0x10;
        QVar23 = *(QObject *)((longlong)this[0xc] + 8 + lVar11);
        local_f0[0] = uVar18;
        if (QVar23 == this[10]) {
LAB_140296450:
          local_68 = (QTreeWidgetItem *)FUN_140b65d30(0x60);
          QTreeWidgetItem::QTreeWidgetItem(local_68,0);
          QVariant::QVariant((QVariant *)&local_a8,local_f0[0]);
          pQVar21 = local_68;
          (**(code **)(*(longlong *)local_68 + 0x18))(local_68,0,0x100,(QVariant *)&local_a8);
          QVariant::~QVariant((QVariant *)&local_a8);
          FUN_1402977e0((QString *)local_c0,local_58,uVar18);
          QVariant::QVariant((QVariant *)&local_a8,(QString *)local_c0);
          (**(code **)(*(longlong *)pQVar21 + 0x18))(pQVar21,0,0,(QVariant *)&local_a8);
          QVariant::~QVariant((QVariant *)&local_a8);
          QString::~QString((QString *)local_c0);
          FUN_140297980((QString *)local_c0,local_58,uVar18);
          QIcon::operator_class_QVariant((QIcon *)local_c0);
          (**(code **)(*(longlong *)pQVar21 + 0x18))(pQVar21,0,1);
          QVariant::~QVariant((QVariant *)&local_a8);
          QIcon::~QIcon((QIcon *)local_c0);
          QTreeWidgetItem::flags(pQVar21);
          QTreeWidgetItem::setFlags(pQVar21,local_a8 | 2);
          unordered_map_set_too_long(local_60);
          *(QTreeWidgetItem **)(CONCAT44(uStack_a4,local_a8) + 0x18) = pQVar21;
          puVar27 = puVar27 + 1;
        }
        else {
          if (uVar18 != *(ulonglong *)((longlong)QVar23 + 0x10)) {
            do {
              if (QVar23 == *(QObject *)((longlong)this[0xc] + lVar11)) goto LAB_140296450;
              QVar23 = *(QObject *)((longlong)QVar23 + 8);
            } while (uVar18 != *(ulonglong *)((longlong)QVar23 + 0x10));
          }
          if (QVar23 == this[10]) goto LAB_140296450;
          plVar3 = *(longlong **)((longlong)QVar23 + 0x18);
          FUN_1402977e0((QString *)local_c0,local_58,uVar18);
          QVariant::QVariant((QVariant *)&local_a8,(QString *)local_c0);
          (**(code **)(*plVar3 + 0x18))(plVar3,0,0,(QVariant *)&local_a8);
          QVariant::~QVariant((QVariant *)&local_a8);
          QString::~QString((QString *)local_c0);
          plVar3 = *(longlong **)((longlong)QVar23 + 0x18);
          FUN_140297980((QString *)local_c0,local_58,uVar18);
          QIcon::operator_class_QVariant((QIcon *)local_c0);
          (**(code **)(*plVar3 + 0x18))(plVar3);
          QVariant::~QVariant((QVariant *)&local_a8);
          QIcon::~QIcon((QIcon *)local_c0);
          puVar27 = puVar27 + 1;
        }
      }
      if (((local_49 & 1) != 0) &&
         (lVar11 = FUN_1401a9cc0(), *(longlong *)(lVar11 + 0x290) == local_70)) {
        lVar12 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar12 + 0x28);
        lVar11 = lVar12;
        if ((uVar18 & 0xffff) == 0) {
          lVar11 = FUN_1400637c0(lVar12,uVar18);
        }
        lVar14 = *(longlong *)(lVar12 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar14 + uVar28) = 0x11;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar14 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
        *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
      }
      lVar11 = FUN_1401a9cc0();
      local_49 = *(byte *)(lVar11 + 0x288);
      if ((local_49 & 1) == 0) {
        local_70 = 0;
      }
      else {
        lVar11 = FUN_1401a9cc0();
        lVar11 = *(longlong *)(lVar11 + 0x290);
        lVar14 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar14 + 0x28);
        lVar12 = lVar14;
        if ((uVar18 & 0xffff) == 0) {
          lVar12 = FUN_1400637c0(lVar14,uVar18);
        }
        lVar2 = *(longlong *)(lVar14 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar2 + uVar28) = 0xf;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar2 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar12 >> 0x20),(int)uVar20);
        *(undefined ***)(lVar2 + 9 + uVar28) = &PTR_s_Studio_Outliner_Parent_Items_140e022f0;
        *(ulonglong *)(lVar14 + 0x28) = uVar18 + 1;
        local_70 = lVar11;
      }
      local_68 = (QTreeWidgetItem *)local_88._8_8_;
      pQVar21 = (QTreeWidgetItem *)local_88._0_8_;
      uVar18 = local_58;
      if (local_88._0_8_ != local_88._8_8_) {
        do {
          local_c0[0] = *(undefined8 *)pQVar21;
          unordered_map_set_too_long(local_60,&local_a8,local_c0);
          pQVar4 = *(QTreeWidgetItem **)(CONCAT44(uStack_a4,local_a8) + 0x18);
          uVar20 = FUN_1400bbfd0(uVar18);
          pQVar25 = this;
          if (uVar20 == 0) {
LAB_140296927:
            QVar23 = pQVar25[6];
            this = pQVar25;
          }
          else {
            uVar28 = uVar20 >> 0x18 & 0xff;
            local_d8 = (ulonglong *)(uVar20 & 0xff);
            bVar16 = (byte)(uVar20 >> 8);
            uVar26 = uVar20 >> 0x10 & 0xff;
            uVar13 = uVar20 >> 0x20 & 0xff;
            uVar29 = uVar20 >> 0x28 & 0xff;
            uVar24 = uVar20 >> 0x30 & 0xff;
            lVar11 = ((((((((((ulonglong)local_d8 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                            (ulonglong)bVar16) * 0x100000001b3 ^ uVar26) * 0x100000001b3 ^ uVar28) *
                          0x100000001b3 ^ uVar13) * 0x100000001b3 ^ uVar29) * 0x100000001b3 ^ uVar24
                       ) * 0x100000001b3 ^ uVar20 >> 0x38) * 0x100000001b3 & (ulonglong)this[0xf]) *
                     0x10;
            QVar23 = *(QObject *)((longlong)this[0xc] + 8 + lVar11);
            pQVar25 = local_d0;
            uVar18 = local_58;
            if (QVar23 == this[10]) goto LAB_140296927;
            uVar20 = (ulonglong)bVar16 << 8 |
                     (ulonglong)(uint)((int)uVar26 << 0x10) |
                     (ulonglong)(uint)((int)uVar28 << 0x18) |
                     uVar13 << 0x20 | uVar29 << 0x28 | uVar24 << 0x30 | uVar20 & 0xff00000000000000
                     | (ulonglong)local_d8;
            if (uVar20 != *(ulonglong *)((longlong)QVar23 + 0x10)) {
              do {
                if (QVar23 == *(QObject *)((longlong)this[0xc] + lVar11)) goto LAB_140296927;
                QVar23 = *(QObject *)((longlong)QVar23 + 8);
              } while (uVar20 != *(ulonglong *)((longlong)QVar23 + 0x10));
            }
            if ((QVar23 == this[10]) ||
               (QVar23 = *(QObject *)((longlong)QVar23 + 0x18), this = local_d0,
               QVar23 == (QObject)0x0)) goto LAB_140296927;
          }
          QVar15 = *(QObject *)(pQVar4 + 0x38);
          if (QVar23 != QVar15) {
            if (QVar15 == (QObject)0x0) {
              iVar10 = QTreeWidget::indexOfTopLevelItem((QTreeWidget *)this,pQVar4);
              if (-1 < iVar10) {
                iVar10 = QTreeWidget::indexOfTopLevelItem((QTreeWidget *)this,pQVar4);
                QTreeWidget::takeTopLevelItem((QTreeWidget *)this,iVar10);
              }
            }
            else {
              QTreeWidgetItem::removeChild((QTreeWidgetItem *)QVar15,pQVar4);
            }
          }
          if (*(QObject *)(pQVar4 + 0x38) != QVar23) {
            QTreeWidgetItem::addChild((QTreeWidgetItem *)QVar23,pQVar4);
          }
          pQVar21 = pQVar21 + 8;
        } while (pQVar21 != local_68);
      }
      if (((local_49 & 1) != 0) &&
         (lVar11 = FUN_1401a9cc0(), *(longlong *)(lVar11 + 0x290) == local_70)) {
        lVar12 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar12 + 0x28);
        lVar11 = lVar12;
        if ((uVar18 & 0xffff) == 0) {
          lVar11 = FUN_1400637c0(lVar12,uVar18);
        }
        lVar14 = *(longlong *)(lVar12 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar14 + uVar28) = 0x11;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar14 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
        *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
      }
      lVar11 = FUN_1401a9cc0();
      local_58 = CONCAT71(local_58._1_7_,*(byte *)(lVar11 + 0x288));
      if ((*(byte *)(lVar11 + 0x288) & 1) == 0) {
        local_60 = (QObject *)0x0;
      }
      else {
        lVar11 = FUN_1401a9cc0();
        pQVar21 = *(QTreeWidgetItem **)(lVar11 + 0x290);
        lVar12 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar12 + 0x28);
        lVar11 = lVar12;
        if ((uVar18 & 0xffff) == 0) {
          lVar11 = FUN_1400637c0(lVar12,uVar18);
        }
        lVar14 = *(longlong *)(lVar12 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar14 + uVar28) = 0xf;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar14 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
        *(undefined ***)(lVar14 + 9 + uVar28) = &PTR_s_Studio_Outliner_Resize_Column_140e02310;
        *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
        local_60 = (QObject *)pQVar21;
      }
      QTreeView::resizeColumnToContents((QTreeView *)this,0);
      if (((local_58 & 1) != 0) &&
         (lVar11 = FUN_1401a9cc0(), (QObject *)*(QTreeWidgetItem **)(lVar11 + 0x290) == local_60)) {
        lVar12 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar12 + 0x28);
        lVar11 = lVar12;
        if ((uVar18 & 0xffff) == 0) {
          lVar11 = FUN_1400637c0(lVar12,uVar18);
        }
        lVar14 = *(longlong *)(lVar12 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar14 + uVar28) = 0x11;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar14 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
        *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
      }
      QObject::blockSignals(this,false);
      *(undefined1 *)(this + 5) = 0;
    }
    else {
      lVar11 = FUN_1401a9cc0();
      local_58 = CONCAT71(local_58._1_7_,*(byte *)(lVar11 + 0x288));
      if ((*(byte *)(lVar11 + 0x288) & 1) == 0) {
        local_68 = (QTreeWidgetItem *)0x0;
      }
      else {
        lVar11 = FUN_1401a9cc0();
        pQVar21 = *(QTreeWidgetItem **)(lVar11 + 0x290);
        lVar12 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar12 + 0x28);
        lVar11 = lVar12;
        if ((uVar18 & 0xffff) == 0) {
          lVar11 = FUN_1400637c0(lVar12,uVar18);
        }
        lVar14 = *(longlong *)(lVar12 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar14 + uVar28) = 0xf;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar14 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
        *(undefined ***)(lVar14 + 9 + uVar28) = &PTR_s_Studio_Outliner_Summarize_Huge_S_140e02290;
        *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
        local_68 = pQVar21;
      }
      QTreeWidgetItem::takeChildren((QTreeWidgetItem *)this[6]);
      if (local_98 != 0) {
        lVar11 = 0;
        do {
          if (*(undefined8 **)(local_a0 + lVar11) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(local_a0 + lVar11))();
          }
          lVar11 = lVar11 + 8;
        } while (local_98 << 3 != lVar11);
      }
      piVar8 = (int *)CONCAT44(uStack_a4,local_a8);
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          free((void *)CONCAT44(uStack_a4,local_a8));
        }
      }
      uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
      if (this[0xb] != (QObject)0x0) {
        QVar23 = this[10];
        if ((ulonglong)this[0xb] < (ulonglong)this[0x10] >> 3) {
          FUN_140098440(this + 9);
        }
        else {
          **(undefined8 **)((longlong)QVar23 + 8) = 0;
          puVar17 = *(undefined8 **)QVar23;
          while (puVar17 != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)*puVar17;
            thunk_FUN_140b68ba8(puVar17,0x20);
            uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
            puVar17 = puVar5;
          }
          QVar23 = this[10];
          *(QObject *)QVar23 = QVar23;
          *(QObject *)((longlong)QVar23 + 8) = QVar23;
          this[0xb] = (QObject)0x0;
          QVar23 = this[0xc];
          QVar15 = this[0xd];
          if (QVar23 != QVar15) {
            uVar6 = *(undefined4 *)(this + 10);
            uVar7 = *(undefined4 *)&this[10].field_0x4;
            uVar18 = ((longlong)QVar15 - (longlong)QVar23) - 8;
            if (0x17 < uVar18) {
              uVar18 = (uVar18 >> 3) + 1;
              uVar20 = uVar18 & 0xfffffffffffffffc;
              uVar28 = 0;
              do {
                puVar1 = (undefined4 *)((longlong)QVar23 + uVar28 * 8);
                *puVar1 = uVar6;
                puVar1[1] = uVar7;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                puVar1 = (undefined4 *)((longlong)QVar23 + 0x10) + uVar28 * 2;
                *puVar1 = uVar6;
                puVar1[1] = uVar7;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                uVar28 = uVar28 + 4;
              } while (uVar20 != uVar28);
              QVar23 = (QObject)((longlong)QVar23 + uVar20 * 8);
              if (uVar18 == uVar20) goto LAB_140296bcc;
            }
            do {
              *(undefined4 *)QVar23 = uVar6;
              *(undefined4 *)((longlong)QVar23 + 4) = uVar7;
              QVar23 = (QObject)((longlong)QVar23 + 8);
            } while (QVar23 != QVar15);
          }
        }
      }
LAB_140296bcc:
      local_60 = (QObject *)FUN_140b65d30(0x60);
      QTreeWidgetItem::QTreeWidgetItem((QTreeWidgetItem *)local_60,0);
      QString::QString((QString *)local_f0,"%1 entities (Explorer summarized)");
      pQVar25 = local_60;
      QString::arg((QString *)local_f0,local_c0,(longlong)(local_88._8_8_ - local_88._0_8_) >> 3,0,
                   CONCAT44(uVar30,10),0x20);
      QVariant::QVariant((QVariant *)&local_a8,(QString *)local_c0);
      (**(code **)(*(longlong *)pQVar25 + 0x18))(pQVar25,0,0,(QVariant *)&local_a8);
      QVariant::~QVariant((QVariant *)&local_a8);
      QString::~QString((QString *)local_c0);
      QString::~QString((QString *)local_f0);
      QString::QString((QString *)local_c0,":/icons/node.png");
      QIcon::QIcon((QIcon *)local_f0,(QString *)local_c0);
      QIcon::operator_class_QVariant((QIcon *)local_f0);
      (**(code **)(*(longlong *)pQVar25 + 0x18))(pQVar25,0);
      QVariant::~QVariant((QVariant *)&local_a8);
      QIcon::~QIcon((QIcon *)local_f0);
      QString::~QString((QString *)local_c0);
      QTreeWidgetItem::flags((QTreeWidgetItem *)pQVar25);
      QTreeWidgetItem::setFlags((QTreeWidgetItem *)pQVar25,local_a8 & 0xfffffffd);
      QTreeWidgetItem::addChild((QTreeWidgetItem *)this[6],(QTreeWidgetItem *)pQVar25);
      QTreeView::resizeColumnToContents((QTreeView *)this,0);
      QObject::blockSignals(this,false);
      *(undefined1 *)(this + 5) = 0;
      if (((local_58 & 1) != 0) &&
         (lVar11 = FUN_1401a9cc0(), *(QTreeWidgetItem **)(lVar11 + 0x290) == local_68)) {
        lVar12 = FUN_1401a9e60();
        uVar18 = *(ulonglong *)(lVar12 + 0x28);
        lVar11 = lVar12;
        if ((uVar18 & 0xffff) == 0) {
          lVar11 = FUN_1400637c0(lVar12,uVar18);
        }
        lVar14 = *(longlong *)(lVar12 + 0x48);
        uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
        *(undefined1 *)(lVar14 + uVar28) = 0x11;
        uVar20 = rdtsc();
        *(ulonglong *)(lVar14 + 1 + uVar28) =
             uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
        *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
      }
    }
  }
  if (local_118._0_8_ != 0) {
    uVar18 = local_108 - local_118._0_8_;
    lVar11 = local_118._0_8_;
    if (0xfff < uVar18) {
      lVar11 = *(longlong *)(local_118._0_8_ + -8);
      if (0x1f < (ulonglong)((local_118._0_8_ + -8) - lVar11)) goto LAB_140296f10;
      uVar18 = uVar18 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar11,uVar18);
    local_118 = (undefined1  [16])0x0;
    local_108 = 0;
  }
  *(undefined8 *)local_128[1] = 0;
  puVar17 = (undefined8 *)*local_128;
  while (puVar17 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar17;
    thunk_FUN_140b68ba8(puVar17,0x18);
    puVar17 = puVar5;
  }
  thunk_FUN_140b68ba8(local_128,0x18);
  if (local_88._0_8_ != 0) {
    uVar18 = (longlong)local_78 - local_88._0_8_;
    lVar11 = local_88._0_8_;
    if (0xfff < uVar18) {
      lVar11 = *(longlong *)(local_88._0_8_ + -8);
      if (0x1f < (ulonglong)((local_88._0_8_ + -8) - lVar11)) {
LAB_140296f10:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar18 = uVar18 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar11,uVar18);
  }
  if (((local_4a & 1) != 0) && (lVar11 = FUN_1401a9cc0(), *(longlong *)(lVar11 + 0x290) == local_c8)
     ) {
    lVar12 = FUN_1401a9e60();
    uVar18 = *(ulonglong *)(lVar12 + 0x28);
    lVar11 = lVar12;
    if ((uVar18 & 0xffff) == 0) {
      lVar11 = FUN_1400637c0(lVar12,uVar18);
    }
    lVar14 = *(longlong *)(lVar12 + 0x48);
    uVar28 = (ulonglong)(uint)((int)(uVar18 & 0xffff) << 5);
    *(undefined1 *)(lVar14 + uVar28) = 0x11;
    uVar20 = rdtsc();
    *(ulonglong *)(lVar14 + 1 + uVar28) =
         uVar20 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar20);
    *(ulonglong *)(lVar12 + 0x28) = uVar18 + 1;
  }
  return;
}

