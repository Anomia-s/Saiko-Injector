/**
 * Function: dddd
 * Address:  140be94d0
 * Signature: undefined dddd(void)
 * Body size: 873 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dddd(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  size_t _Size;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  byte local_58 [14];
  char local_4a [2];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140be94ea;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  iVar8 = 0;
  local_68 = param_4;
  local_64 = param_2;
  local_60 = param_3;
  iVar3 = FUN_140b77980(param_3);
  if (0 < iVar3) {
    do {
      piVar4 = (int *)FUN_140b77990(param_3,iVar8);
      FUN_140c078a0(param_1,&DAT_1413a5ce4,param_2,&DAT_1413a2ad6);
      if (*piVar4 == 0) {
        puVar2 = *(uint **)(piVar4 + 2);
        uVar1 = *puVar2;
        _Size = (size_t)(int)uVar1;
        if ((int)uVar1 < 0) break;
        if (param_4 == 1) {
          if (4 < uVar1) break;
          if (0 < (int)uVar1) {
            memcpy(local_58,*(void **)(puVar2 + 2),_Size);
            if ((puVar2[4] & 7) != 0) {
              local_58[_Size - 1] =
                   local_58[_Size - 1] & ~(byte)(0xff >> (8U - (char)(puVar2[4] & 7) & 0x1f));
            }
          }
          memset(local_58 + _Size,0,(longlong)(int)(4 - uVar1));
          local_70 = (uint)local_58[3];
          local_78 = (uint)local_58[2];
          FUN_140c078a0(param_1,"%d.%d.%d.%d",local_58[0],local_58[1]);
        }
        else if (param_4 == 2) {
          if (0x10 < (int)uVar1) break;
          if (0 < (int)uVar1) {
            memcpy(local_58,*(void **)(puVar2 + 2),_Size);
            if ((puVar2[4] & 7) != 0) {
              local_58[_Size - 1] =
                   local_58[_Size - 1] & ~(byte)(0xff >> (8U - (char)(puVar2[4] & 7) & 0x1f));
            }
          }
          memset(local_58 + _Size,0,(longlong)(int)(0x10 - uVar1));
          iVar3 = 0x10;
          pcVar7 = local_4a;
          do {
            if ((pcVar7[1] != '\0') || (*pcVar7 != '\0')) break;
            pcVar7 = pcVar7 + -2;
            iVar3 = iVar3 + -2;
          } while (1 < (longlong)(pcVar7 + (0x10 - (longlong)local_4a)));
          iVar5 = 0;
          lVar6 = 0;
          if (iVar3 < 1) {
LAB_140be9735:
            FUN_140b73bf0(param_1,":");
          }
          else {
            do {
              pcVar7 = "";
              if (iVar5 < 0xe) {
                pcVar7 = ":";
              }
              FUN_140c078a0(param_1,&DAT_1413a5cf0,CONCAT11(local_58[lVar6],local_58[lVar6 + 1]),
                            pcVar7);
              iVar5 = iVar5 + 2;
              lVar6 = lVar6 + 2;
            } while (lVar6 < iVar3);
            param_3 = local_60;
            if (iVar5 < 0x10) goto LAB_140be9735;
          }
          if (iVar5 == 0) {
            FUN_140b73bf0(param_1,":");
          }
        }
        else {
          iVar3 = 0;
          lVar6 = 0;
          if (0 < (int)uVar1) {
            do {
              pcVar7 = "";
              if (0 < iVar3) {
                pcVar7 = ":";
              }
              FUN_140c078a0(param_1,"%s%02x",pcVar7,
                            *(undefined1 *)(*(longlong *)(puVar2 + 2) + lVar6));
              iVar3 = iVar3 + 1;
              lVar6 = lVar6 + 1;
              param_4 = local_68;
            } while (iVar3 < (int)*puVar2);
          }
          FUN_140c078a0(param_1,&DAT_1413a65dc,puVar2[4] & 7);
          param_3 = local_60;
        }
        FUN_140c078a0(param_1,&DAT_1413a7238,
                      **(int **)(piVar4 + 2) * 8 - ((*(int **)(piVar4 + 2))[4] & 7U));
        param_2 = local_64;
      }
      else if (*piVar4 == 1) {
        iVar3 = dddd(param_1,param_4,0,**(undefined8 **)(piVar4 + 2));
        if (iVar3 == 0) break;
        FUN_140b73bf0(param_1,&DAT_1413a70b0);
        iVar3 = dddd(param_1,param_4,0xff,*(undefined8 *)(*(longlong *)(piVar4 + 2) + 8));
        if (iVar3 == 0) break;
        FUN_140b73bf0(param_1,&DAT_1413a7288);
      }
      iVar8 = iVar8 + 1;
      iVar3 = FUN_140b77980(param_3);
    } while (iVar8 < iVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_98);
}

