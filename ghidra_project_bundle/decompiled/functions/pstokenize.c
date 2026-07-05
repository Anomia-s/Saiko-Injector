/**
 * Function: pstokenize
 * Address:  1408326a0
 * Signature: void __thiscall pstokenize(void * this, char param_1)
 * Body size: 35 bytes
 */


void __thiscall pstokenize(void *this,char param_1)

{
  char *pcVar1;
  
  *(char *)((longlong)this + 0x60) = param_1;
  pcVar1 = "0";
  if (param_1 != '\0') {
    pcVar1 = "1";
  }
  FUN_14074eef0(this,"ps.tokenize",pcVar1);
  return;
}

