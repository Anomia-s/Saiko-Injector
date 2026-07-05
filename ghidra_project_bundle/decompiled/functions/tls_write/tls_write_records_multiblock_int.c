/**
 * Function: tls_write_records_multiblock_int
 * Address:  140d032f0
 * Signature: undefined tls_write_records_multiblock_int(void)
 * Body size: 756 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls_write_records_multiblock_int(longlong param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  uint local_40;
  undefined8 local_38;
  char local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined2 local_2d;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140d03303;
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if ((param_3 == 4) || (param_3 == 8)) {
    uVar8 = 1;
    plVar5 = (longlong *)(param_2 + 0x10);
    do {
      if ((((char)plVar5[-2] != (char)plVar5[1]) || (*plVar5 != plVar5[3])) ||
         (*plVar5 + plVar5[-1] != plVar5[2])) goto LAB_140d035d7;
      uVar8 = uVar8 + 1;
      plVar5 = plVar5 + 3;
    } while (uVar8 < param_3);
    uVar8 = *(longlong *)(param_2 + 0x10) * param_3;
    if ((((*param_2 == '\x17') && ((ulonglong)(*(longlong *)(param_2 + 0x10) * 4) <= uVar8)) &&
        ((*(longlong *)(param_1 + 0x1040) == 0 &&
         ((*(longlong *)(param_1 + 0x1128) == 0 && (*(int *)(param_1 + 0x10b0) == 0)))))) &&
       ((iVar3 = *(int *)(param_1 + 0x14), iVar3 == 0x302 ||
        ((((iVar3 == 0x303 || (iVar3 == 0x100)) || (iVar3 == 0xfeff)) || (iVar3 == 0xfefd)))))) {
      uVar6 = FUN_140b76060(*(undefined8 *)(param_1 + 0x1020));
      uVar2 = FUN_140b97ec0(uVar6);
      if ((uVar2 >> 0x16 & 1) != 0) {
        iVar3 = FUN_140b85be0(*(undefined8 *)(param_1 + 0x1020),0x1c,*(undefined4 *)(param_2 + 0x10)
                              ,0);
        iVar3 = tls_setup_write_buffer
                          (param_1,1,(longlong)iVar3 * param_3,(longlong)iVar3 * param_3);
        if (iVar3 != 0) {
          local_38 = *(undefined8 *)(param_1 + 0x1000);
          local_30 = *param_2;
          local_2f = (undefined1)((uint)*(undefined4 *)(param_2 + 4) >> 8);
          local_50 = &local_38;
          local_2e = (undefined1)*(undefined4 *)(param_2 + 4);
          local_40 = (uint)param_3;
          local_2d = 0;
          local_58 = 0;
          local_48 = uVar8;
          iVar3 = FUN_140b85be0(*(undefined8 *)(param_1 + 0x1020),0x19,0x20,&local_58);
          if ((iVar3 < 1) || (*(ulonglong *)(param_1 + 0x70) < (ulonglong)(longlong)iVar3)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\record\\methods\\tls_multib.c",0x89,"tls_write_records_multiblock_int")
            ;
            FUN_140c40330(param_1,0x50,0xc0103,0);
          }
          else {
            local_58 = *(undefined8 *)(param_1 + 0x60);
            local_50 = *(undefined8 **)(param_2 + 8);
            local_48 = uVar8;
            iVar4 = FUN_140b85be0(*(undefined8 *)(param_1 + 0x1020),0x1a,0x20,&local_58);
            if (iVar4 < 1) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\record\\methods\\tls_multib.c",0x94,
                         "tls_write_records_multiblock_int");
              FUN_140c40330(param_1,0x50,0xc0103,0);
            }
            else {
              *(char *)(param_1 + 0x1007) = *(char *)(param_1 + 0x1007) + (char)local_40;
              if (*(byte *)(param_1 + 0x1007) < local_40) {
                pcVar7 = (char *)(param_1 + 0x1006);
                do {
                  if ((longlong)(pcVar7 + (-0x1000 - param_1)) < 0) break;
                  *pcVar7 = *pcVar7 + '\x01';
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + -1;
                } while (cVar1 == '\0');
              }
              *(undefined8 *)(param_1 + 0x78) = 0;
              *(longlong *)(param_1 + 0x80) = (longlong)iVar3;
            }
          }
        }
      }
    }
  }
LAB_140d035d7:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_78);
}

