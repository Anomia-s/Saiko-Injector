/**
 * Function: rem_set_if_exist_errorlevel_for_in_do_break_c
 * Address:  140820ae0
 * Signature: char * __thiscall rem_set_if_exist_errorlevel_for_in_do_break_c(void * this, int param_1)
 * Body size: 17 bytes
 */


char * __thiscall rem_set_if_exist_errorlevel_for_in_do_break_c(void *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 == 1) {
    pcVar1 = 
    "rem set if exist errorlevel for in do break call chcp cd chdir choice cls country ctty date del erase dir echo exit goto loadfix loadhigh mkdir md move path pause prompt rename ren rmdir rd shift time type ver verify vol com con lpt nul"
    ;
  }
  return pcVar1;
}

