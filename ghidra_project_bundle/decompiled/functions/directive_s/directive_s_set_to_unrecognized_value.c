/**
 * Function: directive_s_set_to_unrecognized_value
 * Address:  140cab320
 * Signature: undefined directive_s_set_to_unrecognized_value(void)
 * Body size: 455 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
directive_s_set_to_unrecognized_value(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_2 == (char *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar3 = 0x118;
LAB_140cab350:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\provider_conf.c",uVar3,"provider_conf_parse_bool_setting");
    FUN_140b91cc0(0xf,0x69,"directive %s set to unrecognized value",param_1);
    return 0;
  }
  iVar1 = strcmp(param_2,"1");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_2,"yes");
    if (iVar1 != 0) {
      iVar1 = strcmp(param_2,"YES");
      if (iVar1 != 0) {
        iVar1 = strcmp(param_2,"true");
        if (iVar1 != 0) {
          iVar1 = strcmp(param_2,"TRUE");
          if (iVar1 != 0) {
            iVar1 = strcmp(param_2,"on");
            if (iVar1 != 0) {
              iVar1 = strcmp(param_2,"ON");
              if (iVar1 != 0) {
                iVar1 = strcmp(param_2,"0");
                if (iVar1 != 0) {
                  iVar1 = strcmp(param_2,"no");
                  if (iVar1 != 0) {
                    iVar1 = strcmp(param_2,"NO");
                    if (iVar1 != 0) {
                      iVar1 = strcmp(param_2,"false");
                      if (iVar1 != 0) {
                        iVar1 = strcmp(param_2,"FALSE");
                        if (iVar1 != 0) {
                          iVar1 = strcmp(param_2,"off");
                          if (iVar1 != 0) {
                            iVar1 = strcmp(param_2,"OFF");
                            if (iVar1 != 0) {
                              d_aplatformplatformopenssl_srccryptoerrerr_lo();
                              uVar3 = 0x12e;
                              goto LAB_140cab350;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar2 = 0;
                goto LAB_140cab4d0;
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 1;
LAB_140cab4d0:
  *param_3 = uVar2;
  return 1;
}

