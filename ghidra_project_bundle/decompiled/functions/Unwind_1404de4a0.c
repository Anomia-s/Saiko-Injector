/**
 * Function: Unwind@1404de4a0
 * Address:  1404de4a0
 * Signature: undefined Unwind@1404de4a0(void)
 * Body size: 130 bytes
 */


void Unwind_1404de4a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  std::_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>::vfunction1
            ((_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_> *)
             (param_2 + 0x660));
  plVar1 = *(longlong **)(param_2 + 0x5f0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x5f0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

