#include "stdlib.h"

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif


static GUI_CONST_STORAGE unsigned short acclock_pic[] = {
  0xC5B2, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 
        0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50, 0xBD50,
  0xBD4F, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xAC8C, 0x9C4B, 0x940A, 0x8BEA, 0x8BCA, 0x83C9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 
        0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x83A9, 0x8BC9, 0x8BCA, 0x93EA, 0x942A, 0xA46B, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4CC,
  0xBD4F, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xAC8C, 0x93CA, 0x7328, 0x62A7, 0x4A26, 0x41E5, 0x39C5, 0x39A4, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 
        0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3984, 0x39A5, 0x41C5, 0x4205, 0x5246, 0x62C7, 0x7B69, 0x9C2A, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4CC,
  0xBD4F, 0xACAC, 0xACAC, 0xACAC, 0xACAC, 0xACAC, 0xACAC, 0x93EA, 0x5AA7, 0x39A5, 0x2103, 0x18C2, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 
        0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18E3, 0x2944, 0x4205, 0x6B08, 0x9C4B, 0xACAC, 0xACAC, 0xACAC, 0xACAC, 0xACAC, 0xACCC,
  0xBD4F, 0xACAC, 0xACAC, 0xACAC, 0xACAC, 0xACAC, 0x7369, 0x39A5, 0x18E3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18A3, 0x18A3, 0x18A3, 0x18A3, 0x18A3, 
        0x18A3, 0x18A3, 0x18A3, 0x18A3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x2123, 0x4A26, 0x8BEA, 0xACAC, 0xACAC, 0xACAC, 0xACAC, 0xACCC,
  0xBD4F, 0xB4AC, 0xB4AC, 0xB4AC, 0xAC8C, 0x7308, 0x3164, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x2945, 0x4228, 0x5ACA, 0x6B6C, 0x73AE, 0x7BAE, 
        0x738D, 0x632C, 0x52AA, 0x39E7, 0x2104, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x20E3, 0x41E5, 0x8BCA, 0xB4AC, 0xB4AC, 0xB4AC, 0xB4CC,
  0xBD4F, 0xB4AC, 0xB4AC, 0xB4AC, 0x7B48, 0x3164, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x2104, 0x4228, 0x7BEE, 0xA554, 0xC638, 0xCE99, 0xD6DA, 0xDEFB, 0xDF1B, 0xE71B, 
        0xDF1B, 0xDEFA, 0xD6BA, 0xCE79, 0xBDF7, 0x94D2, 0x6B4C, 0x31A6, 0x18E3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18E3, 0x4A06, 0x9C0A, 0xB4AC, 0xB4AC, 0xB4CC,
  0xBD4F, 0xB4AC, 0xB4AC, 0x93EA, 0x39A5, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18E3, 0x2945, 0x6B6C, 0xAD95, 0xD6BA, 0xE75C, 0xEFBD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xDF1B, 0xCE79, 0x9CD2, 0x5289, 0x2104, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18E3, 0x6287, 0xA44B, 0xB4AC, 0xB4CC,
  0xBD4F, 0xB4AC, 0xB4AC, 0x5246, 0x20E3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x2124, 0x6B6D, 0xC658, 0xE75C, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7BE, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xDF1B, 0xA554, 0x4A69, 0x20E4, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x2123, 0x8368, 0xB4AC, 0xB4CC,
  0xBD4F, 0xB4CC, 0x8BC9, 0x3184, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x1903, 0x4A89, 0xB596, 0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xBE17, 0xCE99, 0xC638, 
        0xB595, 0xAD74, 0xE77C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEFBD, 0xDEFB, 0x8C71, 0x31A6, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18C3, 0x5266, 0xA46B, 0xB4EC,
  0xBD4F, 0xACCC, 0x62C7, 0x2103, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x2945, 0x7BAE, 0xD6BA, 0xEFBE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE75C, 0xAD74, 0xC658, 0xD6BA, 
        0xDF1B, 0xB575, 0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEFBD, 0xBDD6, 0x528A, 0x2104, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x3184, 0x8BC9, 0xB4CC,
  0xBD4F, 0xB4CC, 0x4205, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x31A6, 0x94B2, 0xE73C, 0xF7DE, 0xF7DE, 0xEFBD, 0xE75C, 0xF7DE, 0xEF9D, 0xEF7C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xC638, 0xD699, 0xEF9D, 
        0xC658, 0xBE17, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xD6BA, 0x632C, 0x2144, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x7B68, 0xB4EC,
  0xBD4F, 0x9C4B, 0x39C5, 0x18C3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x39C7, 0x9D13, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xD6BA, 0x9D13, 0xEF7C, 0xCE79, 0xAD74, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCE58, 0xD6BA, 0xBDF6, 
        0xC617, 0xE73B, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xC658, 0xBDF6, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF1B, 0x6B6D, 0x2124, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18C3, 0x62C7, 0xACAC,
  0xBD4F, 0x8BC9, 0x3164, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x31A6, 0x9CF3, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF3B, 0xA513, 0xEF7D, 0xD6DA, 0xB575, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF1B, 0xDF1B, 0xBDF6, 
        0xB595, 0xC5F7, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF7D, 0xB5D6, 0xB5D6, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE75C, 0x6B6D, 0x2104, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x5266, 0xAC6B,
  0xBD4F, 0x83A9, 0x3164, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x2985, 0x8C91, 0xEFBD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xA534, 0xEF9D, 0xE75C, 0xB595, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xD6BA, 0xC617, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE73C, 0x630C, 0x20E4, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x18C3, 0x4A26, 0xA44B,
  0xC54F, 0x8369, 0x2964, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x2124, 0x7BCF, 0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xB596, 0xEF9D, 0xEF7D, 0xBDF7, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xF7BE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDEFA, 0xC638, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xD69A, 0x5269, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x4A05, 0xA44B,
  0xC54F, 0x7B68, 0x2944, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x1903, 0x5ACB, 0xD6BA, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF1B, 0xF7BE, 0xF7BE, 0xE73C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF3E, 0xDF1E, 
        0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF7D, 0xE73C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xB595, 0x31C6, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x18E3, 0x41E5, 0x9C4B,
  0xC54F, 0x7348, 0x2143, 0x18E3, 0x18E3, 0x10C2, 0x10C2, 0x18E3, 0x31A6, 0xAD75, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xC69E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE75C, 0x8410, 0x20E4, 0x18E3, 0x10C2, 0x10C2, 0x18E3, 0x18E3, 0x39C5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x10C2, 0x10C2, 0x10C2, 0x18E3, 0x736D, 0xE77C, 0xF7DE, 0xEFBD, 0xEF7D, 0xEFBD, 0xD6DA, 0xDF1B, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF1B, 0xDF1B, 0xF7DE, 0xF7DE, 0xF7DE, 0xCE79, 0x4248, 0x10C2, 0x10C2, 0x10C2, 0x10C2, 0x10C2, 0x39C5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x10C2, 0x10C2, 0x10C2, 0x2965, 0xC638, 0xF7DE, 0xEF9D, 0xBE17, 0xBDD6, 0xD6DA, 0xCE58, 0xBE17, 0xDF3B, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xD6BA, 0xCE79, 0xBE17, 0xDEFB, 0xF7DE, 0xF7DE, 0xEF7D, 0x94D2, 0x10A2, 0x10C2, 0x10C2, 0x10C2, 0x10C2, 0x39C5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x10C2, 0x10C2, 0x18E3, 0x6B4C, 0xEF9D, 0xF7DE, 0xF7BE, 0xC658, 0xB575, 0xC678, 0xD6FA, 0xC617, 0xD6DA, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xD6DA, 0xE75C, 0xBE17, 0xD69A, 0xF7DE, 0xF7DE, 0xF7DE, 0xCE79, 0x4207, 0x10A2, 0x10C2, 0x10C2, 0x10C2, 0x39C5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x10C2, 0x10C2, 0x2124, 0xC617, 0xF7DE, 0xF7DE, 0xF7DE, 0xDEDA, 0xB5B6, 0xCE79, 0xDEFB, 0xC638, 0xD6DA, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xCE58, 0xBDF7, 0xEF7D, 0xF7DE, 0xF7DE, 0xF7DE, 0xE75C, 0x8C71, 0x10A2, 0x10C2, 0x10C2, 0x10C2, 0x39C5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x10C2, 0x10C2, 0x4248, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xDEDA, 0xC5F7, 0xC658, 0xCE58, 0xB5B6, 0xD6DA, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xC658, 0xBDF7, 0xCE99, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xBDF7, 0x2144, 0x10C2, 0x10C2, 0x10C2, 0x39C5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x10C2, 0x1903, 0x842F, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xE75C, 0xEF7D, 0xCE99, 0xD6DA, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xEF9D, 0xCE99, 0xB5B6, 0xBDF7, 0xC638, 0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xD6DA, 0x52AA, 0x10C2, 0x10C2, 0x10C2, 0x39A5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x10C2, 0x2124, 0xB5D6, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEFBD, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEFBD, 0xE77C, 0xC638, 0x73AE, 0x632C, 0xB5D6, 0xE77C, 0xEF9D, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE77C, 0x7C0F, 0x10A2, 0x10C2, 0x10C2, 0x39A5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x10C2, 0x2965, 0xE73C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEFBD, 0xE73C, 0xB5B6, 0x632C, 0x630B, 0xAD95, 0xDF3B, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xA514, 0x10C2, 0x10C2, 0x10C2, 0x39A5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x10E2, 0x4A69, 0xE77C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF7D, 0xD6DA, 0x9D13, 0x632C, 0x738D, 0xC617, 0xEF7D, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xB5B6, 0x2965, 0x10C2, 0x10C2, 0x39A5, 0x9C2B,
  0xC54F, 0x7328, 0x2123, 0x10C2, 0x18E3, 0x632C, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xEFBD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCEDE, 0xCE9E, 
        0xEF9E, 0xF7DE, 0xF7BE, 0xE73C, 0xCE79, 0x94B1, 0x630C, 0x8450, 0xCE99, 0xEFBD, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF7D, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7FE, 0xC638, 0x3A07, 0x10C2, 0x10C2, 0x39A5, 0x9C2B,
  0xC54F, 0x7328, 0x2103, 0x10A2, 0x18E3, 0x7BEE, 0xEF9D, 0xF7DE, 0xF7DE, 0xEF7D, 0xD6BA, 0xD6BA, 0xEF7C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xC67D, 0xBE1C, 
        0xE73D, 0xD6DA, 0xB5D6, 0x8C70, 0x6B2C, 0x9CD2, 0xDF1B, 0xEFBD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDEFB, 0xC658, 0xD6BA, 0xF7BE, 0xF7DE, 0xF7DE, 0xCE99, 0x4A69, 0x10A2, 0x10A2, 0x39A5, 0x9C2B,
  0xC56F, 0x7328, 0x2103, 0x10A2, 0x18E3, 0x8C50, 0xEF9D, 0xF7DE, 0xF7BE, 0xD6B9, 0xBDF6, 0xCE58, 0xBDD6, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE77C, 0x8CB6, 0x6352, 
        0x94B3, 0x7BEF, 0x6B8D, 0xAD74, 0xEF7D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xB5B6, 0xD6DA, 0xAD54, 0xEF9D, 0xF7DE, 0xF7DE, 0xD6BA, 0x52AA, 0x10A2, 0x10A2, 0x39A5, 0x9C2B,
  0xC56F, 0x7348, 0x2103, 0x10A2, 0x18E3, 0x8C70, 0xEF9D, 0xF7DE, 0xEFBD, 0xD6BA, 0xC658, 0xBE17, 0xAD95, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xC658, 0x3A2C, 0x0026, 
        0x2146, 0x9CF2, 0xEF9D, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE77C, 0xD6B9, 0xAD74, 0xEF9D, 0xF7DE, 0xF7DE, 0xD6DA, 0x5ACA, 0x10A2, 0x10A2, 0x39A5, 0x9C4B,
  0xC54F, 0x7328, 0x2103, 0x10A2, 0x18E3, 0x8C50, 0xEF9D, 0xF7DE, 0xF7DE, 0xDF3B, 0xB596, 0xB575, 0xAD75, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDEFB, 0x7BF0, 0x4A6B, 
        0x6B6D, 0x8C30, 0xA514, 0xCE79, 0xEFBD, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCE58, 0xE75C, 0xB595, 0xDF1B, 0xF7DE, 0xF7DE, 0xD6BA, 0x5AAA, 0x10A2, 0x10A2, 0x39A5, 0x9C2B,
  0xC54F, 0x7328, 0x2103, 0x10A2, 0x18E3, 0x840F, 0xEF9D, 0xF7DE, 0xF7DE, 0xE75C, 0xC638, 0xCE79, 0xD6DA, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE73C, 0xDEFB, 
        0xE75C, 0xBDD6, 0x8450, 0x8430, 0x8C91, 0xBE17, 0xEF9D, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xBDF7, 0xD679, 0xC638, 0xE77C, 0xF7DE, 0xF7DE, 0xD699, 0x5289, 0x10A2, 0x10A2, 0x39A5, 0x9C2B,
  0xC56F, 0x7348, 0x2103, 0x10A2, 0x18C3, 0x6B6D, 0xEF9D, 0xF7DE, 0xF7DE, 0xEFBD, 0xDEFB, 0xDEFB, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xEF9D, 0xC638, 0x94D2, 0x842F, 0x8410, 0xB5B6, 0xE77C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xDEDA, 0xE75C, 0xF7DE, 0xF7DE, 0xF7FE, 0xC658, 0x4228, 0x10A2, 0x10A2, 0x39C5, 0x9C4B,
  0xC570, 0x7328, 0x2103, 0x10A2, 0x10C2, 0x52AA, 0xEF7D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xCE78, 0x9CF3, 0x8C30, 0x9D13, 0xE77C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xB5D6, 0x3186, 0x10A2, 0x10A2, 0x39A4, 0x9C2B,
  0xC550, 0x7328, 0x2103, 0x10A2, 0x10A2, 0x31A6, 0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xF7DE, 0xD699, 0xC638, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xAD55, 0x18E3, 0x10A2, 0x10A2, 0x39A4, 0x9C2B,
  0xC550, 0x7328, 0x2103, 0x10A2, 0x10A2, 0x2124, 0xC658, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0x8C51, 0x1082, 0x10A2, 0x10A2, 0x39A4, 0x9C2B,
  0xC570, 0x7328, 0x2103, 0x10A2, 0x10A2, 0x18E3, 0x94B1, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDEFB, 0x630B, 0x1082, 0x10A2, 0x10A2, 0x39A4, 0x9C4B,
  0xC570, 0x7328, 0x18E2, 0x10A2, 0x0881, 0x10A2, 0x4A89, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xC658, 0xAD54, 0xCE58, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xB5B5, 0xEFBD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xC638, 0x2965, 0x0881, 0x10A2, 0x1082, 0x31A4, 0x9C4B,
  0xC570, 0x7328, 0x18E2, 0x0881, 0x0881, 0x0881, 0x2124, 0xCEB9, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF1B, 0xBDF6, 0xCE78, 0xBE17, 0xDF3B, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCE79, 0x94B1, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0x94F2, 0x0881, 0x0881, 0x0881, 0x0881, 0x31A4, 0x9C4B,
  0xC570, 0x7328, 0x18E2, 0x0881, 0x0881, 0x0881, 0x10C2, 0x840F, 0xEFBD, 0xF7DE, 0xF7DE, 0xE73C, 0xB5B5, 0xA533, 0xB5B6, 0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xE75C, 0xBDF7, 0xA4F3, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xD6BA, 0x52A9, 0x0861, 0x0881, 0x0881, 0x0881, 0x31A4, 0x9C4B,
  0xC570, 0x7328, 0x18E2, 0x0881, 0x0881, 0x0881, 0x0881, 0x2985, 0xDEDB, 0xF7DE, 0xF7DE, 0xDEFA, 0xBDF6, 0xE75C, 0xBDF7, 0xD6FA, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xC637, 0xB595, 0x8C50, 0xCE79, 0xF7DE, 0xF7DE, 0xF7BE, 0xAD55, 0x10A2, 0x0881, 0x0881, 0x0881, 0x0881, 0x31A4, 0x9C4B,
  0xC570, 0x7328, 0x18E2, 0x0881, 0x0881, 0x0881, 0x0881, 0x10C2, 0x844F, 0xEF9D, 0xF7DE, 0xEF7D, 0xC638, 0xAD54, 0xC658, 0xEF7D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEFBD, 0xC617, 0xEFBD, 0xF7DE, 0xF7DE, 0xD6DA, 0x52CA, 0x0060, 0x0881, 0x0881, 0x0881, 0x0881, 0x31A4, 0x9C4B,
  0xC570, 0x7328, 0x18E2, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x31A6, 0xC658, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0x9CF3, 0x10C2, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x31A4, 0xA44B,
  0xC570, 0x7B49, 0x18E2, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x10C2, 0x6B4D, 0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE77C, 0xE75C, 0xEF7C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xE75C, 0xE73C, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xC658, 0x39E7, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x39A4, 0xA44B,
  0xC570, 0x7B69, 0x20E2, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x2124, 0x94D2, 0xEFBD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xCE99, 0xC637, 0xBDD6, 0xF7BD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE73C, 0xBDF7, 0xCE58, 0xE73C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF1B, 0x634C, 0x10A2, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x41C4, 0xA44B,
  0xC570, 0x8389, 0x2103, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x31C6, 0xAD95, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE77C, 0xCE79, 0xBDF7, 0xF7BD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xD6DA, 0xAD54, 0xD6DA, 0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF7D, 0x8450, 0x10C2, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x41E5, 0xA46C,
  0xC570, 0x8BCA, 0x2123, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x4208, 0xBE17, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7BE, 0xB595, 0xEF5C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF1B, 0xCE99, 
        0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDEFB, 0xB5B6, 0xBDD6, 0xCE78, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF7D, 0x9CD3, 0x18E3, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x4A25, 0xAC8C,
  0xC570, 0x9C2A, 0x2943, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x1082, 0x52AA, 0xCE79, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF5C, 0xAD75, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE73C, 0xC617, 0xB5B5, 
        0xD6BA, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE73C, 0xDF1B, 0xCE78, 0xBDF7, 0xF7FE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xAD55, 0x2945, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x5A86, 0xACAC,
  0xC570, 0xB4EC, 0x39A4, 0x0861, 0x0040, 0x0040, 0x0040, 0x0861, 0x0040, 0x0841, 0x0861, 0x0040, 0x0861, 0x4228, 0xB5B6, 0xEFBE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE73C, 0xD6DA, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xBDF7, 0xAD75, 0xC638, 
        0xC638, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xDF1B, 0xBE37, 0xC678, 0xDF1B, 0xF7DE, 0xF7DE, 0xF7FE, 0xE75C, 0x8450, 0x2124, 0x0040, 0x0040, 0x0861, 0x0040, 0x0841, 0x0861, 0x0040, 0x0040, 0x0861, 0x0861, 0x7328, 0xBD0D,
  0xC570, 0xBD0D, 0x4A26, 0x0881, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0060, 0x31A6, 0x9CD2, 0xE77C, 0xF7FE, 0xF7DE, 0xF7BE, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7FE, 0xBDF6, 0xBDF6, 0xDF1B, 
        0xB595, 0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xE77C, 0xEF7C, 0xF7DE, 0xF7DE, 0xFFFF, 0xD6BA, 0x6B8D, 0x1903, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x18E2, 0x83A9, 0xBD2D,
  0xBD70, 0xB4ED, 0x7B68, 0x18C1, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x2124, 0x6B8D, 0xC678, 0xEFBD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xD6DA, 0xBDF6, 0xBDF7, 
        0xC5F7, 0xEF9D, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xAD75, 0x4A89, 0x10C2, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0020, 0x39C4, 0x9C4B, 0xB50D,
  0xC590, 0xBD0D, 0xB4CC, 0x39C4, 0x0860, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0020, 0x10A2, 0x3A07, 0x8C71, 0xDF1B, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEFBD, 0xE73B, 0xDEFA, 
        0xE75C, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xC638, 0x6B6D, 0x2164, 0x0060, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0881, 0x7308, 0xB4ED, 0xBD2D,
  0xC570, 0xBCED, 0xBD0D, 0x8389, 0x18E2, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x18E2, 0x3A07, 0x8C51, 0xCE99, 0xEFBD, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF7D, 0xBDD7, 0x6B6D, 0x2985, 0x0881, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0020, 0x41C4, 0xA44B, 0xBD0D, 0xBD0D,
  0xC590, 0xBD0D, 0xBD0D, 0xB4ED, 0x62A6, 0x0881, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x10A2, 0x2124, 0x52CA, 0x9CF2, 0xD6DA, 0xF7BE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 
        0xF7DE, 0xF7DE, 0xF7DE, 0xF7DE, 0xEF9D, 0xC638, 0x842F, 0x4208, 0x18E3, 0x0861, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0020, 0x2122, 0x8BC9, 0xBD0D, 0xBD0D, 0xBD2D,
  0xC590, 0xBD0D, 0xBD0D, 0xBD0D, 0xACAC, 0x5246, 0x0861, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0861, 0x10A2, 0x18E3, 0x2985, 0x52AA, 0x738D, 0x8C30, 0x9491, 0x94B1, 
        0x9491, 0x7C0F, 0x6B4D, 0x4248, 0x2144, 0x10C2, 0x0881, 0x0040, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x18E2, 0x7B48, 0xB4ED, 0xBD0D, 0xBD0D, 0xBD2D,
  0xC590, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xACAC, 0x5A86, 0x1081, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0861, 0x0861, 0x1082, 0x10A2, 0x10A2, 
        0x10A2, 0x1081, 0x0861, 0x0841, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0840, 0x2122, 0x7B69, 0xB4ED, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD2D,
  0xC590, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xB4CC, 0x8388, 0x3163, 0x10A1, 0x0840, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 
        0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0861, 0x18C2, 0x4A05, 0x940A, 0xB4ED, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD2D,
  0xC590, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xACAC, 0x7348, 0x41E5, 0x2903, 0x18C1, 0x10A1, 0x1081, 0x1081, 0x1081, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 
        0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x1061, 0x1081, 0x1081, 0x1081, 0x10A1, 0x18C2, 0x3143, 0x5246, 0x8BC9, 0xB4ED, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD2D,
  0xC590, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xB4EC, 0x9C0A, 0x8389, 0x7328, 0x6AE7, 0x6AC7, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 
        0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x62A6, 0x6AC7, 0x6B07, 0x7B48, 0x8BA9, 0xA46B, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD0D, 0xBD2D
};

GUI_CONST_STORAGE GUI_BITMAP bmclock_pic = {
  60, /* XSize */
  60, /* YSize */
  120, /* BytesPerLine */
  16, /* BitsPerPixel */
  (unsigned char *)acclock_pic,  /* Pointer to picture data */
  NULL  /* Pointer to palette */
 ,GUI_DRAW_BMP565
};

/* *** End of file *** */
