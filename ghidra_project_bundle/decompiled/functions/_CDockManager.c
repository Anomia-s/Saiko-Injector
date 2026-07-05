/**
 * Function: ~CDockManager
 * Address:  140277ea0
 * Signature: void __thiscall ~CDockManager(CDockManager * this)
 * Body size: 1436 bytes
 */


void __thiscall ads::CDockManager::~CDockManager(CDockManager *this)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  int *piVar4;
  QObject *pQVar5;
  QObject *pQVar6;
  int iVar7;
  QObject *pQVar8;
  CDockManager *pCVar9;
  ExternalRefCountData *pEVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  QObject *pQVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int *local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  QObject *local_78;
  QObject *pQStack_70;
  QObject *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  iVar13 = 0;
  while (iVar7 = FUN_14056c3e0(this), plVar15 = plStack_90, plVar12 = local_98, iVar13 != iVar7) {
    pQVar8 = (QObject *)FUN_14056c360(this,iVar13);
    if (pQVar8 == (QObject *)0x0) {
      local_78 = (QObject *)0x0;
    }
    else {
      local_78 = (QObject *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
    }
    pQStack_70 = pQVar8;
    if (plStack_90 == local_88) {
      FUN_14027b300(&local_98);
      if (local_78 != (QObject *)0x0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        if ((*(int *)local_78 == 0) && (local_78 != (QObject *)0x0)) {
          FUN_140b68ba8();
        }
      }
      iVar13 = iVar13 + 1;
    }
    else {
      *plStack_90 = (longlong)local_78;
      plStack_90[1] = (longlong)pQVar8;
      plStack_90 = plStack_90 + 2;
      iVar13 = iVar13 + 1;
    }
  }
  for (; plVar12 != plVar15; plVar12 = plVar12 + 2) {
    piVar2 = (int *)*plVar12;
    if (piVar2 != (int *)0x0) {
      lVar14 = plVar12[1];
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      if ((lVar14 == 0 || piVar2[1] == 0) ||
         (pCVar9 = (CDockManager *)FUN_1405738f0(lVar14), pCVar9 != this)) {
LAB_140278130:
        LOCK();
        *piVar2 = *piVar2 + -1;
        iVar13 = *piVar2;
        UNLOCK();
      }
      else {
        local_78 = (QObject *)0x0;
        pQStack_70 = (QObject *)0x0;
        local_68 = (QObject *)0x0;
        FUN_140574f70(lVar14);
        if ((local_b0 == (int *)0x0) || (1 < *local_b0)) {
          FUN_140096f80(&local_b0);
          if (local_b0 != (int *)0x0) {
            iVar13 = *local_b0;
            puVar17 = local_a8;
            goto joined_r0x00014027803b;
          }
LAB_14027804d:
          puVar17 = local_a8;
          FUN_140096f80(&local_b0);
        }
        else {
          iVar13 = *local_b0;
          puVar17 = local_a8;
joined_r0x00014027803b:
          local_a8 = puVar17;
          if (1 < iVar13) goto LAB_14027804d;
        }
        puVar1 = local_a8 + local_a0;
        for (; puVar17 != puVar1; puVar17 = puVar17 + 1) {
          while( true ) {
            pQVar8 = (QObject *)*puVar17;
            if (pQVar8 == (QObject *)0x0) {
              pEVar10 = (ExternalRefCountData *)0x0;
            }
            else {
              pEVar10 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
            }
            if (pQStack_70 != local_68) break;
            FUN_14027b300();
            if (pEVar10 != (ExternalRefCountData *)0x0) {
              LOCK();
              *(int *)pEVar10 = *(int *)pEVar10 + -1;
              UNLOCK();
              if ((*(int *)pEVar10 == 0) && (pEVar10 != (ExternalRefCountData *)0x0)) {
                FUN_140b68ba8();
              }
            }
            puVar17 = puVar17 + 1;
            if (puVar17 == puVar1) goto LAB_1402780f9;
          }
          *(ExternalRefCountData **)pQStack_70 = pEVar10;
          *(QObject **)(pQStack_70 + 8) = pQVar8;
          pQStack_70 = pQStack_70 + 0x10;
        }
LAB_1402780f9:
        pQVar8 = local_78;
        pQVar16 = local_78;
        pQVar5 = pQStack_70;
        if (local_b0 != (int *)0x0) {
          LOCK();
          *local_b0 = *local_b0 + -1;
          UNLOCK();
          if (*local_b0 == 0) {
            free(local_b0);
            pQVar8 = local_78;
            pQVar16 = local_78;
            pQVar5 = pQStack_70;
          }
        }
        for (; pQVar6 = pQStack_70, local_78 = pQVar16, pQVar8 != pQStack_70; pQVar8 = pQVar8 + 0x10
            ) {
          piVar4 = *(int **)pQVar8;
          pQStack_70 = pQVar5;
          if (piVar4 != (int *)0x0) {
            plVar3 = *(longlong **)(pQVar8 + 8);
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
            if (plVar3 != (longlong *)0x0 && piVar4[1] != 0) {
              (**(code **)(*plVar3 + 0x18))();
            }
            LOCK();
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              FUN_140b68ba8();
            }
          }
          pQVar16 = local_78;
          pQVar5 = pQStack_70;
          pQStack_70 = pQVar6;
        }
        pQStack_70 = pQVar5;
        if (pQVar16 == (QObject *)0x0) goto LAB_140278130;
        if (pQVar16 == pQVar5) {
          uVar11 = (longlong)local_68 - (longlong)pQVar16;
        }
        else {
          do {
            piVar4 = *(int **)pQVar16;
            if (piVar4 != (int *)0x0) {
              LOCK();
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if ((*piVar4 == 0) && (*(longlong *)pQVar16 != 0)) {
                FUN_140b68ba8();
              }
            }
            pQVar16 = pQVar16 + 0x10;
          } while (pQVar16 != pQVar5);
          uVar11 = (longlong)local_68 - (longlong)local_78;
        }
        pQVar8 = local_78;
        if ((0xfff < uVar11) &&
           (pQVar8 = *(QObject **)(local_78 + -8),
           (QObject *)0x1f < local_78 + (-8 - (longlong)pQVar8))) goto LAB_140278479;
        thunk_FUN_140b68ba8(pQVar8);
        LOCK();
        *piVar2 = *piVar2 + -1;
        iVar13 = *piVar2;
        UNLOCK();
      }
      if (iVar13 == 0) {
        FUN_140b68ba8(piVar2);
      }
    }
  }
  lVar14 = (this->CDockManager_data).offset_0x0;
  local_78 = *(QObject **)(lVar14 + 8);
  pQStack_70 = *(QObject **)(lVar14 + 0x10);
  piVar2 = *(int **)(lVar14 + 8);
  local_68 = *(QObject **)(lVar14 + 0x18);
  if (piVar2 == (int *)0x0) {
LAB_14027825f:
    FUN_14027a7a0(&local_78,0);
    if (local_78 != (QObject *)0x0) {
      iVar13 = *(int *)local_78;
      pQVar8 = pQStack_70;
      goto joined_r0x000140278284;
    }
  }
  else {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if ((local_78 == (QObject *)0x0) || (1 < *(int *)local_78)) goto LAB_14027825f;
    iVar13 = *(int *)local_78;
    pQVar8 = pQStack_70;
joined_r0x000140278284:
    pQStack_70 = pQVar8;
    if (iVar13 < 2) goto LAB_1402782aa;
  }
  pQVar8 = pQStack_70;
  FUN_14027a7a0(&local_78,0);
