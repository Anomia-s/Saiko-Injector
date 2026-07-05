/**
 * Function: failed_to_serialize_the_world
 * Address:  1402b2f50
 * Signature: undefined __thiscall failed_to_serialize_the_world(void * this)
 * Body size: 2955 bytes
 */


void __thiscall failed_to_serialize_the_world(void *this)

{
  QLabel *this_00;
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char extraout_AL;
  TimerType TVar8;
  ulonglong uVar9;
  QSlotObjectBase *pQVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  QThread *pQVar13;
  ExternalRefCountData *pEVar14;
  undefined4 *puVar15;
  code *pcVar16;
  longlong lVar17;
  void **ppvVar18;
  void **ppvVar19;
  int *piVar20;
  undefined8 in_stack_fffffffffffffc98;
  longlong *plVar21;
  uint uVar22;
  uint in_stack_fffffffffffffcac;
  longlong local_340 [3];
  ulonglong local_328;
  undefined1 local_320;
  undefined7 uStack_31f;
  undefined8 local_310;
  ulonglong local_308;
  char local_2f8 [8];
  undefined8 local_2f0;
  longlong local_2e8;
  ulonglong local_2d0;
  undefined1 local_2c8;
  undefined7 uStack_2c7;
  undefined8 local_2b8;
  ulonglong local_2b0;
  QString local_2a0 [24];
  QString local_288 [16];
  longlong local_278;
  QObject local_270 [8];
  ExternalRefCountData *local_268;
  void *local_260;
  longlong local_258;
  undefined8 *local_250;
  longlong local_248;
  undefined8 uStack_240;
  longlong local_238;
  ExternalRefCountData *local_228;
  void *pvStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  undefined1 local_200;
  uint7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  uint7 uStack_1df;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 *local_1a8;
  undefined1 local_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  ExternalRefCountData *local_118;
  void *pvStack_110;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  ExternalRefCountData *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  uVar22 = (uint)((ulonglong)in_stack_fffffffffffffc98 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  QWidget::setEnabled(*(QWidget **)((longlong)this + 200),false);
  QWidget::setEnabled(*(QWidget **)((longlong)this + 0xd0),false);
  QLineEdit::text(*(QLineEdit **)((longlong)this + 0xb0));
  QString::trimmed_helper(local_288);
  QString::~QString((QString *)&local_118);
  if (local_278 != 0) {
    QTextEdit::toPlainText(*(QTextEdit **)((longlong)this + 0xb8));
    QString::trimmed_helper(local_2a0);
    QString::~QString((QString *)&local_118);
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    plVar21 = &local_248;
    ldv::scene::BufferSink::BufferSink_Constructor_or_Destructor
              (*(undefined8 *)((longlong)this + 0x70),plVar21);
    if (extraout_AL == '\0') {
      QString::QString((QString *)&local_118,"Failed to serialize the world.");
      QString::QString((QString *)&local_198,"Publish");
      QMessageBox::warning(this,&local_198,&local_118,0x400,(ulonglong)uVar22 << 0x20);
      QString::~QString((QString *)&local_198);
      QString::~QString((QString *)&local_118);
    }
    else {
      QString::toStdString(local_2a0);
      QString::toStdString(local_288);
      create_place_no_id_in_response(local_2f8,(longlong)this + 0x28,&local_198,&local_118,plVar21);
      if (0xf < uStack_180) {
        uVar9 = uStack_180 + 1;
        pcVar16 = local_198;
        if (0xfff < uVar9) {
          pcVar16 = *(code **)(local_198 + -8);
          if ((code *)0x1f < local_198 + (-8 - (longlong)pcVar16)) goto LAB_1402b3ac2;
          uVar9 = uStack_180 + 0x28;
        }
        thunk_FUN_140b68ba8(pcVar16,uVar9);
      }
      if (0xf < uStack_100) {
        uVar9 = uStack_100 + 1;
        pEVar14 = local_118;
        if (0xfff < uVar9) {
          pEVar14 = *(ExternalRefCountData **)(local_118 + -8);
          if ((ExternalRefCountData *)0x1f < local_118 + (-8 - (longlong)pEVar14))
          goto LAB_1402b3ac2;
          uVar9 = uStack_100 + 0x28;
        }
        thunk_FUN_140b68ba8(pEVar14,uVar9);
      }
      if (local_2f8[0] == '\0') {
        QString::fromStdString
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_118);
        QString::QString((QString *)&local_198,"Publish Failed");
        QMessageBox::warning
                  (this,&local_198,&local_118,0x400,(ulonglong)plVar21 & 0xffffffff00000000);
        QString::~QString((QString *)&local_198);
        QString::~QString((QString *)&local_118);
      }
      else {
        *(undefined8 *)((longlong)this + 0x88) = local_2f0;
        *(undefined8 *)((longlong)this + 0x68) = local_2f0;
        this_00 = *(QLabel **)((longlong)this + 0xc0);
        QString::QString((QString *)&local_228,"Published as \"%1\"!  ID: %2");
        QString::arg((QString *)&local_228,&local_198,local_288,0,0x20);
        QString::arg((QString *)&local_198,&local_118,local_2f0,0,10,0x20);
        QLabel::setText(this_00,(QString *)&local_118);
        QString::~QString((QString *)&local_118);
        QString::~QString((QString *)&local_198);
        QString::~QString((QString *)&local_228);
        FUN_1402206d0(&local_98,*(undefined8 *)((longlong)this + 0x78));
        if ((local_98 == lStack_90) || (((int)lStack_90 - (int)local_98 & 3U) != 0)) {
          TVar8 = QTimer::defaultTypeFor(800);
          pQVar10 = (QSlotObjectBase *)FUN_140b65d30(0x20);
          *(undefined4 *)pQVar10 = 1;
          *(undefined1 **)(pQVar10 + 8) = &LAB_140085340;
          *(code **)(pQVar10 + 0x10) = oclero::qlementine::QlementineStyle::vfunction51;
          *(undefined4 *)(pQVar10 + 0x18) = 0;
          QTimer::singleShotImpl(800,TVar8,this,pQVar10);
        }
        else {
          local_70 = 0;
          local_6c = 0;
          FUN_140220510(*(undefined8 *)((longlong)this + 0x78),&local_70,&local_6c);
          FUN_1402b1910(local_340,(longlong)this + 0x28);
          local_228 = QtSharedPointer::ExternalRefCountData::getAndRef(this);
          local_208 = local_88;
          lStack_210 = lStack_90;
          local_218 = local_98;
          if (local_228 != (ExternalRefCountData *)0x0) {
            LOCK();
            *(int *)local_228 = *(int *)local_228 + 1;
            UNLOCK();
          }
          local_88 = 0;
          local_98 = 0;
          lStack_90 = 0;
          pvStack_220 = this;
          local_78 = local_228;
          FUN_1402b1910(&local_200,local_340);
          uVar6 = uStack_1c8;
          uVar5 = local_1d0;
          uStack_d8 = uStack_1e8;
          local_e0 = local_1f0;
          lVar2 = local_208;
          lVar17 = lStack_210;
          local_258 = local_218;
          local_260 = pvStack_220;
          local_268 = local_228;
          local_1b8 = local_70;
          uStack_1b4 = local_6c;
          local_228 = (ExternalRefCountData *)0x0;
          pvStack_220 = (void *)0x0;
          local_208 = 0;
          local_218 = 0;
          lStack_210 = 0;
          local_f0 = CONCAT71(uStack_1ff,local_200);
          uStack_168 = uStack_1f8;
          local_1f0 = 0;
          uStack_1e8 = 0xf;
          local_200 = 0;
          uVar3 = CONCAT71(uStack_1df,local_1e0);
          uStack_148 = uStack_1d8;
          uVar7 = uStack_148;
          local_1d0 = 0;
          uStack_1c8 = 0xf;
          local_1e0 = 0;
          local_130 = local_1c0;
          uVar4 = CONCAT44(local_6c,local_70);
          local_118 = local_268;
          pvStack_110 = local_260;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = (code *)0x0;
          uStack_190 = 0;
          local_178 = 0;
          local_108 = local_258;
          uStack_100 = lVar17;
          local_f8 = lVar2;
          uStack_e8 = uStack_1f8;
          local_160 = 0;
          uStack_158 = 0xf;
          local_170 = (ulonglong)uStack_1ff << 8;
          local_150._0_4_ = (uint)uVar3;
          local_150._4_4_ = (undefined4)(uStack_1df >> 0x18);
          uStack_148._0_4_ = (undefined4)uStack_1d8;
          uStack_148._4_4_ = (undefined4)((ulonglong)uStack_1d8 >> 0x20);
          local_140._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_138._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          local_d0 = (uint)local_150;
          uStack_cc = local_150._4_4_;
          uStack_c8 = (undefined4)uStack_148;
          uStack_c4 = uStack_148._4_4_;
          local_c0._0_4_ = (undefined4)uVar5;
          local_c0._4_4_ = local_140._4_4_;
          uStack_b8._0_4_ = (undefined4)uVar6;
          uStack_b8._4_4_ = uStack_138._4_4_;
          local_140 = 0;
          uStack_138 = 0xf;
          local_150 = (ulonglong)uStack_1df << 8;
          local_b0 = local_1c0;
          uStack_148 = uVar7;
          local_128 = uVar4;
          local_a8 = uVar4;
          puVar11 = (undefined8 *)FUN_140b65d30(0x110);
                    /* inlined constructor or destructor (approx location) for
                       std::_Associated_state<int> */
          *puVar11 = &std::_Associated_state<int>::vftable;
          *(undefined4 *)(puVar11 + 1) = 1;
          *(undefined8 *)((longlong)puVar11 + 0xc) = 0;
          *(undefined8 *)((longlong)puVar11 + 0x14) = 0;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
          local_68 = puVar11;
          __ExceptionPtrCreate(puVar11 + 2);
          puVar11[0xb] = 0;
          puVar11[0xc] = 0;
          puVar11[9] = 0;
          puVar11[10] = 0;
          puVar11[7] = 0;
          puVar11[8] = 0;
          puVar11[5] = 0;
          puVar11[6] = 0;
          *(undefined4 *)(puVar11 + 0xd) = 0xffffffff;
          *(undefined4 *)(puVar11 + 4) = 2;
          *(undefined8 *)((longlong)puVar11 + 0x6c) = 0;
          *(undefined8 *)((longlong)puVar11 + 0x74) = 0;
          *(undefined8 *)((longlong)puVar11 + 0x7c) = 0;
          *(undefined8 *)((longlong)puVar11 + 0x84) = 0;
          *(undefined8 *)((longlong)puVar11 + 0x8c) = 0;
          *(undefined8 *)((longlong)puVar11 + 0x94) = 0;
          *(undefined8 *)((longlong)puVar11 + 0x9c) = 0;
          *(undefined8 *)((longlong)puVar11 + 0xa4) = 0;
          *(undefined8 *)((longlong)puVar11 + 0xa9) = 0;
          *(undefined8 *)((longlong)puVar11 + 0xb1) = 0;
          *(undefined4 *)((longlong)puVar11 + 0xbc) = 0;
          *(undefined4 *)((longlong)puVar11 + 0xbf) = 0;
          puVar11[0x19] = 0;
                    /* inlined constructor or destructor (approx location) for
                       std::_Packaged_state<void___cdecl(void)> */
          *puVar11 = &std::_Packaged_state<void___cdecl(void)>::vftable;
          local_250 = puVar11 + 0x1a;
          puVar11[0x21] = 0;
          puVar12 = (undefined8 *)FUN_140b65d30(0x80);
          puVar11 = local_68;
          piVar20 = (int *)(local_68 + 1);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<std::_Fake_no_copy_callable_adapter<`public:_static_class_QThread*___ptr64___cdecl_QThread::create<`private:_void___cdecl_ldv::editor::PublishDialog::onPublishNew(void)___ptr64'::`1'::<lambda_2>_>(`private:_void___cdecl_ldv::editor::PublishDialog::onPublishNew(void)___ptr64'::`1'::<lambda_2>&&___ptr64)'::`1'::<lambda_1>_>,void>
                        */
          *puVar12 = &std::
                      _Func_impl_no_alloc<std::_Fake_no_copy_callable_adapter<`public:_static_class_QThread*___ptr64___cdecl_QThread::create<`private:_void___cdecl_ldv::editor::PublishDialog::onPublishNew(void)___ptr64'::`1'::<lambda_2>_>(`private:_void___cdecl_ldv::editor::PublishDialog::onPublishNew(void)___ptr64'::`1'::<lambda_2>&&___ptr64)'::`1'::<lambda_1>_>,void>
                      ::vftable;
          puVar12[1] = local_268;
          puVar12[2] = local_260;
          local_108 = 0;
          uStack_100 = 0;
          local_118 = (ExternalRefCountData *)0x0;
          pvStack_110 = (void *)0x0;
          local_f8 = 0;
          puVar12[3] = local_258;
          puVar12[4] = lVar17;
          puVar12[5] = lVar2;
          puVar12[6] = local_f0;
          puVar12[7] = uStack_e8;
          puVar12[8] = local_e0;
          puVar12[9] = uStack_d8;
          local_e0 = 0;
          uStack_d8 = 0xf;
          local_f0 = local_f0 & 0xffffffffffffff00;
          *(undefined4 *)(puVar12 + 0xc) = (undefined4)local_c0;
          *(undefined4 *)((longlong)puVar12 + 100) = local_c0._4_4_;
          *(undefined4 *)(puVar12 + 0xd) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)puVar12 + 0x6c) = uStack_b8._4_4_;
          *(uint *)(puVar12 + 10) = local_d0;
          *(undefined4 *)((longlong)puVar12 + 0x54) = uStack_cc;
          *(undefined4 *)(puVar12 + 0xb) = uStack_c8;
          *(undefined4 *)((longlong)puVar12 + 0x5c) = uStack_c4;
          local_c0 = 0;
          uStack_b8 = 0xf;
          local_d0 = local_d0 & 0xffffff00;
          puVar12[0xe] = local_1c0;
          puVar12[0xf] = uVar4;
          local_68[0x21] = puVar12;
                    /* inlined constructor or destructor (approx location) for
                       std::_Deferred_async_state<void> */
          *local_68 = &std::_Deferred_async_state<void>::vftable;
          FUN_1402b49b0(&local_118);
          local_1a8 = puVar11;
          local_1a0 = 1;
          LOCK();
          piVar1 = (int *)(puVar11 + 1);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          LOCK();
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if (*piVar20 == 0) {
            puVar11 = (undefined8 *)local_68[0x19];
            if (puVar11 == (undefined8 *)0x0) {
              (**(code **)*local_68)(local_68,1);
            }
            else {
              (**(code **)*puVar11)(puVar11,local_68);
            }
          }
          pQVar13 = QThread::createThreadImpl((future<void> *)&local_1a8);
          if (local_1a8 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_1a8 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              if ((undefined8 *)local_1a8[0x19] == (undefined8 *)0x0) {
                (**(code **)*local_1a8)(local_1a8,1);
              }
              else {
                (*(code *)**(undefined8 **)local_1a8[0x19])();
              }
            }
          }
          FUN_1402b49b0((QSlotObjectBase *)&local_198);
          if (pQVar13 == (QThread *)0x0) {
            pEVar14 = (ExternalRefCountData *)0x0;
          }
          else {
            pEVar14 = QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar13);
          }
          piVar1 = *(int **)((longlong)this + 0xd8);
          *(ExternalRefCountData **)((longlong)this + 0xd8) = pEVar14;
          *(QThread **)((longlong)this + 0xe0) = pQVar13;
          if (piVar1 != (int *)0x0) {
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              FUN_140b68ba8();
            }
          }
          FUN_1402b49b0();
          pcVar16 = deleteLater_exref;
          local_198 = deleteLater_exref;
          lVar17 = *(longlong *)((longlong)this + 0xd8);
          if (lVar17 == 0) {
            ppvVar18 = (void **)0x0;
            ppvVar19 = (void **)0x0;
          }
          else {
            ppvVar18 = *(void ***)((longlong)this + 0xe0);
            if (*(int *)(lVar17 + 4) == 0) {
              ppvVar18 = (void **)0x0;
            }
            ppvVar19 = *(void ***)((longlong)this + 0xe0);
            if (*(int *)(lVar17 + 4) == 0) {
              ppvVar19 = (void **)0x0;
            }
          }
          local_118 = (ExternalRefCountData *)finished_exref;
          puVar15 = (undefined4 *)FUN_140b65d30(0x18);
          *puVar15 = 1;
          *(undefined1 **)(puVar15 + 2) = &LAB_1400863a0;
          *(code **)(puVar15 + 4) = pcVar16;
          QObject::connectImpl
                    (local_270,ppvVar19,(QObject *)&local_118,ppvVar18,(QSlotObjectBase *)&local_198
                     ,(ConnectionType)puVar15,(int *)((ulonglong)in_stack_fffffffffffffcac << 0x20),
                     (QMetaObject *)0x0);
          QMetaObject::Connection::~Connection((Connection *)local_270);
          QThread::start(*(QThread **)((longlong)this + 0xe0),7);
          if (local_78 != (ExternalRefCountData *)0x0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            UNLOCK();
            if (*(int *)local_78 == 0) {
              FUN_140b68ba8();
            }
          }
          if (0xf < local_308) {
            lVar2 = CONCAT71(uStack_31f,local_320);
            uVar9 = local_308 + 1;
            lVar17 = lVar2;
            if (0xfff < uVar9) {
              lVar17 = *(longlong *)(lVar2 + -8);
              if (0x1f < (ulonglong)((lVar2 + -8) - lVar17)) goto LAB_1402b3ac2;
              uVar9 = local_308 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar17,uVar9);
          }
          local_310 = 0;
          local_308 = 0xf;
          local_320 = 0;
          if (0xf < local_328) {
            uVar9 = local_328 + 1;
            lVar17 = local_340[0];
            if (0xfff < uVar9) {
              lVar17 = *(longlong *)(local_340[0] + -8);
              if (0x1f < (ulonglong)((local_340[0] + -8) - lVar17)) goto LAB_1402b3ac2;
              uVar9 = local_328 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar17,uVar9);
          }
        }
        if (local_98 != 0) {
          uVar9 = local_88 - local_98;
          lVar17 = local_98;
          if (0xfff < uVar9) {
            lVar17 = *(longlong *)(local_98 + -8);
            if (0x1f < (ulonglong)((local_98 + -8) - lVar17)) goto LAB_1402b3ac2;
            uVar9 = uVar9 + 0x27;
          }
          thunk_FUN_140b68ba8(lVar17,uVar9);
        }
      }
      if (0xf < local_2b0) {
        lVar2 = CONCAT71(uStack_2c7,local_2c8);
        uVar9 = local_2b0 + 1;
        lVar17 = lVar2;
        if (0xfff < uVar9) {
          lVar17 = *(longlong *)(lVar2 + -8);
          if (0x1f < (ulonglong)((lVar2 + -8) - lVar17)) goto LAB_1402b3ac2;
          uVar9 = local_2b0 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar17,uVar9);
      }
      local_2b8 = 0;
      local_2b0 = 0xf;
      local_2c8 = 0;
      if (0xf < local_2d0) {
        uVar9 = local_2d0 + 1;
        lVar17 = local_2e8;
        if (0xfff < uVar9) {
          lVar17 = *(longlong *)(local_2e8 + -8);
          if (0x1f < (ulonglong)((local_2e8 + -8) - lVar17)) goto LAB_1402b3ac2;
          uVar9 = local_2d0 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar17,uVar9);
      }
    }
    if (local_248 != 0) {
      uVar9 = local_238 - local_248;
      lVar17 = local_248;
      if (0xfff < uVar9) {
        lVar17 = *(longlong *)(local_248 + -8);
        if (0x1f < (ulonglong)((local_248 + -8) - lVar17)) {
LAB_1402b3ac2:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar9 = uVar9 + 0x27;
      }
      thunk_FUN_140b68ba8(lVar17,uVar9);
    }
    QString::~QString(local_2a0);
  }
  QString::~QString(local_288);
  return;
}

