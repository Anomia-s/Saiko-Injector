/**
 * Function: cJSON_HasObjectItem
 * Address:  1405828a0
 * Signature: undefined cJSON_HasObjectItem(void)
 * Body size: 183 bytes
 */


undefined8 cJSON_HasObjectItem(longlong param_1,byte *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  
                    /* 0x5828a0  48  cJSON_HasObjectItem */
  if (param_2 != (byte *)0x0 && param_1 != 0) {
    for (puVar1 = *(undefined8 **)(param_1 + 0x10); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      pbVar2 = (byte *)puVar1[7];
      if (pbVar2 != (byte *)0x0) {
        if (param_2 == pbVar2) {
          return 1;
        }
        bVar5 = *param_2;
        iVar3 = tolower((uint)bVar5);
        iVar4 = tolower((uint)*pbVar2);
        if (iVar3 == iVar4) {
          lVar6 = 1;
          do {
            if (bVar5 == 0) {
              return 1;
            }
            bVar5 = param_2[lVar6];
            iVar3 = tolower((uint)bVar5);
            iVar4 = tolower((uint)pbVar2[lVar6]);
            lVar6 = lVar6 + 1;
          } while (iVar3 == iVar4);
        }
        if (iVar3 == iVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}

