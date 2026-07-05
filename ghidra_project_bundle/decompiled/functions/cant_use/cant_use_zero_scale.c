/**
 * Function: cant_use_zero_scale
 * Address:  14032f090
 * Signature: undefined cant_use_zero_scale(void)
 * Body size: 207 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Shape * cant_use_zero_scale(Shape *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  
  JPH::Shape::Shape(param_1,10,param_2,param_3);
  param_1->vftablePtr = (Shape_vftable *)&PTR_FUN_140de4810;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  (param_1->Shape_data).offset_0x20 = *(longlong *)(param_2 + 0x50);
  *(undefined8 *)&(param_1->Shape_data).offset_0x28 = uVar3;
  if ((char)param_3[4] != '\x02') {
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar5 = vsubps_avx(auVar5,*(undefined1 (*) [16])(param_2 + 0x50));
    auVar5 = vmaxps_avx(auVar5,*(undefined1 (*) [16])(param_2 + 0x50));
    auVar5 = vcmpps_avx(auVar5,_DAT_140de4700,1);
    uVar4 = vmovmskps_avx(auVar5);
    if ((uVar4 & 7) == 0) {
      LOCK();
      *(int *)&param_1->RefTarget<JPH::Shape> = *(int *)&param_1->RefTarget<JPH::Shape> + 1;
      UNLOCK();
      if ((char)param_3[4] == '\x02') {
        if (0xf < (ulonglong)param_3[3]) {
          (*DAT_14151f538)(*param_3);
        }
        param_3[2] = 0;
        param_3[3] = 0xf;
      }
      else if (((char)param_3[4] == '\x01') &&
              (puVar2 = (undefined8 *)*param_3, puVar2 != (undefined8 *)0x0)) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      *param_3 = (longlong)param_1;
      *(undefined1 *)(param_3 + 4) = 1;
    }
    else {
      FUN_1400e7cd0(param_3,"Can\'t use zero scale!");
    }
  }
  return param_1;
}

