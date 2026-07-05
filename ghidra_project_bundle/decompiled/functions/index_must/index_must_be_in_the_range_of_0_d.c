/**
 * Function: index_must_be_in_the_range_of_0_d
 * Address:  140118a90
 * Signature: undefined index_must_be_in_the_range_of_0_d(void)
 * Body size: 55 bytes
 */


undefined8 index_must_be_in_the_range_of_0_d(uint param_1)

{
  if (param_1 < 8) {
    return *(undefined8 *)((&PTR_PTR_140de99d0)[param_1] + 8);
  }
  FUN_1400fbed0("index must be in the range of 0 - %d",7);
  return 0;
}

