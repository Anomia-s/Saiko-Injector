/**
 * Function: mem_write
 * Address:  140c27ee0
 * Signature: undefined mem_write(void)
 * Body size: 302 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong mem_write(longlong param_1,char *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  size_t sVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  
  sVar6 = strlen(param_2);
  plVar2 = *(longlong **)(param_1 + 0x40);
  uVar8 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    FUN_140b73030(param_1,0xf);
    iVar9 = (int)sVar6;
    if (iVar9 == 0) {
      uVar8 = 0;
    }
    else if (param_2 == (char *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_mem.c",0xe4,"mem_write");
      FUN_140b91cc0(0x20,0xc0102,0);
    }
    else {
      iVar1 = *(int *)plVar2[1];
      FUN_140c285c0(param_1);
      lVar7 = FUN_140b8f0b0(*plVar2,(longlong)(iVar1 + iVar9));
      if (lVar7 != 0) {
        memcpy((void *)((longlong)iVar1 + *(longlong *)(*plVar2 + 8)),param_2,(longlong)iVar9);
        puVar3 = (undefined8 *)*plVar2;
        uVar8 = sVar6 & 0xffffffff;
        puVar4 = (undefined8 *)plVar2[1];
        uVar5 = puVar3[1];
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        uVar5 = puVar3[3];
        puVar4[2] = puVar3[2];
        puVar4[3] = uVar5;
      }
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_mem.c",0xdd,"mem_write");
    FUN_140b91cc0(0x20,0x7e,0);
  }
  return uVar8;
}

