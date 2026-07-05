/**
 * Function: whether_to_apply_folding_to_document_or_not
 * Address:  140932760
 * Signature: char * __thiscall whether_to_apply_folding_to_document_or_not(void * this, char * param_1)
 * Body size: 78 bytes
 */


char * __thiscall whether_to_apply_folding_to_document_or_not(void *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = strcmp(param_1,"fold");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_1,"lexer.edifact.highlight.un.all");
    pcVar2 = (char *)0x0;
    if (iVar1 == 0) {
      pcVar2 = "Whether to apply UN* highlighting to all UN segments, or just to UNH";
    }
    return pcVar2;
  }
  return "Whether to apply folding to document or not";
}