LAB_1402782aa:
  pQVar16 = pQStack_70 + (longlong)local_68 * 0x10;
  for (; plVar15 = plStack_90, plVar12 = local_98, pQVar8 != pQVar16; pQVar8 = pQVar8 + 0x10) {
    piVar2 = *(int **)pQVar8;
    plVar15 = *(longlong **)(pQVar8 + 8);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    FUN_14056fa90();
    if (piVar2[1] != 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15,1);
    }
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_140b68ba8();
    }
  }
  for (; plVar12 != plVar15; plVar12 = plVar12 + 2) {
    piVar2 = (int *)*plVar12;
    if (piVar2 != (int *)0x0) {
      plVar3 = (longlong *)plVar12[1];
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      if (plVar3 != (longlong *)0x0 && piVar2[1] != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,1);
      }
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        FUN_140b68ba8();
      }
    }
  }
  lVar14 = (this->CDockManager_data).offset_0x0;
  if (lVar14 != 0) {
    FUN_1402784d0(lVar14);
    thunk_FUN_140b68ba8(lVar14,0xe0);
  }
  pQVar8 = pQStack_70;
  if (local_78 != (QObject *)0x0) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + -1;
    UNLOCK();
    if (*(int *)local_78 == 0) {
      if (local_68 != (QObject *)0x0) {
        lVar14 = (longlong)local_68 << 4;
        lVar18 = 0;
        do {
          piVar2 = *(int **)(pQVar8 + lVar18);
          if (piVar2 != (int *)0x0) {
            LOCK();
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((*piVar2 == 0) && (*(longlong *)(pQVar8 + lVar18) != 0)) {
              FUN_140b68ba8();
            }
          }
          lVar18 = lVar18 + 0x10;
        } while (lVar14 != lVar18);
      }
      free(local_78);
    }
  }
  plVar15 = plStack_90;
  if (local_98 != (longlong *)0x0) {
    plVar12 = local_98;
    if (local_98 == plStack_90) {
      uVar11 = (longlong)local_88 - (longlong)local_98;
    }
    else {
      do {
        piVar2 = (int *)*plVar12;
        if (piVar2 != (int *)0x0) {
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((*piVar2 == 0) && (*plVar12 != 0)) {
            FUN_140b68ba8();
          }
        }
        plVar12 = plVar12 + 2;
      } while (plVar12 != plVar15);
      uVar11 = (longlong)local_88 - (longlong)local_98;
    }
    plVar15 = local_98;
    if (0xfff < uVar11) {
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - local_98[-1]))) {
LAB_140278479:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = uVar11 + 0x27;
      plVar15 = (longlong *)local_98[-1];
    }
    thunk_FUN_140b68ba8(plVar15,uVar11);
  }
  CDockContainerWidget::~CDockContainerWidget((CDockContainerWidget *)this);
  return;
}

