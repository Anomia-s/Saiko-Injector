/**
 * Function: reading_from
 * Address:  14044e780
 * Signature: undefined reading_from(void)
 * Body size: 372 bytes
 */


undefined8 reading_from(longlong param_1)

{
  char cVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  double dVar9;
  
  cVar1 = *(char *)(param_1 + 0x94);
  pcVar6 = "SDL_AUDIO_DISK_OUTPUT_FILE";
  if (cVar1 != '\0') {
    pcVar6 = "SDL_AUDIO_DISK_INPUT_FILE";
  }
  pcVar8 = "sdlaudio.raw";
  if (cVar1 != '\0') {
    pcVar8 = "sdlaudio-in.raw";
  }
  pcVar6 = (char *)FUN_140110550(pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar8 = pcVar6;
  }
  lVar4 = FUN_140160c70(1,0x18);
  *(longlong *)(param_1 + 200) = lVar4;
  if (lVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x84) * 1000;
    iVar2 = *(int *)(param_1 + 0x68);
    *(int *)(lVar4 + 8) = iVar3 / iVar2;
    pcVar6 = (char *)FUN_140110550("SDL_AUDIO_DISK_TIMESCALE",
                                   (longlong)iVar3 % (longlong)iVar2 & 0xffffffff);
    if ((pcVar6 != (char *)0x0) && (dVar9 = atof(pcVar6), 0.0 <= dVar9)) {
      dVar9 = (double)round(dVar9 * (double)*(uint *)(*(longlong *)(param_1 + 200) + 8));
      *(int *)(*(longlong *)(param_1 + 200) + 8) = (int)(longlong)dVar9;
    }
    puVar7 = &DAT_14135eea8;
    if (cVar1 != '\0') {
      puVar7 = &DAT_14135eecf;
    }
    uVar5 = parameter_s_is_invalid(pcVar8,puVar7);
    **(undefined8 **)(param_1 + 200) = uVar5;
    if (**(longlong **)(param_1 + 200) != 0) {
      if (cVar1 == '\0') {
        uVar5 = FUN_140160c40((longlong)*(int *)(param_1 + 0x6c));
        *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x10) = uVar5;
        _Dst = *(void **)(*(longlong *)(param_1 + 200) + 0x10);
        if (_Dst == (void *)0x0) {
          return 0;
        }
        memset(_Dst,(uint)*(byte *)(param_1 + 0x88),(longlong)*(int *)(param_1 + 0x6c));
        pcVar6 = "Writing to";
      }
      else {
        pcVar6 = "Reading from";
      }
      FUN_1400fb9b0(4,"You are using the SDL disk i/o audio driver!");
      FUN_1400fb9b0(4," %s file [%s].",pcVar6,pcVar8);
      return 1;
    }
  }
  return 0;
}

