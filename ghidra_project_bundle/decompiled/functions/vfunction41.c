/**
 * Function: vfunction41
 * Address:  14074de40
 * Signature: void __thiscall vfunction41(QsciLexer * this, undefined4 param_1, int param_2)
 * Body size: 231 bytes
 */


/* QsciLexer member function inherited by QsciLexerAVS
   QsciLexer member function inherited by QsciLexerBash
   QsciLexer member function inherited by QsciLexerBatch
   QsciLexer member function inherited by QsciLexerCMake
   QsciLexer member function inherited by QsciLexerCoffeeScript
   QsciLexer member function inherited by QsciLexerCPP
   QsciLexer member function inherited by QsciLexerCSharp
   QsciLexer member function inherited by QsciLexerCSS
   QsciLexer member function inherited by QsciLexerD
   QsciLexer member function inherited by QsciLexerDiff
   QsciLexer member function inherited by QsciLexerEDIFACT
   QsciLexer member function inherited by QsciLexerFortran77
   QsciLexer member function inherited by QsciLexerHTML
   QsciLexer member function inherited by QsciLexerIDL
   QsciLexer member function inherited by QsciLexerHex
   QsciLexer member function inherited by QsciLexerJava
   QsciLexer member function inherited by QsciLexerJavaScript
   QsciLexer member function inherited by QsciLexerJSON
   QsciLexer member function inherited by QsciLexerMakefile
   QsciLexer member function inherited by QsciLexerMarkdown
   QsciLexer member function inherited by QsciLexerAsm
   QsciLexer member function inherited by QsciLexerMatlab
   QsciLexer member function inherited by QsciLexerNASM
   QsciLexer member function inherited by QsciLexerOctave
   QsciLexer member function inherited by QsciLexerPascal
   QsciLexer member function inherited by QsciLexerPerl
   QsciLexer member function inherited by QsciLexerPO
   QsciLexer member function inherited by QsciLexerPostScript
   QsciLexer member function inherited by QsciLexerPOV
   QsciLexer member function inherited by QsciLexerProperties
   QsciLexer member function inherited by QsciLexerPython
   QsciLexer member function inherited by QsciLexerRuby
   QsciLexer member function inherited by QsciLexerSpice
   QsciLexer member function inherited by QsciLexerSQL
   QsciLexer member function inherited by QsciLexerSRec
   QsciLexer member function inherited by QsciLexerTCL
   QsciLexer member function inherited by QsciLexerTekHex
   QsciLexer member function inherited by QsciLexerTeX
   QsciLexer member function inherited by QsciLexerVerilog
   QsciLexer member function inherited by QsciLexerVHDL
   QsciLexer member function inherited by QsciLexerXML
   QsciLexer member function inherited by QsciLexerYAML
   QsciLexer member function inherited by QsciLexerLua
   QsciLexer member function inherited by QsciLexerFortran
   QsciLexer member function inherited by QsciLexerIntelHex
   QsciLexer member function inherited by QsciLexerMASM */

void __thiscall QsciLexer::vfunction41(QsciLexer *this,undefined4 param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_78 [40];
  QString local_50 [16];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (param_2 < 0) {
    uVar2 = 0;
    do {
      (*this->vftablePtr->vfunction29)(this,local_50,(ulonglong)uVar2);
      lVar1 = local_40;
      QString::~QString(local_50);
      if (lVar1 != 0) {
        (*this->vftablePtr->vfunction41)(this,param_1,uVar2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x100);
    if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
  else {
    lVar1 = FUN_14074d890(this,param_2);
    *(char *)(lVar1 + 0x30) = (char)param_1;
    if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_78)) {
      FUN_14074ed90(this,param_1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_78);
}

