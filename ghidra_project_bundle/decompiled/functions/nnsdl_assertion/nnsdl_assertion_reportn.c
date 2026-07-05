/**
 * Function: nnsdl_assertion_reportn
 * Address:  14015bc60
 * Signature: undefined nnsdl_assertion_reportn(void)
 * Body size: 307 bytes
 */


void nnsdl_assertion_reportn(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  
  pcVar2 = DAT_141525c10;
  if ((DAT_141525c10 != (char *)0x0) && ((code *)PTR_assertion_failed_1414f8ce8 != assertion_failed)
     ) {
    FUN_14015c2a0("\n\nSDL assertion report.\n");
    FUN_14015c2a0("All SDL assertions between last init/quit:\n\n");
    do {
      pcVar1 = "no";
      if (*pcVar2 != '\0') {
        pcVar1 = "yes";
      }
      puVar3 = &DAT_141339892;
      if (*(int *)(pcVar2 + 4) == 1) {
        puVar3 = &DAT_1413a2ad6;
      }
      FUN_14015c2a0("\'%s\'\n    * %s (%s:%d)\n    * triggered %u time%s.\n    * always ignore: %s.\n"
                    ,*(undefined8 *)(pcVar2 + 8),*(undefined8 *)(pcVar2 + 0x20),
                    *(undefined8 *)(pcVar2 + 0x10),*(undefined4 *)(pcVar2 + 0x18),
                    *(int *)(pcVar2 + 4),puVar3,pcVar1);
      pcVar2 = *(char **)(pcVar2 + 0x28);
    } while (pcVar2 != (char *)0x0);
    FUN_14015c2a0("\n");
    while (DAT_141525c10 != (char *)0x0) {
      pcVar2 = *(char **)(DAT_141525c10 + 0x28);
      *DAT_141525c10 = '\0';
      DAT_141525c10[4] = '\0';
      DAT_141525c10[5] = '\0';
      DAT_141525c10[6] = '\0';
      DAT_141525c10[7] = '\0';
      DAT_141525c10[0x28] = '\0';
      DAT_141525c10[0x29] = '\0';
      DAT_141525c10[0x2a] = '\0';
      DAT_141525c10[0x2b] = '\0';
      DAT_141525c10[0x2c] = '\0';
      DAT_141525c10[0x2d] = '\0';
      DAT_141525c10[0x2e] = '\0';
      DAT_141525c10[0x2f] = '\0';
      DAT_141525c10 = pcVar2;
    }
    DAT_141525c10 = (char *)0x0;
  }
  if (DAT_141525c00 != 0) {
    FUN_140155290();
    DAT_141525c00 = 0;
  }
  return;
}

