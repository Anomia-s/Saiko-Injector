/**
 * Function: cryptobiobf_readbuffc
 * Address:  140c71110
 * Signature: undefined cryptobiobf_readbuffc(void)
 * Body size: 116 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cryptobiobf_readbuffc(uint *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = param_1[5] + param_2 + 0xfff;
  uVar3 = (iVar1 >> 0x1f & 0xfffU) + iVar1 & 0xfffff000;
  if ((int)*param_1 < (int)uVar3) {
    lVar2 = FUN_140b8d9c0(*(undefined8 *)(param_1 + 2),(longlong)(int)uVar3,
                          "crypto\\bio\\bf_readbuff.c",0x61);
    if (lVar2 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 2) = lVar2;
    *param_1 = uVar3;
  }
  return 1;
}

