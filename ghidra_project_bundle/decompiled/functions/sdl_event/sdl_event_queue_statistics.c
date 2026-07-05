/**
 * Function: sdl_event_queue_statistics
 * Address:  1401062f0
 * Signature: undefined sdl_event_queue_statistics(void)
 * Body size: 617 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sdl_event_queue_statistics(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *_Str;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  _Str = (char *)FUN_140110550("SDL_EVENT_QUEUE_STATISTICS");
  FUN_1401552a0(DAT_1415254b8);
  DAT_1415254c0 = 0;
  lVar7 = DAT_1415254d0;
  if ((_Str != (char *)0x0) && (iVar4 = atoi(_Str), lVar7 = DAT_1415254d0, iVar4 != 0)) {
    FUN_1400fb540("SDL EVENT QUEUE: Maximum events in-flight: %d",DAT_1415254c8);
    lVar7 = DAT_1415254d0;
  }
  do {
    lVar1 = DAT_1415254e0;
    if (lVar7 == 0) {
      while (lVar1 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x90);
        FUN_140160cf0();
      }
      lVar7 = 0;
      FUN_140106140(&DAT_1415254c4,0);
      DAT_1415254c8 = 0;
      DAT_1415254d0 = 0;
      DAT_1415254d8 = 0;
      DAT_1415254e0 = 0;
      FUN_140106140(&DAT_141524c50,0);
      do {
        FUN_140160cf0(*(undefined8 *)((longlong)&DAT_141524c60 + lVar7));
        *(undefined8 *)((longlong)&DAT_141524c60 + lVar7) = 0;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0x800);
      if (DAT_141525460 != 0) {
        FUN_140155290();
        DAT_141525460 = 0;
      }
      if (DAT_141525468 != 0) {
        FUN_140160cf0();
        DAT_141525468 = 0;
        DAT_141525470 = 0;
      }
      lVar7 = DAT_1415254b8;
      DAT_141525478 = 0;
      DAT_141525480 = 0;
      _DAT_141525488 = 0;
      if (DAT_1415254b8 != 0) {
        DAT_1415254b8 = 0;
        FUN_1401552c0(lVar7);
        FUN_140155290(lVar7);
        return;
      }
      FUN_1401552c0(0);
      return;
    }
    lVar1 = *(longlong *)(lVar7 + 0x90);
    if (*(longlong *)(lVar7 + 0x80) != 0) {
      plVar5 = (longlong *)parameter_s_is_invalid(&DAT_1415254b0);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_140160c70(1,0x10);
        if (plVar5 != (longlong *)0x0) {
          cVar3 = parameter_s_is_invalid(&DAT_1415254b0,plVar5,FUN_140109850);
          if (cVar3 != '\0') {
            lVar2 = *(longlong *)(lVar7 + 0x80);
            goto joined_r0x00014010642a;
          }
          FUN_140160cf0(plVar5);
        }
      }
      else {
        lVar2 = *(longlong *)(lVar7 + 0x80);
joined_r0x00014010642a:
        if (lVar2 != 0) {
          lVar8 = plVar5[1];
          do {
            lVar6 = lVar2;
            lVar2 = *(longlong *)(lVar6 + 0x10);
            *(longlong *)(lVar6 + 8) = lVar8;
            *(undefined8 *)(lVar6 + 0x10) = 0;
            if (plVar5[1] == 0) {
              *plVar5 = lVar6;
            }
            else {
              *(longlong *)(plVar5[1] + 0x10) = lVar6;
            }
            plVar5[1] = lVar6;
            lVar8 = lVar6;
          } while (lVar2 != 0);
        }
        *(undefined8 *)(lVar7 + 0x80) = 0;
      }
    }
    FUN_140160cf0(lVar7);
    lVar7 = lVar1;
  } while( true );
}

