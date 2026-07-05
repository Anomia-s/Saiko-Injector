/**
 * Function: file_and_def_end_in_or_self_unless_line_begin
 * Address:  1408368b0
 * Signature: char * __thiscall file_and_def_end_in_or_self_unless_line_begin(void * this, int param_1)
 * Body size: 17 bytes
 */


char * __thiscall file_and_def_end_in_or_self_unless_line_begin(void *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 == 1) {
    pcVar1 = 
    "__FILE__ and def end in or self unless __LINE__ begin defined? ensure module redo super until BEGIN break do false next rescue then when END case else for nil require retry true while alias class elsif if not return undef yield"
    ;
  }
  return pcVar1;
}

