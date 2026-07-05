/**
 * Function: cJSON_DeleteItemFromObject
 * Address:  140583e90
 * Signature: undefined cJSON_DeleteItemFromObject(void)
 * Body size: 21 bytes
 */


void cJSON_DeleteItemFromObject(void)

{
  undefined8 uVar1;
  
                    /* 0x583e90  34  cJSON_DeleteItemFromObject */
  uVar1 = cJSON_DetachItemFromObject();
  cJSON_Delete(uVar1);
  return;
}

