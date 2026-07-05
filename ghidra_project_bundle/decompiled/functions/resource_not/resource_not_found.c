/**
 * Function: resource_not_found
 * Address:  1405f94b0
 * Signature: undefined resource_not_found(void)
 * Body size: 968 bytes
 */


void resource_not_found(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_8e8 [36];
  int local_8c4;
  undefined8 local_8c0;
  int local_8b8 [2];
  undefined8 local_8b0;
  char *local_498;
  ulonglong local_70;
  
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_8e8;
  dVar9 = (double)param_2 + *(double *)(param_1 + 0xd0);
  dVar10 = (double)param_2 + *(double *)(param_1 + 0xd8);
  *(double *)(param_1 + 0xd0) = dVar9;
  *(double *)(param_1 + 0xd8) = dVar10;
  if (50.0 < dVar9 * 1000.0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    local_8c0 = 0;
    FUN_1403d24d0(&local_8c0);
    dVar10 = *(double *)(param_1 + 0xd0);
    (*DAT_141503418)(*(undefined8 *)(param_1 + 0x10));
    iVar2 = FUN_1403b5840(param_1 + 0x80);
    local_8c4 = iVar2;
    if (1 < iVar2) {
      do {
        iVar2 = iVar2 + -1;
        puVar3 = (undefined8 *)FUN_1403b56f0(param_1 + 0x80,0x448,iVar2);
        memcpy(local_8b8,&DAT_1411f6a40,0x848);
        puVar5 = (undefined8 *)puVar3[0x85];
        if (*(int *)(puVar3 + 1) == 4) {
          uVar6 = 0;
        }
        else {
          cVar1 = (**(code **)(param_1 + 0x20))(puVar3,local_8b8,*(undefined8 *)(param_1 + 0x28));
          if (cVar1 == '\0') {
            local_8b8[0] = 0x194;
            local_498 = "Resource not found";
            DAT_1416fdda8 = DAT_1416fdda8 + 1;
            iVar7 = *(int *)(puVar3 + 1);
          }
          else {
            plVar4 = &DAT_1416fdd98;
            if (399 < local_8b8[0]) {
              plVar4 = &DAT_1416fdda0;
            }
            *plVar4 = *plVar4 + 1;
            iVar7 = *(int *)(puVar3 + 1);
          }
          if (iVar7 == 0) {
            FUN_1405fa050(param_1,puVar3,local_8b8);
          }
          http_failed_to_send_reply_to_s_s_s(puVar5,local_8b8,0);
          uVar6 = local_8b0;
        }
        (*DAT_1415033b0)(uVar6);
        (*DAT_1415033b0)(puVar3[0x87]);
        FUN_1403b5480(*(longlong *)(puVar3[0x85] + 8) + 0x80,0x448,*puVar3);
        uVar6 = *puVar5;
        if (puVar5[0x14] != 0xffffffffffffffff) {
          closesocket(puVar5[0x14]);
          puVar5[0x14] = 0xffffffffffffffff;
        }
        FUN_1403b5480(puVar5[1] + 0x40,0xb8,uVar6);
      } while (1 < iVar2);
    }
    iVar7 = local_8c4 + -1;
    iVar2 = FUN_1403b5840(param_1 + 0x40);
    if (1 < iVar2) {
      uVar8 = iVar2 + 1;
      do {
        puVar5 = (undefined8 *)FUN_1403b56f0(param_1 + 0x40,0xb8,uVar8 - 2);
        dVar9 = (double)puVar5[0x15] + dVar10;
        puVar5[0x15] = dVar9;
        iVar2 = *(int *)(puVar5 + 0x16);
        *(int *)(puVar5 + 0x16) = iVar2 + 1;
        if (4 < iVar2 && 1.0 < dVar9) {
          uVar6 = *puVar5;
          if (puVar5[0x14] != 0xffffffffffffffff) {
            closesocket(puVar5[0x14]);
            puVar5[0x14] = 0xffffffffffffffff;
          }
          FUN_1403b5480(puVar5[1] + 0x40,0xb8,uVar6);
        }
        uVar8 = uVar8 - 1;
      } while (2 < uVar8);
    }
    FUN_1405f8370(param_1,0);
    (*DAT_141503420)(*(undefined8 *)(param_1 + 0x10));
    *(ulonglong *)(param_1 + 0xf0) =
         CONCAT44(iVar7 + (int)((ulonglong)*(undefined8 *)(param_1 + 0xf0) >> 0x20),
                  iVar7 + (int)*(undefined8 *)(param_1 + 0xf0));
    dVar10 = (double)FUN_1403d24d0(&local_8c0);
    *(double *)(param_1 + 0xe0) = dVar10 + *(double *)(param_1 + 0xe0);
    *(double *)(param_1 + 0xe8) = dVar10 + *(double *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    dVar10 = *(double *)(param_1 + 0xd8);
  }
  if (10000.0 < dVar10 * 1000.0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (DAT_1414ef3c0 != (local_70 ^ (ulonglong)auStack_8e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_70 ^ (ulonglong)auStack_8e8);
  }
  return;
}

