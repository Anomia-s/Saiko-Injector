/**
 * Function: usage_luduvoapp_mode_options_luduvo_uri_proj
 * Address:  140001ca0
 * Signature: undefined usage_luduvoapp_mode_options_luduvo_uri_proj(void)
 * Body size: 250 bytes
 */


void usage_luduvoapp_mode_options_luduvo_uri_proj(void)

{
  BOOL BVar1;
  HANDLE hFile;
  FILE *pFVar2;
  undefined1 auStackY_48 [32];
  DWORD local_14;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStackY_48;
  hFile = GetStdHandle(0xfffffff5);
  if (((longlong)hFile + 1U < 2) && (BVar1 = AttachConsole(0xffffffff), BVar1 != 0)) {
    hFile = GetStdHandle(0xfffffff5);
  }
  if ((longlong)hFile + 1U < 2) {
    pFVar2 = (FILE *)__acrt_iob_func(1);
    fwrite("usage: LuduvoApp [mode] [options] [luduvo://URI | project.ldv]\n\nmodes:\n  --studio        open Luduvo Studio (default)\n  --play          join a server (luduvo:// URI); no URI = singleplayer\n  --singleplayer  play offline in the local test scene\n\nplayer options:\n  --insecure      allow connecting without a server public key\n\nURI format:\n  luduvo://<token>/<host>/<port>[/<server_pubkey_hex>]\n\nQt options pass through in single-dash form only (-platform, -style).\n"
           ,0x1cf,1,pFVar2);
    pFVar2 = (FILE *)__acrt_iob_func(1);
    if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStackY_48)) {
                    /* WARNING: Could not recover jumptable at 0x000140001d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fflush(pFVar2);
      return;
    }
  }
  else {
    WriteFile(hFile,
              "usage: LuduvoApp [mode] [options] [luduvo://URI | project.ldv]\n\nmodes:\n  --studio        open Luduvo Studio (default)\n  --play          join a server (luduvo:// URI); no URI = singleplayer\n  --singleplayer  play offline in the local test scene\n\nplayer options:\n  --insecure      allow connecting without a server public key\n\nURI format:\n  luduvo://<token>/<host>/<port>[/<server_pubkey_hex>]\n\nQt options pass through in single-dash form only (-platform, -style).\n"
              ,0x1cf,&local_14,(LPOVERLAPPED)0x0);
    if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStackY_48)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStackY_48);
}

