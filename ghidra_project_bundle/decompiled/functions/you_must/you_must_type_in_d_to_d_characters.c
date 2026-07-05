/**
 * Function: you_must_type_in_d_to_d_characters
 * Address:  140ce0560
 * Signature: undefined you_must_type_in_d_to_d_characters(void)
 * Body size: 627 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
you_must_type_in_d_to_d_characters(longlong param_1,int *param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _Size;
  uint uVar4;
  
  _Size = (size_t)param_4;
  uVar4 = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  *(uint *)(param_1 + 0x28) = uVar4;
  iVar2 = *param_2;
  if ((iVar2 == 1) || (iVar2 == 2)) {
    if (param_4 < param_2[10]) {
      *(uint *)(param_1 + 0x28) = uVar4 | 1;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ui\\ui_lib.c",899,"UI_set_result_ex");
      FUN_140b91cc0(0x28,0x65,"You must type in %d to %d characters",param_2[10],param_2[0xb]);
      return 0xffffffff;
    }
    if (param_2[0xb] < param_4) {
      *(uint *)(param_1 + 0x28) = uVar4 | 1;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ui\\ui_lib.c",0x38b,"UI_set_result_ex")
      ;
      FUN_140b91cc0(0x28,100,"You must type in %d to %d characters",param_2[10],param_2[0xb]);
      return 0xffffffff;
    }
    if (*(void **)(param_2 + 6) == (void *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ui\\ui_lib.c",0x393,"UI_set_result_ex")
      ;
      FUN_140b91cc0(0x28,0x69,0);
      return 0xffffffff;
    }
    memcpy(*(void **)(param_2 + 6),param_3,_Size);
    if (param_4 <= param_2[0xb]) {
      *(undefined1 *)(_Size + *(longlong *)(param_2 + 6)) = 0;
    }
    *(size_t *)(param_2 + 8) = _Size;
  }
  else if (iVar2 == 3) {
    if (*(undefined1 **)(param_2 + 6) == (undefined1 *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ui\\ui_lib.c",0x3a1,"UI_set_result_ex")
      ;
      FUN_140b91cc0(0x28,0x69,0);
      return 0xffffffff;
    }
    **(undefined1 **)(param_2 + 6) = 0;
    cVar1 = *param_3;
    if (cVar1 != '\0') {
      while( true ) {
        pcVar3 = strchr(*(char **)(param_2 + 0xc),(int)cVar1);
        if (pcVar3 != (char *)0x0) {
          **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xc);
          return 0;
        }
        pcVar3 = strchr(*(char **)(param_2 + 0xe),(int)*param_3);
        if (pcVar3 != (char *)0x0) break;
        cVar1 = param_3[1];
        param_3 = param_3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
      }
      **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xe);
      return 0;
    }
  }
  return 0;
}

