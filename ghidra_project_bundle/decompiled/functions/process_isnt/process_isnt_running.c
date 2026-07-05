/**
 * Function: process_isnt_running
 * Address:  140157e40
 * Signature: undefined process_isnt_running(void)
 * Body size: 66 bytes
 */


void process_isnt_running(char *param_1)

{
  if (param_1 == (char *)0x0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","process");
    return;
  }
  if (*param_1 != '\0') {
    terminateprocess_failed();
    return;
  }
  FUN_1400fbed0("Process isn\'t running");
  return;
}

