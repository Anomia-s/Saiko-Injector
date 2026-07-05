/**
 * Function: invalid_conversion_specifier
 * Address:  1406aac60
 * Signature: undefined invalid_conversion_specifier(void)
 * Body size: 883 bytes
 */


undefined8 invalid_conversion_specifier(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  errno_t eVar4;
  char *pcVar5;
  void *pvVar6;
  size_t sVar7;
  double dVar8;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  tm local_36c;
  longlong local_348;
  char local_33b;
  char local_33a;
  undefined1 local_339;
  char local_338 [208];
  char *local_268;
  char *local_260;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_398;
  pcVar5 = (char *)FUN_1406b75a0(param_1,1,&DAT_14135eea5,0);
  iVar3 = FUN_140473550(param_1,2);
  if (iVar3 < 1) {
    local_348 = _time64((__time64_t *)0x0);
    if (*pcVar5 != '!') goto LAB_1406aacf7;
LAB_1406aaccc:
    eVar4 = _gmtime64_s(&local_36c,&local_348);
    if (eVar4 != 0) {
LAB_1406aad10:
      FUN_140474110(param_1);
      goto LAB_1406aae50;
    }
    pcVar5 = pcVar5 + 1;
  }
  else {
    dVar8 = (double)FUN_1406b7730(param_1,2);
    local_348 = (longlong)dVar8;
    if (*pcVar5 == '!') goto LAB_1406aaccc;
LAB_1406aacf7:
    if ((local_348 < 0) || (eVar4 = _localtime64_s(&local_36c,&local_348), eVar4 != 0))
    goto LAB_1406aad10;
  }
  if (((*pcVar5 == '*') && (pcVar5[1] == 't')) && (pcVar5[2] == '\0')) {
    FUN_1404748d0(param_1,0,9);
    FUN_140474150(param_1,local_36c.tm_sec);
    FUN_140474c90(param_1,0xfffffffe,&DAT_14135dd2b);
    FUN_140474150(param_1,local_36c.tm_min);
    FUN_140474c90(param_1,0xfffffffe,"min");
    FUN_140474150(param_1,local_36c.tm_hour);
    FUN_140474c90(param_1,0xfffffffe,&DAT_141339a31);
    FUN_140474150(param_1,local_36c.tm_mday);
    FUN_140474c90(param_1,0xfffffffe,&DAT_141326285);
    FUN_140474150(param_1,local_36c.tm_mon + 1);
    FUN_140474c90(param_1,0xfffffffe,"month");
    FUN_140474150(param_1,local_36c.tm_year + 0x76c);
    FUN_140474c90(param_1,0xfffffffe,&DAT_14133dcaf);
    FUN_140474150(param_1,local_36c.tm_wday + 1);
    FUN_140474c90(param_1,0xfffffffe,&DAT_141326284);
    FUN_140474150(param_1,local_36c.tm_yday + 1);
    FUN_140474c90(param_1,0xfffffffe,&DAT_14132627f);
    if (-1 < local_36c.tm_isdst) {
      FUN_1404744d0(param_1);
      FUN_140474c90(param_1,0xfffffffe,"isdst");
    }
  }
  else {
    local_33b = '%';
    local_339 = 0;
    local_378 = param_1;
    FUN_1406b80b0(param_1,&local_268);
    cVar2 = *pcVar5;
    while( true ) {
      while (cVar2 == '%') {
        cVar1 = pcVar5[1];
        if (cVar1 == '\0') goto LAB_1406aae10;
        pvVar6 = memchr("aAbBcdHIjmMpSUwWxXyYzZ%",(int)cVar1,0x18);
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          invalid_argument_d_s(local_378,1,"invalid conversion specifier");
        }
        local_33a = cVar1;
        sVar7 = strftime(local_338,200,&local_33b,&local_36c);
        buffer_too_large(&local_268,local_338,sVar7);
        pcVar5 = pcVar5 + 2;
        cVar2 = *pcVar5;
      }
      if (cVar2 == '\0') break;
LAB_1406aae10:
      if (local_260 <= local_268) {
        buffer_too_large(&local_268,1);
        cVar2 = *pcVar5;
      }
      *local_268 = cVar2;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
      local_268 = local_268 + 1;
    }
    FUN_1406b82d0(&local_268);
  }
LAB_1406aae50:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_398)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_398);
}

