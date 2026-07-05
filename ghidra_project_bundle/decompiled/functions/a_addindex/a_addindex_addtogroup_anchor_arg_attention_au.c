/**
 * Function: a_addindex_addtogroup_anchor_arg_attention_au
 * Address:  1408278e0
 * Signature: char * __thiscall a_addindex_addtogroup_anchor_arg_attention_au(void * this, int param_1)
 * Body size: 31 bytes
 */


char * __thiscall a_addindex_addtogroup_anchor_arg_attention_au(void *this,int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if (param_1 == 3) {
    pcVar2 = 
    "a addindex addtogroup anchor arg attention author b brief bug c class code date def defgroup deprecated dontinclude e em endcode endhtmlonly endif endlatexonly endlink endverbatim enum example exception f$ f[ f] file fn hideinitializer htmlinclude htmlonly if image include ingroup internal invariant interface latexonly li line link mainpage name namespace nosubgrouping note overload p page par param post pre ref relates remarks return retval sa section see showinitializer since skip skipline struct subsection test throw todo typedef union until var verbatim verbinclude version warning weakgroup $ @ \\ & < > # { }"
    ;
  }
  pcVar1 = 
  "abstract alias align asm assert auto body bool break byte case cast catch cdouble cent cfloat char class const continue creal dchar debug default delegate delete deprecated do double else enum export extern false final finally float for foreach foreach_reverse function goto idouble if ifloat import in inout int interface invariant ireal is lazy long mixin module new null out override package pragma private protected public real return scope short static struct super switch synchronized template this throw true try typedef typeid typeof ubyte ucent uint ulong union unittest ushort version void volatile wchar while with"
  ;
  if (param_1 != 1) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}

