/**
 * Function: write_file_not_open
 * Address:  14057f640
 * Signature: undefined write_file_not_open(void)
 * Body size: 853 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 write_file_not_open(longlong param_1,LPCVOID param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  char ******ppppppcVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined8 uVar5;
  char *******pppppppcVar6;
  char *******pppppppcVar7;
  char ******ppppppcVar8;
  char *******pppppppcVar9;
  size_t _Size;
  char *_Size_00;
  ulonglong uVar10;
  ulonglong uVar11;
  char *******local_98 [2];
  longlong local_88;
  ulonglong uStack_80;
  char *******local_78;
  char ******ppppppcStack_70;
  char ******local_68;
  char ******ppppppcStack_60;
  DWORD local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    ppppppcStack_70 = (char ******)0x0;
    pppppppcVar6 = (char *******)FUN_140b65d30(0x20);
    local_68 = (char ******)0x14;
    ppppppcStack_60 = (char ******)0x1f;
    *(undefined4 *)pppppppcVar6 = 0x74697277;
    builtin_strncpy((char *)((longlong)pppppppcVar6 + 4),"e: f",4);
    *(undefined4 *)(pppppppcVar6 + 1) = 0x20656c69;
    builtin_strncpy((char *)((longlong)pppppppcVar6 + 0xc),"not ",4);
    *(undefined4 *)(pppppppcVar6 + 2) = 0x6e65706f;
    *(char *)((longlong)pppppppcVar6 + 0x14) = '\0';
    local_78 = pppppppcVar6;
    if ((char ********)(param_1 + 0x48) != &local_78) {
      if (*(ulonglong *)(param_1 + 0x60) < 0x14) {
        FUN_1400069b0((char *******)(param_1 + 0x48),0x14);
      }
      else {
        puVar1 = *(undefined8 **)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x58) = 0x14;
        ppppppcVar8 = *pppppppcVar6;
        ppppppcVar2 = pppppppcVar6[1];
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(pppppppcVar6 + 2);
        *puVar1 = ppppppcVar8;
        puVar1[1] = ppppppcVar2;
        *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
      }
    }
    uVar10 = 0x20;
LAB_14057f7c4:
    thunk_FUN_140b68ba8(pppppppcVar6,uVar10);
LAB_14057f7c9:
    uVar5 = 0;
  }
  else {
    if (param_3 != 0) {
      uVar10 = param_3;
      do {
        uVar11 = 0x40000000;
        if (uVar10 < 0x40000000) {
          uVar11 = uVar10;
        }
        local_4c = 0;
        BVar3 = WriteFile(*(HANDLE *)(param_1 + 0x70),param_2,(DWORD)uVar11,&local_4c,
                          (LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (local_4c != (DWORD)uVar11)) {
          DVar4 = GetLastError();
          pppppppcVar6 = (char *******)local_98;
          win32_error_lu(pppppppcVar6,DVar4);
          if (uStack_80 - local_88 < 0xb) {
            pppppppcVar6 = (char *******)FUN_140008af0(local_98,0xb,local_88,0,"WriteFile: ",0xb);
          }
          else {
            pppppppcVar9 = pppppppcVar6;
            if (0xf < uStack_80) {
              pppppppcVar9 = local_98[0];
            }
            _Size_00 = (char *)0xb;
            if (("" < (char *)((longlong)pppppppcVar9 + local_88) &&
                 pppppppcVar9 < (char *******)0x1413a1a9d) &&
               (_Size_00 = (char *)((longlong)pppppppcVar9 + -0x1413a1a92),
               pppppppcVar9 < "WriteFile: " || _Size_00 == (char *)0x0)) {
              _Size_00 = (char *)0x0;
            }
            _Size = local_88 + 1;
            pppppppcVar7 = local_98[0];
            if (uStack_80 < 0x10) {
              pppppppcVar7 = pppppppcVar6;
            }
            local_88 = local_88 + 0xb;
            memmove((char *)((longlong)pppppppcVar7 + 0xb),pppppppcVar9,_Size);
            memcpy(pppppppcVar9,"WriteFile: ",(size_t)_Size_00);
            memcpy((char *)((longlong)pppppppcVar9 + (longlong)_Size_00),_Size_00 + 0x1413a1a9d,
                   0xb - (longlong)_Size_00);
          }
          local_78 = (char *******)*pppppppcVar6;
          ppppppcStack_70 = pppppppcVar6[1];
          local_68 = pppppppcVar6[2];
          ppppppcStack_60 = pppppppcVar6[3];
          pppppppcVar6[2] = (char ******)0x0;
          pppppppcVar6[3] = (char ******)0xf;
          *(char *)pppppppcVar6 = '\0';
          ppppppcVar8 = local_68;
          pppppppcVar6 = (char *******)(param_1 + 0x48);
          if ((char ********)pppppppcVar6 != &local_78) {
            pppppppcVar9 = (char *******)&local_78;
            if ((char ******)0xf < ppppppcStack_60) {
              pppppppcVar9 = local_78;
            }
            if (*(char *******)(param_1 + 0x60) < local_68) {
              FUN_1400069b0(pppppppcVar6,local_68);
            }
            else {
              if ((char ******)0xf < *(char *******)(param_1 + 0x60)) {
                pppppppcVar6 = *(char ********)(param_1 + 0x48);
              }
              *(char *******)(param_1 + 0x58) = local_68;
              memmove(pppppppcVar6,pppppppcVar9,(size_t)local_68);
              *(char *)((longlong)pppppppcVar6 + (longlong)ppppppcVar8) = '\0';
            }
          }
          if ((char ******)0xf < ppppppcStack_60) {
            ppppppcVar8 = (char ******)((longlong)ppppppcStack_60 + 1);
            pppppppcVar6 = local_78;
            if ((char ******)0xfff < ppppppcVar8) {
              pppppppcVar6 = (char *******)local_78[-1];
              if ((char *)0x1f < (char *)((longlong)local_78 + (-8 - (longlong)pppppppcVar6)))
              goto LAB_14057f97c;
              ppppppcVar8 = ppppppcStack_60 + 5;
            }
            thunk_FUN_140b68ba8(pppppppcVar6,ppppppcVar8);
          }
          local_68 = (char ******)0x0;
          ppppppcStack_60 = (char ******)0xf;
          local_78 = (char *******)((ulonglong)local_78 & 0xffffffffffffff00);
          if (uStack_80 < 0x10) goto LAB_14057f7c9;
          uVar10 = uStack_80 + 1;
          pppppppcVar6 = local_98[0];
          if (0xfff < uVar10) {
            pppppppcVar6 = (char *******)local_98[0][-1];
            if ((char *)0x1f < (char *)((longlong)local_98[0] + (-8 - (longlong)pppppppcVar6))) {
LAB_14057f97c:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar10 = uStack_80 + 0x28;
          }
          goto LAB_14057f7c4;
        }
        param_2 = (LPCVOID)((longlong)param_2 + uVar11);
        uVar10 = uVar10 - uVar11;
      } while (uVar10 != 0);
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + param_3;
    uVar5 = 1;
  }
  return uVar5;
}

