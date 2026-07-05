/**
 * Function: true_false_yes_no
 * Address:  14083eb30
 * Signature: char * __thiscall true_false_yes_no(void * this, int param_1)
 * Body size: 17 bytes
 */


char * __thiscall true_false_yes_no(void *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 == 1) {
    pcVar1 = "true false yes no";
  }
  return pcVar1;
}

