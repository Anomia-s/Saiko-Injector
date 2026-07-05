/**
 * Function: lexerverilogupdatepreprocessor
 * Address:  14083ba30
 * Signature: void __thiscall lexerverilogupdatepreprocessor(void * this)
 * Body size: 230 bytes
 */


void __thiscall lexerverilogupdatepreprocessor(void *this)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "0";
  pcVar2 = "0";
  if (*(char *)((longlong)this + 0x60) != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"fold.at.else",pcVar2);
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
  FUN_14074eef0(this,"fold.preprocessor",pcVar2);
  if (*(char *)((longlong)this + 100) != '\0') {
    pcVar1 = "1";
  }
  FUN_14074eef0(this,"fold.verilog.flags",pcVar1);
  FUN_14074eef0(this,"lexer.verilog.track.preprocessor","1");
  FUN_14074eef0(this,"lexer.verilog.update.preprocessor","1");
  FUN_14074eef0(this,"lexer.verilog.portstyling","1");
  FUN_14074eef0(this,"lexer.verilog.allupperkeywords","1");
  return;
}

