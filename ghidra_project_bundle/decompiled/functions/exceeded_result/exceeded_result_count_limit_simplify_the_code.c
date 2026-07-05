/**
 * Function: exceeded_result_count_limit_simplify_the_code
 * Address:  1406d49b0
 * Signature: undefined exceeded_result_count_limit_simplify_the_code(void)
 * Body size: 237 bytes
 */


void exceeded_result_count_limit_simplify_the_code
               (undefined8 *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
               undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((byte)param_4 != 0xff) {
    param_3 = param_3 & 0xffffffff;
    if ((param_2 == 0) || (*(int *)(param_2 + 8) != DAT_1416f23e4)) {
      if ((param_2 == 0) || (*(int *)(param_2 + 8) != DAT_1416f23e0)) {
        exceeded_constant_limit_simplify_the_code_to(param_1,param_2,param_3,1);
        if (1 < (byte)param_4) {
          lVar2 = (param_4 & 0xff) - 1;
          uVar1 = CONCAT71((int7)(param_3 >> 8),(char)param_3 + '\x01');
          do {
            FUN_1407aacf0(*param_1,2,uVar1,0,0);
            uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),(char)uVar1 + '\x01');
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
        }
      }
      else {
        if (0 < *(int *)((longlong)param_1 + 0xc)) {
          FUN_1407ab600(*param_1,*(int *)(param_2 + 0xc) + 1);
          param_4 = param_4 & 0xffffffff;
        }
        FUN_1407aacf0(*param_1,0x3f,param_3,(char)param_4 + '\x01',0);
      }
    }
    else {
      inlining_failed_function_is_variadic(param_1,param_2,param_3,param_4,param_5,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Luau::CompileError::CompileError_Constructor_or_Destructor
            ((undefined8 *)(param_2 + 0xc),
             "Exceeded result count limit; simplify the code to compile",param_3,param_4);
}

