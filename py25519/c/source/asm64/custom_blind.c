#include "curve25519_mehdi.h"

EDP_BLINDING_CTX edp_custom_blinding = 
{
  W256(0x60CF86A7,0x918BE66B,0x47BBB589,0x4A2FD2D5,0xD41962EC,0x800E3372,0xCF2F2103,0x0924C821),
  W256(0x4A8E86B1,0x3CA0A593,0x5C5BC94D,0x3B064383,0xE22EE720,0x76297038,0x2339A770,0x7C2E1D03),
  {
    W256(0x99EC6330,0xB9D42503,0x2A67D70F,0x7EF1208D,0x6CDFAE01,0xF7167129,0x2FBDDF90,0x0AB9277D),
    W256(0x2AA39D8E,0x8B2A6BAD,0xBF75D3E8,0xA69AC114,0x97630749,0x3D7A4B25,0xC2C4CF71,0xCF885AD8),
    W256(0xE68C383A,0x6C0A62A9,0x4C69A975,0x8C4C5AAA,0xD3A60D2A,0x6516E3DB,0xCE3F54E3,0x9F99E8F0),
    W256(0xE3BB205C,0xA601BA3C,0xACC54326,0x09B85CF0,0x65970B51,0xC9330439,0x84C64C7F,0x57E8A62E)
  }
};
