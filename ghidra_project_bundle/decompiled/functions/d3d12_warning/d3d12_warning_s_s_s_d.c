/**
 * Function: d3d12_warning_s_s_s_d
 * Address:  1403fedf0
 * Signature: undefined d3d12_warning_s_s_s_d(void)
 * Body size: 181 bytes
 */


void d3d12_warning_s_s_s_d(uint param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_1 < 0xb) {
    pcVar2 = (&PTR_s_APPLICATION_DEFINED_140e14de0)[param_1];
  }
  else {
    pcVar2 = "UNKNOWN";
  }
  switch(param_2) {
  case 0:
    pcVar1 = "CORRUPTION";
    break;
  case 1:
    pcVar1 = "ERROR";
    break;
  case 2:
    pcVar1 = "WARNING";
    goto LAB_1403fee5c;
  case 3:
    pcVar1 = "INFO";
    goto LAB_1403fee5c;
  case 4:
    pcVar1 = "MESSAGE";
LAB_1403fee5c:
    FUN_1400fb8f0(9,"D3D12 WARNING: %s [%s %s #%d]",param_4,pcVar2,pcVar1,param_3);
    return;
  default:
    pcVar1 = "UNKNOWN";
    if (1 < param_2) goto LAB_1403fee5c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400fb950(9,"D3D12 ERROR: %s [%s %s #%d]",param_4,pcVar2,pcVar1,param_3);
}

