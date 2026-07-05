/**
 * Function: unresolved_reference_to_s
 * Address:  1405f1b30
 * Signature: undefined unresolved_reference_to_s(void)
 * Body size: 154 bytes
 */


undefined8 unresolved_reference_to_s(longlong param_1,undefined8 param_2,char *param_3)

{
  int *piVar1;
  char *_Str1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  Decoration<__int64> *this;
  
  this = (Decoration<__int64> *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x458) + 8) + 0x18) + 0x10);
  lVar4 = FUN_140106180(this);
  uVar2 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
  if (0 < (int)uVar2) {
    uVar5 = 0;
    do {
      piVar1 = *(int **)(lVar4 + uVar5 * 8);
      if (((*piVar1 == 0x10) && (_Str1 = *(char **)(piVar1 + 6), _Str1 != (char *)0x0)) &&
         (iVar3 = strcmp(_Str1,param_3), iVar3 == 0)) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  FUN_1405f0f70(param_1,param_2,"unresolved reference to \'%s\'",param_3);
  return 0xffffffff;
}

