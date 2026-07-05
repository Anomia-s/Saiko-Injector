/**
 * Function: extension_gl_oes_egl_image_external_requirenn
 * Address:  140635a50
 * Signature: undefined extension_gl_oes_egl_image_external_requirenn(void)
 * Body size: 22 bytes
 */


char * extension_gl_oes_egl_image_external_requirenn(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (param_1 == 0xb) {
    pcVar1 = "#extension GL_OES_EGL_image_external : require\n\n";
  }
  return pcVar1;
}

