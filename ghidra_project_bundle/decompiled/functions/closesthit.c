/**
 * Function: closesthit
 * Address:  140527b50
 * Signature: undefined closesthit(void)
 * Body size: 292 bytes
 */


char * closesthit(ushort param_1)

{
  if (param_1 < 0xdf) {
    switch(param_1) {
    case 0:
      return "None";
    case 1:
      return "Vertex";
    case 2:
      return "Hull";
    case 3:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
      break;
    case 4:
      return "Domain";
    case 8:
      return "Geometry";
    case 0x10:
      return "Pixel";
    case 0x20:
      return "Compute";
    case 0x40:
      return "Amplification";
    default:
      if (param_1 == 0x80) {
        return "Mesh";
      }
    }
  }
  else if (param_1 < 0x800) {
    if (param_1 < 0x200) {
      if (param_1 == 0xdf) {
        return "AllGraphics";
      }
      if (param_1 == 0x100) {
        return "RayGeneration";
      }
    }
    else {
      if (param_1 == 0x200) {
        return "AnyHit";
      }
      if (param_1 == 0x400) {
        return "ClosestHit";
      }
    }
  }
  else if (param_1 < 0x2000) {
    if (param_1 == 0x800) {
      return "Miss";
    }
    if (param_1 == 0x1000) {
      return "Intersection";
    }
  }
  else {
    if (param_1 == 0x2000) {
      return "Callable";
    }
    if (param_1 == 0x3f00) {
      return "AllRayTracing";
    }
    if (param_1 == 0x3fff) {
      return "All";
    }
  }
  return "<INVALID>";
}

