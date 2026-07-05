/**
 * Function: Unwind@14007e220
 * Address:  14007e220
 * Signature: undefined Unwind@14007e220(void)
 * Body size: 81 bytes
 */


void Unwind_14007e220(undefined8 param_1,longlong param_2)

{
  QObject *this;
  QObject QVar1;
  
  this = *(QObject **)(param_2 + 0xa8);
  QVar1 = this[4];
  if (QVar1 != (QObject)0x0) {
    (*(code *)**(undefined8 **)QVar1)(QVar1,1);
  }
  QObject::~QObject(this);
  return;
}

