/**
 * Function: file_line_break_case_catch_classdef_continue
 * Address:  14082e130
 * Signature: char * __thiscall file_line_break_case_catch_classdef_continue(void * this, int param_1)
 * Body size: 17 bytes
 */


char * __thiscall file_line_break_case_catch_classdef_continue(void *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 == 1) {
    pcVar1 = 
    "__FILE__ __LINE__ break case catch classdef continue do else elseif end end_try_catch end_unwind_protect endclassdef endenumeration endevents endfor endfunction endif endmethods endparfor endproperties endswitch endwhile enumeration events for function get global if methods otherwise parfor persistent properties return set static switch try until unwind_protect unwind_protect_cleanup while"
    ;
  }
  return pcVar1;
}

