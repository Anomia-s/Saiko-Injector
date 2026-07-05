/**
 * Function: leaked_s_p
 * Address:  1403d90f0
 * Signature: undefined leaked_s_p(void)
 * Body size: 270 bytes
 */


void leaked_s_p(void)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  cVar1 = FUN_140138440(&DAT_1416f1388);
  if (cVar1 != '\0') {
    local_50 = 0;
    cVar1 = FUN_1403d8c20(DAT_1416f13a0,&local_40,local_48,&local_50);
    if (cVar1 != '\0') {
      do {
        pcVar2 = "unknown object";
        if (local_48[0] - 1U < 0xb) {
          pcVar2 = (&PTR_s_SDL_Window_140e0c3e0)[local_48[0] - 1U];
        }
        FUN_1400fb540("Leaked %s (%p)",pcVar2,local_40);
        cVar1 = FUN_1403d8c20(DAT_1416f13a0,&local_40,local_48,&local_50);
      } while (cVar1 != '\0');
    }
    FUN_1403d81d0(DAT_1416f13a0);
    DAT_1416f13a0 = 0;
    FUN_1401384b0(&DAT_1416f1388,0);
  }
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_78);
}

