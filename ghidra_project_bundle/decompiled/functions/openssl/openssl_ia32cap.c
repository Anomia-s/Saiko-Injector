/**
 * Function: openssl_ia32cap
 * Address:  140d94970
 * Signature: undefined openssl_ia32cap(void)
 * Body size: 315 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void openssl_ia32cap(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(DAT_1416f23a4,DAT_1416f23a0);
  uVar5 = CONCAT44(DAT_1416f239c,DAT_1416f2398);
  uVar4 = CONCAT44(_DAT_1416f2394,DAT_1416f2390);
  uVar3 = CONCAT44(DAT_1416f238c,DAT_1416f2388);
  FUN_140c07aa0(&DAT_141704470,0x100,
                "CPUINFO: OPENSSL_ia32cap=0x%.16llx:0x%.16llx:0x%.16llx:0x%.16llx:0x%.16llx",
                CONCAT44(DAT_1416f2384,DAT_1416f2380),uVar3,uVar4,uVar5,uVar6);
  pcVar1 = getenv("OPENSSL_ia32cap");
  if (pcVar1 != (char *)0x0) {
    sVar2 = strlen(&DAT_141704470);
    FUN_140c07aa0(&DAT_141704470 + sVar2,0x100 - sVar2," env:%s",pcVar1,uVar3,uVar4,uVar5,uVar6);
  }
  if (DAT_141704580 != '\0') {
    FUN_140b8c1e0(&DAT_141704580,&DAT_1413a71f4,0x200);
  }
  FUN_140b8c1e0(&DAT_141704580,"os-specific",0x200);
  DAT_141704570 = &DAT_141704580;
  _DAT_14170457c = 1;
  return;
}

