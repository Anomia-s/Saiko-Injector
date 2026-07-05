/**
 * Function: num_buckets_must_be_a_power_of_two
 * Address:  1403d8100
 * Signature: undefined num_buckets_must_be_a_power_of_two(void)
 * Body size: 206 bytes
 */


undefined8 *
num_buckets_must_be_a_power_of_two
          (undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          char param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = param_2 - 1;
  if (uVar5 < (param_2 ^ uVar5)) {
    if (param_2 < 0x4000001) {
      puVar1 = (undefined8 *)FUN_140160c70(1,0x40);
      if (puVar1 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if (param_6 != '\0') {
        uVar2 = initializesrwlock();
        *puVar1 = uVar2;
      }
      lVar3 = FUN_140160c70(param_2,0x18);
      puVar1[1] = lVar3;
      if (lVar3 == 0) {
        FUN_1403d81d0(puVar1);
        return (undefined8 *)0x0;
      }
      *(uint *)(puVar1 + 6) = uVar5;
      *(undefined1 *)((longlong)puVar1 + 0x3c) = param_7;
      puVar1[5] = param_1;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      puVar1[4] = param_5;
      return puVar1;
    }
    pcVar4 = "num_buckets is too large";
  }
  else {
    pcVar4 = "num_buckets must be a power of two";
  }
  FUN_1400fbed0(pcVar4);
  return (undefined8 *)0x0;
}

