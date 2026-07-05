/**
 * Function: executemultiindirectclusteroperation_inindire
 * Address:  1406ebb60
 * Signature: void __thiscall executemultiindirectclusteroperation_inindire(void * this, int * param_1)
 * Body size: 738 bytes
 */


void __thiscall executemultiindirectclusteroperation_inindire(void *this,int *param_1)

{
  char cVar1;
  char ****ppppcVar2;
  undefined8 uVar3;
  char *****pppppcVar4;
  char ****local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (((cVar1 != '\0') &&
      (cVar1 = operation_requires_at_least(this,1,"executeMultiIndirectClusterOperation"),
      cVar1 != '\0')) &&
     (cVar1 = does_not_have_a_valid_vertex_format(*(undefined8 *)((longlong)this + 0x18),param_1),
     cVar1 != '\0')) {
    if ((*(longlong *)(param_1 + 0x10) == 0) && (*param_1 == 0)) {
      local_38 = 0;
      ppppcVar2 = (char ****)FUN_140b65d30(0x60);
      local_30 = 0x5d;
      local_28 = 0x5f;
      *ppppcVar2 = (char ***)0x4d65747563657865;
      ppppcVar2[1] = (char ***)0x69646e4969746c75;
      ppppcVar2[2] = (char ***)0x73756c4374636572;
      ppppcVar2[3] = (char ***)0x617265704f726574;
      ppppcVar2[4] = (char ***)0x6927203a6e6f6974;
      ppppcVar2[5] = (char ***)0x63657269646e496e;
      ppppcVar2[6] = (char ***)0x6e756f4367724174;
      ppppcVar2[7] = (char ***)0x2772656666754274;
      ppppcVar2[8] = (char ***)0x4c4c554e20736920;
      ppppcVar2[9] = (char ***)0x78616d20646e6120;
      builtin_strncpy((char *)((longlong)ppppcVar2 + 0x4d),"maxA",4);
      builtin_strncpy((char *)((longlong)ppppcVar2 + 0x51),"rgCo",4);
      builtin_strncpy((char *)((longlong)ppppcVar2 + 0x55),"unt ",4);
      builtin_strncpy((char *)((longlong)ppppcVar2 + 0x59),"is 0",4);
      *(char *)((longlong)ppppcVar2 + 0x5d) = '\0';
      local_40 = ppppcVar2;
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,ppppcVar2);
      uVar3 = 0x60;
    }
    else {
      if (*(longlong *)(param_1 + 0x14) != 0) {
        if (*(longlong *)(param_1 + 0xe) == 0) {
          FUN_140004940(&local_40,
                        "executeMultiIndirectClusterOperation: \'scratchSizeInBytes\' is 0");
          pppppcVar4 = &local_40;
          if (0xf < local_28) {
            pppppcVar4 = (char *****)local_40;
          }
          (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                    (*(longlong **)((longlong)this + 0x20),2,pppppcVar4);
LAB_1406ebd74:
          FUN_140004b30(&local_40);
          return;
        }
        cVar1 = *(char *)((longlong)param_1 + 5);
        if (cVar1 == '\x02') {
          if (*(longlong *)(param_1 + 0x1c) == 0) {
            FUN_140004940(&local_40,
                          "executeMultiIndirectClusterOperation (cluster::OperationMode::GetSizes): \'outSizesBuffer\' is NULL"
                         );
            pppppcVar4 = &local_40;
            if (0xf < local_28) {
              pppppcVar4 = (char *****)local_40;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppcVar4);
            goto LAB_1406ebd74;
          }
        }
        else if (cVar1 == '\x01') {
          if (*(longlong *)(param_1 + 0x18) == 0) {
            FUN_140004940(&local_40,
                          "executeMultiIndirectClusterOperation (cluster::OperationMode::ExplicitDestinations): \'inOutAddressesBuffer\' is NULL"
                         );
            pppppcVar4 = &local_40;
            if (0xf < local_28) {
              pppppcVar4 = (char *****)local_40;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppcVar4);
            goto LAB_1406ebd74;
          }
        }
        else if (cVar1 == '\0') {
          if (*(longlong *)(param_1 + 0x18) == 0) {
            FUN_140004940(&local_40,
                          "executeMultiIndirectClusterOperation (cluster::OperationMode::ImplicitDestinations): \'inOutAddressesBuffer\' is NULL"
                         );
            pppppcVar4 = &local_40;
            if (0xf < local_28) {
              pppppcVar4 = (char *****)local_40;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppcVar4);
          }
          else {
            if (*(longlong *)(param_1 + 0x20) != 0) goto LAB_1406ebdc3;
            FUN_140004940(&local_40,
                          "executeMultiIndirectClusterOperation (cluster::OperationMode::ImplicitDestinations): \'outAccelerationStructuresBuffer\' is NULL"
                         );
            pppppcVar4 = &local_40;
            if (0xf < local_28) {
              pppppcVar4 = (char *****)local_40;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppcVar4);
          }
          goto LAB_1406ebd74;
        }
LAB_1406ebdc3:
                    /* WARNING: Could not recover jumptable at 0x0001406ebddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x140))
                  (*(longlong **)((longlong)this + 0x10),param_1);
        return;
      }
      local_38 = 0;
      ppppcVar2 = (char ****)FUN_140b65d30(0x50);
      local_30 = 0x44;
      local_28 = 0x4f;
      *ppppcVar2 = (char ***)0x4d65747563657865;
      ppppcVar2[1] = (char ***)0x69646e4969746c75;
      ppppcVar2[2] = (char ***)0x73756c4374636572;
      ppppcVar2[3] = (char ***)0x617265704f726574;
      ppppcVar2[4] = (char ***)0x6927203a6e6f6974;
      ppppcVar2[5] = (char ***)0x63657269646e496e;
      *(undefined4 *)(ppppcVar2 + 6) = 0x67724174;
      builtin_strncpy((char *)((longlong)ppppcVar2 + 0x34),"sBuf",4);
      *(undefined4 *)(ppppcVar2 + 7) = 0x27726566;
      builtin_strncpy((char *)((longlong)ppppcVar2 + 0x3c)," is ",4);
      *(undefined4 *)(ppppcVar2 + 8) = 0x4c4c554e;
      *(char *)((longlong)ppppcVar2 + 0x44) = '\0';
      local_40 = ppppcVar2;
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,ppppcVar2);
      uVar3 = 0x50;
    }
    thunk_FUN_140b68ba8(ppppcVar2,uVar3);
  }
  return;
}

