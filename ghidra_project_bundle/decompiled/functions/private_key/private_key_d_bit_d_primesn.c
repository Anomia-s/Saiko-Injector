/**
 * Function: private_key_d_bit_d_primesn
 * Address:  140c92290
 * Signature: undefined private_key_d_bit_d_primesn(void)
 * Body size: 919 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
private_key_d_bit_d_primesn(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined4 uVar12;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  uVar12 = 0;
  uVar2 = uVar12;
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    uVar2 = FUN_140bfc870();
  }
  iVar3 = FUN_140b77980(*(undefined8 *)(lVar1 + 0x88));
  iVar4 = FUN_140b73ea0(param_1,param_3,0x80);
  if (iVar4 != 0) {
    pcVar11 = "RSA";
    if (**(int **)(param_2 + 8) == 0x390) {
      pcVar11 = "RSA-PSS";
    }
    iVar4 = FUN_140c078a0(param_1,&DAT_1413a7104,pcVar11);
    if (0 < iVar4) {
      if ((param_4 == 0) || (*(longlong *)(lVar1 + 0x38) == 0)) {
        iVar3 = FUN_140c078a0(param_1,"Public-Key: (%d bit)\n",uVar2);
        if (iVar3 < 1) {
          return 0;
        }
        pcVar11 = "Modulus:";
        pcVar8 = "Exponent:";
      }
      else {
        iVar4 = 2;
        if (0 < iVar3) {
          iVar4 = iVar3 + 2;
        }
        iVar3 = FUN_140c078a0(param_1,"Private-Key: (%d bit, %d primes)\n",uVar2,iVar4);
        if (iVar3 < 1) {
          return 0;
        }
        pcVar11 = "modulus:";
        pcVar8 = "publicExponent:";
      }
      iVar3 = s_slu_s0xlxn(param_1,pcVar11,*(undefined8 *)(lVar1 + 0x28),0,param_3);
      uVar12 = 0;
      if ((iVar3 != 0) &&
         (iVar3 = s_slu_s0xlxn(param_1,pcVar8,*(undefined8 *)(lVar1 + 0x30),0,param_3), iVar3 != 0))
      {
        if (param_4 != 0) {
          iVar3 = s_slu_s0xlxn(param_1,"privateExponent:",*(undefined8 *)(lVar1 + 0x38),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = s_slu_s0xlxn(param_1,"prime1:",*(undefined8 *)(lVar1 + 0x40),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = s_slu_s0xlxn(param_1,"prime2:",*(undefined8 *)(lVar1 + 0x48),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = s_slu_s0xlxn(param_1,"exponent1:",*(undefined8 *)(lVar1 + 0x50),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = s_slu_s0xlxn(param_1,"exponent2:",*(undefined8 *)(lVar1 + 0x58),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = s_slu_s0xlxn(param_1,"coefficient:",*(undefined8 *)(lVar1 + 0x60),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar4 = 0;
          iVar3 = FUN_140b77980(*(undefined8 *)(lVar1 + 0x88));
          if (0 < iVar3) {
            iVar3 = 3;
            do {
              uVar9 = 0;
              puVar7 = (ulonglong *)FUN_140b77990(*(undefined8 *)(lVar1 + 0x88),iVar4);
              uVar10 = uVar9;
              do {
                iVar5 = FUN_140b73ea0(param_1,param_3,0x80);
                if (iVar5 == 0) {
                  return 0;
                }
                iVar5 = (int)uVar10;
                if (iVar5 == 0) {
                  iVar6 = FUN_140c078a0(param_1,"prime%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar9 = *puVar7;
                }
                else if (iVar5 == 1) {
                  iVar6 = FUN_140c078a0(param_1,"exponent%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar9 = puVar7[1];
                }
                else if (iVar5 == 2) {
                  iVar6 = FUN_140c078a0(param_1,"coefficient%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar9 = puVar7[2];
                }
                iVar6 = s_slu_s0xlxn(param_1,&DAT_1413a2ad6,uVar9,0,param_3);
                if (iVar6 == 0) {
                  return 0;
                }
                uVar10 = (ulonglong)(iVar5 + 1U);
              } while ((int)(iVar5 + 1U) < 3);
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 1;
              iVar5 = FUN_140b77980(*(undefined8 *)(lVar1 + 0x88));
            } while (iVar4 < iVar5);
          }
        }
        uVar12 = 0;
        if ((**(int **)(param_2 + 8) != 0x390) ||
           (iVar3 = pss_parameter_restrictions(param_1,1,*(undefined8 *)(lVar1 + 0x80),param_3),
           iVar3 != 0)) {
          uVar12 = 1;
        }
      }
    }
  }
  return uVar12;
}

