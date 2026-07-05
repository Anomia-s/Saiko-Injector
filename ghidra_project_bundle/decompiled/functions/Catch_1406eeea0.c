/**
 * Function: Catch@1406eeea0
 * Address:  1406eeea0
 * Signature: undefined Catch@1406eeea0(void)
 * Body size: 95 bytes
 */


undefined8 Catch_1406eeea0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x100) + 8) + 0x568);
  (**(code **)(*plVar1 + 8))(plVar1,2,"Device Removed!");
  return 0x1406ee60e;
}

