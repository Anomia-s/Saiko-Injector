/**
 * Function: getyuvplanes2_unsupported_yuv_format_s
 * Address:  140405790
 * Signature: undefined getyuvplanes2_unsupported_yuv_format_s(void)
 * Body size: 689 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001404059cb) */

undefined8
getyuvplanes2_unsupported_yuv_format_s
          (int param_1,int param_2,int param_3,longlong param_4,uint param_5,longlong *param_6,
          longlong *param_7,longlong *param_8,uint *param_9,uint *param_10)

{
  undefined8 uVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_3 < 0x32595559) {
    if (param_3 < 0x3231564e) {
      if (param_3 == 0x30313050) {
        uVar4 = ((param_1 - (param_1 + 1 >> 0x1f)) + 1) * 2 & 0xfffffffc;
        if ((int)uVar4 < (int)param_5) {
          uVar4 = param_5;
        }
        *param_6 = param_4;
        *param_9 = param_5;
        *param_7 = param_4 + (int)(param_2 * param_5);
        *param_8 = (int)(param_2 * param_5) + param_4 + 2;
        *param_10 = uVar4;
        return 1;
      }
      if (param_3 != 0x3132564e) goto LAB_14040583a;
LAB_1404058e5:
      uVar4 = (param_5 - ((int)(param_5 + 1) >> 0x1f)) + 1 & 0xfffffffe;
      lVar3 = (int)(param_2 * param_5) + param_4;
LAB_140405902:
      lVar5 = 0;
    }
    else {
      if (param_3 == 0x3231564e) goto LAB_1404058e5;
      if (param_3 != 0x32315659) goto LAB_14040583a;
LAB_14040586f:
      uVar4 = (int)((param_5 - ((int)(param_5 + 1) >> 0x1f)) + 1) >> 1;
      lVar3 = (int)(param_5 * param_2) + param_4;
      lVar5 = (int)(((param_2 - (param_2 + 1 >> 0x1f)) + 1 >> 1) * uVar4) + lVar3;
    }
    if (0x32595558 < param_3) goto LAB_14040590b;
    if (param_3 == 0x3132564e) {
      *param_6 = param_4;
      *param_9 = param_5;
      *param_8 = lVar3;
      lVar3 = lVar3 + 1;
LAB_140405a1e:
      *param_7 = lVar3;
    }
    else {
      if (param_3 != 0x3231564e) {
        if (param_3 == 0x32315659) {
          *param_6 = param_4;
          *param_9 = param_5;
          *param_8 = lVar3;
          *param_7 = lVar5;
          goto LAB_140405a32;
        }
        goto LAB_1404059de;
      }
      *param_6 = param_4;
      *param_9 = param_5;
      *param_7 = lVar3;
      *param_8 = lVar3 + 1;
    }
LAB_140405a32:
    *param_10 = uVar4;
  }
  else {
    lVar3 = 0;
    if (0x56555948 < param_3) {
      uVar4 = 0;
      if (param_3 != 0x59565955) {
        if (param_3 == 0x56555949) goto LAB_14040586f;
        goto LAB_14040583a;
      }
      goto LAB_140405902;
    }
    if (param_3 != 0x32595559) {
      uVar4 = 0;
      if (param_3 == 0x55595659) goto LAB_140405902;
LAB_14040583a:
      uVar1 = FUN_140155460(param_3);
      pcVar2 = "GetYUVPlanes(): Unsupported YUV format: %s";
      goto LAB_1404059ed;
    }
    lVar5 = 0;
    uVar4 = 0;
LAB_14040590b:
    if (param_3 < 0x56555949) {
      if (param_3 == 0x32595559) {
        *param_6 = param_4;
        *param_9 = param_5;
        *param_8 = *param_6 + 3;
        lVar3 = *param_6 + 1;
      }
      else {
        if (param_3 != 0x55595659) {
LAB_1404059de:
          uVar1 = FUN_140155460(param_3);
          pcVar2 = "GetYUVPlanes[2]: Unsupported YUV format: %s";
LAB_1404059ed:
          uVar1 = FUN_1400fbed0(pcVar2,uVar1);
          return uVar1;
        }
        *param_6 = param_4;
        *param_9 = param_5;
        *param_8 = *param_6 + 1;
        lVar3 = *param_6 + 3;
      }
    }
    else {
      if (param_3 == 0x56555949) {
        *param_6 = param_4;
        *param_9 = param_5;
        *param_8 = lVar5;
        goto LAB_140405a1e;
      }
      if (param_3 != 0x59565955) goto LAB_1404059de;
      *param_6 = param_4 + 1;
      *param_9 = param_5;
      *param_8 = *param_6 + 1;
      lVar3 = *param_6 + -1;
    }
    *param_7 = lVar3;
    *param_10 = param_5;
  }
  return 1;
}

