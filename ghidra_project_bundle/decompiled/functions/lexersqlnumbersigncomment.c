/**
 * Function: lexersqlnumbersigncomment
 * Address:  140837ac0
 * Signature: void __thiscall lexersqlnumbersigncomment(void * this)
 * Body size: 236 bytes
 */


void __thiscall lexersqlnumbersigncomment(void *this)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "0";
  pcVar2 = "0";
  if (*(char *)((longlong)this + 0x60) != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"fold.sql.at.else",pcVar2);
  pcVar2 = "0";
  if (*(char *)((longlong)this + 0x61) != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"fold.comment",pcVar2);
  pcVar2 = "0";
  if (*(char *)((longlong)this + 0x62) != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"fold.compact",pcVar2);
  pcVar2 = "0";
  if (*(char *)((longlong)this + 99) != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"fold.sql.only.begin",pcVar2);
  pcVar2 = "0";
  if (*(char *)((longlong)this + 100) != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"lexer.sql.backticks.identifier",pcVar2);
  pcVar2 = "0";
  if (*(char *)((longlong)this + 0x65) != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"lexer.sql.numbersign.comment",pcVar2);
  pcVar2 = "0";
  if (*(char *)((longlong)this + 0x66) != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"sql.backslash.escapes",pcVar2);
  if (*(char *)((longlong)this + 0x67) != '\0') {
    pcVar1 = "1";
  }
  FUN_14074eef0(this,"lexer.sql.allow.dotted.word",pcVar1);
  return;
}

