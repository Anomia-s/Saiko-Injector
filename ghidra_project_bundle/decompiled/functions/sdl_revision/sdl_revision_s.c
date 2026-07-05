/**
 * Function: sdl_revision_s
 * Address:  14015aeb0
 * Signature: undefined sdl_revision_s(void)
 * Body size: 199 bytes
 */


void sdl_revision_s(void)

{
  char *pcVar1;
  char *pcVar2;
  
  thunk_FUN_140453e80();
  FUN_140154970();
  sdl_timer_resolution();
  httplib::ClientImpl::vfunction4();
  if (DAT_141525bc8 == '\0') {
    pcVar1 = (char *)parameter_s_is_invalid("SDL.app.metadata.name");
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "<unspecified>";
    }
    FUN_1400fb890(3,"App name: %s",pcVar1);
    pcVar1 = (char *)parameter_s_is_invalid("SDL.app.metadata.version");
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "<unspecified>";
    }
    FUN_1400fb890(3,"App version: %s",pcVar1);
    pcVar2 = (char *)parameter_s_is_invalid("SDL.app.metadata.identifier");
    pcVar1 = "<unspecified>";
    if (pcVar2 != (char *)0x0) {
      pcVar1 = pcVar2;
    }
    FUN_1400fb890(3,"App ID: %s",pcVar1);
    FUN_1400fb890(3,"SDL revision: %s","SDL3-3.2.4-b5c3eab");
    DAT_141525bc8 = '\x01';
  }
  return;
}

