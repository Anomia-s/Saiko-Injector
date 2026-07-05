/**
 * Function: 2applicationstatechangedqt_applicationstate
 * Address:  140598af0
 * Signature: undefined 2applicationstatechangedqt_applicationstate(void)
 * Body size: 117 bytes
 */


void _applicationstatechangedqt_applicationstate(QObject *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 == 4) {
    return;
  }
  QObject::disconnect(*(QObject **)self_exref,"2applicationStateChanged(Qt::ApplicationState)",
                      param_1,"1onApplicationStateChanged(Qt::ApplicationState)");
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  *(undefined1 *)(puVar1 + 0xc) = 1;
  FUN_140294150(*puVar1);
  uVar2 = FUN_140278a10(puVar1[5]);
  FUN_1405782f0(uVar2);
  uVar2 = FUN_140278a20(puVar1[5]);
  FUN_1405782f0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000140598b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::close((QWidget *)*puVar1);
  return;
}

