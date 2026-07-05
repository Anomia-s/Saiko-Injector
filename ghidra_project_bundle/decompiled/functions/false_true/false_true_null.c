/**
 * Function: false_true_null
 * Address:  14082c490
 * Signature: char * __thiscall false_true_null(void * this, int param_1)
 * Body size: 31 bytes
 */


char * __thiscall false_true_null(void *this,int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if (param_1 == 2) {
    pcVar2 = 
    "@id @context @type @value @language @container @list @set @reverse @index @base @vocab @graph";
  }
  pcVar1 = "false true null";
  if (param_1 != 1) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}

