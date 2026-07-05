/**
 * Function: ossl_store_open_ex
 * Address:  140c25b40
 * Signature: undefined ossl_store_open_ex(void)
 * Body size: 1146 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_store_open_ex(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong *param_4,
                       undefined8 param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined1 auStack_288 [32];
  ulonglong *local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  ulonglong *local_248;
  ulonglong local_240;
  ulonglong local_238;
  ulonglong local_230;
  undefined8 local_228;
  undefined8 local_220;
  ulonglong local_218;
  ulonglong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined *local_1e8 [2];
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  char local_158 [256];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140c25b5f;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_288;
  local_250 = param_5;
  uVar8 = 0;
  local_220 = param_6;
  local_1e8[0] = &DAT_1413a62dc;
  local_240 = 1;
  local_230 = 1;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_238 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_258 = param_3;
  local_248 = param_4;
  local_228 = param_2;
  FUN_140b8c190(local_158,param_1,0x100);
  pcVar3 = strchr(local_158,0x3a);
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
    iVar2 = FUN_140b8c6a0(local_158,&DAT_1413a62dc);
    if (iVar2 != 0) {
      iVar2 = strncmp(pcVar3 + 1,"//",2);
      *(char **)((longlong)local_1e8 + (ulonglong)(-(uint)(iVar2 != 0) & 8)) = local_158;
      local_230 = (ulonglong)(iVar2 != 0) + 1;
    }
  }
  FUN_140b932f0();
  uVar5 = uVar8;
  uVar4 = uVar8;
  uVar6 = uVar8;
  uVar10 = uVar8;
  if ((local_248 == (ulonglong *)0x0) ||
     ((iVar2 = FUN_140c71590(&local_218,local_248,local_250), iVar2 != 0 &&
      (iVar2 = FUN_140c71670(&local_218), iVar2 != 0)))) {
    do {
      if (local_230 <= uVar10) break;
      puVar1 = local_1e8[uVar10];
      FUN_140b932f0();
      uVar4 = ossl_store_get0_loader_int(puVar1);
      if (uVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar6 = FUN_140c5c3d0(local_228,puVar1,local_258);
        param_3 = local_258;
        if (uVar6 != 0) {
          uVar7 = ossl_store_loader_get0_provider(uVar6);
          uVar7 = FUN_140c17230(uVar7);
          local_240 = local_240 & 0xffffffff00000000;
          uVar4 = uVar6;
          if (*(code **)(uVar6 + 0xd0) == (code *)0x0) {
            if (*(code **)(uVar6 + 0x88) == (code *)0x0) goto LAB_140c25e9d;
            uVar5 = (**(code **)(uVar6 + 0x88))(uVar7,param_1);
            if (uVar5 == 0) goto LAB_140c25ea2;
            iVar2 = FUN_140c26b80(uVar6,uVar5,local_220,local_258);
            if (iVar2 == 0) {
              (**(code **)(uVar6 + 0xb8))(uVar5);
              uVar5 = uVar8;
              goto LAB_140c25ea2;
            }
          }
          else {
            local_268 = &local_218;
            uVar5 = (**(code **)(uVar6 + 0xd0))(uVar7,param_1,local_220,FUN_140c71960);
LAB_140c25e9d:
            if (uVar5 == 0) {
LAB_140c25ea2:
              FUN_140c5c420(uVar6);
              uVar4 = uVar8;
            }
          }
          FUN_140c71390(&local_218);
          uVar6 = uVar4;
          param_3 = local_258;
        }
      }
      else {
        FUN_140b93470();
        param_3 = local_258;
        local_240 = local_240 & 0xffffffff00000000;
        if (*(code **)(uVar4 + 0x58) == (code *)0x0) {
          uVar5 = (**(code **)(uVar4 + 0x10))(uVar4,param_1,local_248,local_250);
          param_3 = local_258;
        }
        else {
          local_260 = local_250;
          local_268 = local_248;
          uVar5 = (**(code **)(uVar4 + 0x58))(uVar4,param_1,local_228,local_258);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar5 == 0);
    if (((((int)local_240 == 0) && (uVar5 != 0)) &&
        ((param_3 == 0 ||
         (uVar8 = FUN_140b8c830(param_3,"crypto\\store\\store_lib.c",0xbd), local_238 = uVar8,
         uVar8 != 0)))) &&
       (puVar9 = (ulonglong *)FUN_140b8da80(0x78,"crypto\\store\\store_lib.c",0xbe),
       puVar9 != (ulonglong *)0x0)) {
      puVar9[6] = uVar8;
      puVar9[1] = uVar6;
      *puVar9 = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = param_7;
      puVar9[4] = param_8;
      puVar9[9] = local_218;
      puVar9[10] = uStack_210;
      *(undefined4 *)(puVar9 + 0xb) = (undefined4)local_208;
      *(undefined4 *)((longlong)puVar9 + 0x5c) = local_208._4_4_;
      *(undefined4 *)(puVar9 + 0xc) = (undefined4)uStack_200;
      *(undefined4 *)((longlong)puVar9 + 100) = uStack_200._4_4_;
      *(undefined4 *)(puVar9 + 0xd) = (undefined4)local_1f8;
      *(undefined4 *)((longlong)puVar9 + 0x6c) = local_1f8._4_4_;
      *(undefined4 *)(puVar9 + 0xe) = (undefined4)uStack_1f0;
      *(undefined4 *)((longlong)puVar9 + 0x74) = uStack_1f0._4_4_;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      goto LAB_140c25d8d;
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\store\\store_lib.c",0x6d,"OSSL_STORE_open_ex");
    FUN_140b91cc0(0x2c,0x8000f,0);
  }
  FUN_140b93470();
  if (uVar5 != 0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_1d8 = uVar4;
    local_1d0 = uVar6;
    uStack_1c8 = uVar5;
    if ((uVar6 == 0) || ((**(code **)(uVar4 + 0xb8))(uVar5), local_1d0 == 0)) {
      (**(code **)(local_1d8 + 0x50))(uStack_1c8);
    }
    FUN_140b77c60(uStack_198,FUN_140c26690);
    FUN_140c5c420(local_1d0);
    FUN_140b8d990(uStack_1a8,"crypto\\store\\store_lib.c",0x24e);
    FUN_140c71320(&local_190);
  }
  FUN_140c5c420(uVar6);
  FUN_140b8d990(local_238,"crypto\\store\\store_lib.c",0xe9);
  FUN_140b8d990(0,"crypto\\store\\store_lib.c",0xea);
LAB_140c25d8d:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_288);
}

