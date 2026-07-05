/**
 * Function: cJSON_InitHooks
 * Address:  1405810f0
 * Signature: undefined cJSON_InitHooks(void)
 * Body size: 161 bytes
 */


void cJSON_InitHooks(longlong *param_1)

{
                    /* 0x5810f0  49  cJSON_InitHooks */
  if (param_1 == (longlong *)0x0) {
    PTR_malloc_14150b218 = malloc_exref;
    PTR_free_14150b220 = free_exref;
    PTR_realloc_14150b228 = realloc_exref;
    return;
  }
  PTR_malloc_14150b218 = (code *)*param_1;
  if ((code *)*param_1 == (code *)0x0) {
    PTR_malloc_14150b218 = malloc_exref;
  }
  PTR_free_14150b220 = (code *)param_1[1];
  if ((code *)param_1[1] == (code *)0x0) {
    PTR_free_14150b220 = free_exref;
  }
  if (free_exref == (code *)PTR_free_14150b220 && malloc_exref == (code *)PTR_malloc_14150b218) {
    PTR_realloc_14150b228 = realloc_exref;
    return;
  }
  PTR_realloc_14150b228 = (undefined *)0x0;
  return;
}

