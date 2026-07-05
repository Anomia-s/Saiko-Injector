/**
 * Function: unknown_notification_u
 * Address:  1407d2a60
 * Signature: void __thiscall unknown_notification_u(void * this, longlong param_1)
 * Body size: 2523 bytes
 */


void __thiscall unknown_notification_u(void *this,longlong param_1)

{
  uint uVar1;
  void *_Src;
  size_t _Size;
  void *_Dst;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  QMessageLogger local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 2000:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140754410(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18));
      return;
    }
    break;
  case 0x7d1:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753b80(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x20));
      return;
    }
    break;
  case 0x7d2:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Could not recover jumptable at 0x000140754400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      QMetaObject::activate
                (*(QObject **)((longlong)this + 0xa00),(QMetaObject *)&DAT_141244fb8,0x1c,
                 (void **)0x0);
      return;
    }
    break;
  case 0x7d3:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Could not recover jumptable at 0x0001407543e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      QMetaObject::activate
                (*(QObject **)((longlong)this + 0xa00),(QMetaObject *)&DAT_141244fb8,0x1b,
                 (void **)0x0);
      return;
    }
    break;
  case 0x7d4:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Could not recover jumptable at 0x000140754320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      QMetaObject::activate
                (*(QObject **)((longlong)this + 0xa00),(QMetaObject *)&DAT_141244fb8,0x18,
                 (void **)0x0);
      return;
    }
    break;
  default:
    QMessageLogger::QMessageLogger(local_60,(char *)0x0,0,(char *)0x0);
    QMessageLogger::warning
              (local_60,"Unknown notification: %u",(ulonglong)*(uint *)(param_1 + 0x10));
    goto LAB_1407d3339;
  case 0x7d6:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753bf0(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x24));
      return;
    }
    break;
  case 0x7d7:
    QAccessibleTextCursorEvent::QAccessibleTextCursorEvent_Constructor_or_Destructor
              (*(QWidget **)((longlong)this + 0xa00));
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_1407544e0(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x90));
      return;
    }
    break;
  case 0x7d8:
    if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
      if ((*(uint *)(param_1 + 0x28) & 2) != 0) {
        QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent_Constructor_or_Destructor
                  (*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18));
      }
    }
    else {
      QAccessibleTextInsertEvent::QAccessibleTextInsertEvent_Constructor_or_Destructor
                (*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18));
    }
    _Src = *(void **)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((uVar1 & 3) == 0 || _Src == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      _Size = *(size_t *)(param_1 + 0x38);
      _Dst = (void *)thunk_FUN_140b65d30(_Size + 1);
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
    }
    local_68 = *(undefined4 *)(param_1 + 0x88);
    local_70 = *(undefined4 *)(param_1 + 0x80);
    local_78 = *(undefined4 *)(param_1 + 0x6c);
    local_80 = *(undefined4 *)(param_1 + 0x68);
    local_88 = *(undefined4 *)(param_1 + 0x60);
    local_90 = *(undefined4 *)(param_1 + 0x40);
    local_98 = *(undefined4 *)(param_1 + 0x38);
    FUN_140754210(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),uVar1,_Dst
                 );
    if (_Dst != (void *)0x0) {
      if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
        thunk_FUN_140b68ba8(_Dst);
        return;
      }
      break;
    }
    goto LAB_1407d3339;
  case 0x7d9:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140754060(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x48),
                    *(undefined4 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
      return;
    }
    break;
  case 0x7da:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_1407540f0(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x70));
      return;
    }
    break;
  case 0x7db:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140754330(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x38));
      return;
    }
    break;
  case 0x7dd:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Could not recover jumptable at 0x0001407543c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      QMetaObject::activate
                (*(QObject **)((longlong)this + 0xa00),(QMetaObject *)&DAT_141244fb8,0x1a,
                 (void **)0x0);
      return;
    }
    break;
  case 0x7de:
    local_98 = *(undefined4 *)(param_1 + 0x94);
    local_90 = *(undefined4 *)(param_1 + 0x18);
    FUN_140754550(*(undefined8 *)((longlong)this + 0xa00),*(undefined8 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x20));
    local_98 = *(undefined4 *)(param_1 + 0x94);
    FUN_140754600(*(undefined8 *)((longlong)this + 0xa00),*(undefined8 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x20));
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_1407546a0(*(undefined8 *)((longlong)this + 0xa00),*(undefined8 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x74));
      return;
    }
    break;
  case 0x7e0:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753d10(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
      return;
    }
    break;
  case 0x7e1:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753c80(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
      return;
    }
    break;
  case 0x7e2:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Could not recover jumptable at 0x000140754730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      QMetaObject::activate
                (*(QObject **)((longlong)this + 0xa00),(QMetaObject *)&DAT_141244fb8,0x23,
                 (void **)0x0);
      return;
    }
    break;
  case 0x7e3:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753de0(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x24));
      return;
    }
    break;
  case 0x7e4:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753e60(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x24));
      return;
    }
    break;
  case 0x7e5:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753b10(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18));
      return;
    }
    break;
  case 0x7e6:
    local_98 = *(undefined4 *)(param_1 + 0x94);
    FUN_140753940(*(undefined8 *)((longlong)this + 0xa00),*(undefined8 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_1407539e0(*(undefined8 *)((longlong)this + 0xa00),*(undefined8 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x18));
      return;
    }
    break;
  case 0x7e7:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753f60(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x24));
      return;
    }
    break;
  case 0x7e8:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753fe0(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x24));
      return;
    }
    break;
  case 0x7e9:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Could not recover jumptable at 0x000140753870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      QMetaObject::activate
                (*(QObject **)((longlong)this + 0xa00),(QMetaObject *)&DAT_141244fb8,1,(void **)0x0)
      ;
      return;
    }
    break;
  case 0x7ea:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Could not recover jumptable at 0x000140753890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      QMetaObject::activate
                (*(QObject **)((longlong)this + 0xa00),(QMetaObject *)&DAT_141244fb8,2,(void **)0x0)
      ;
      return;
    }
    break;
  case 0x7eb:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753ee0(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x24));
      return;
    }
    break;
  case 0x7ec:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Could not recover jumptable at 0x000140753db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      QMetaObject::activate
                (*(QObject **)((longlong)this + 0xa00),(QMetaObject *)&DAT_141244fb8,0xd,
                 (void **)0x0);
      return;
    }
    break;
  case 0x7ed:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Could not recover jumptable at 0x000140753dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      QMetaObject::activate
                (*(QObject **)((longlong)this + 0xa00),(QMetaObject *)&DAT_141244fb8,0xe,
                 (void **)0x0);
      return;
    }
    break;
  case 0x7ee:
    local_98 = *(undefined4 *)(param_1 + 0x94);
    FUN_1407538a0(*(undefined8 *)((longlong)this + 0xa00),*(undefined8 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
LAB_1407d3339:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      return;
    }
    break;
  case 0x7ef:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140754180(*(undefined8 *)((longlong)this + 0xa00),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x70));
      return;
    }
    break;
  case 0x7f0:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_b8)) {
      FUN_140753a60(*(undefined8 *)((longlong)this + 0xa00),*(undefined8 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_b8);
}

