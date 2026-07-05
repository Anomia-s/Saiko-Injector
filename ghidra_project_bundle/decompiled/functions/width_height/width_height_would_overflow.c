/**
 * Function: width_height_would_overflow
 * Address:  140404190
 * Signature: undefined width_height_would_overflow(void)
 * Body size: 475 bytes
 */


undefined8
width_height_would_overflow
          (int param_1,int param_2,int param_3,ulonglong *param_4,ulonglong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_1 < 0x3231564e) {
    if ((param_1 != 0x30313050) && (param_1 != 0x3132564e)) goto LAB_140404208;
LAB_1404041ca:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)param_2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)param_3;
    if (SUB168(auVar1 * auVar4,8) != 0) {
LAB_1404041d8:
      uVar7 = FUN_1400fbed0("width * height would overflow");
      return uVar7;
    }
    uVar8 = (longlong)param_2 + 1;
    if (uVar8 == 0) goto LAB_140404210;
    uVar11 = (longlong)param_3 + 1;
    if (uVar11 == 0) {
      uVar7 = FUN_1400fbed0("height + 1 would overflow");
      return uVar7;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8 >> 1;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11 >> 1;
    if (SUB168(auVar2 * auVar5,8) != 0) goto LAB_1404041d8;
    uVar10 = (ulonglong)SUB164(auVar2 * auVar5,0);
    uVar11 = (ulonglong)SUB164(auVar1 * auVar4,0);
    uVar8 = 0;
    if (param_1 < 0x32595559) goto LAB_14040428c;
LAB_140404249:
    if (param_1 < 0x56555949) {
      if ((param_1 != 0x32595559) && (param_1 != 0x55595659)) goto LAB_1404042a4;
    }
    else if (param_1 != 0x59565955) {
      if (param_1 != 0x56555949) goto LAB_1404042a4;
      goto LAB_1404042c7;
    }
    if (param_5 != (ulonglong *)0x0) {
      lVar9 = (longlong)param_2 + 1;
      if (lVar9 == 0) {
LAB_140404210:
        uVar7 = FUN_1400fbed0("width + 1 would overflow");
        return uVar7;
      }
      if (lVar9 < 0) {
        uVar7 = FUN_1400fbed0("width * 4 would overflow");
        return uVar7;
      }
      *param_5 = lVar9 * 2 & 0xfffffffffffffffc;
    }
    if (param_4 == (ulonglong *)0x0) goto LAB_14040433d;
    if ((int)uVar8 < 0) {
      uVar7 = FUN_1400fbed0("plane * 4 would overflow");
      return uVar7;
    }
    uVar8 = (longlong)(uVar8 << 0x22) >> 0x20;
  }
  else {
    if ((param_1 == 0x3231564e) || ((param_1 == 0x56555949 || (param_1 == 0x32315659))))
    goto LAB_1404041ca;
LAB_140404208:
    if ((longlong)param_2 + 1U == 0) goto LAB_140404210;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)param_2 + 1U >> 1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (longlong)param_3;
    uVar8 = SUB168(auVar3 * auVar6,0);
    if (SUB168(auVar3 * auVar6,8) != 0) goto LAB_1404041d8;
    uVar11 = 0;
    uVar10 = 0;
    if (0x32595558 < param_1) goto LAB_140404249;
LAB_14040428c:
    if (((param_1 != 0x3132564e) && (param_1 != 0x3231564e)) && (param_1 != 0x32315659)) {
LAB_1404042a4:
      uVar7 = FUN_1400fbed0("That operation is not supported");
      return uVar7;
    }
LAB_1404042c7:
    if (param_5 != (ulonglong *)0x0) {
      uVar8 = (ulonglong)param_2;
      *param_5 = uVar8;
    }
    if (param_4 == (ulonglong *)0x0) goto LAB_14040433d;
    if (CARRY8(uVar11,uVar10)) {
      uVar7 = FUN_1400fbed0("Y + U would overflow");
      return uVar7;
    }
    if (CARRY8(uVar11 + uVar10,uVar10)) {
      uVar7 = FUN_1400fbed0("Y + U + V would overflow");
      return uVar7;
    }
    uVar8 = (ulonglong)((int)(uVar11 + uVar10) + (int)uVar10);
  }
  *param_4 = uVar8;
LAB_14040433d:
  return CONCAT71((int7)(uVar8 >> 8),1);
}

