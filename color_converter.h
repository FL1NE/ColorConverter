/*******************************************************************************
* Color Converter [Header] (color_converter.h)                        [_][O][X]*
********************************************************************************
* Version 0.0.1                                                                *
* Coded by Tomoki "FL1NE" SHISHIKURA (@FL1NE)                                  *
*                                                                              *
* Copyright (c) 2017 FRONTL1NE All rights reserved                             *
* https://fl1ne.rtx1911.net                                                    *
*******************************************************************************/


#ifndef __COLOR_CONVERTER_INCLUDED__
#define __COLOR_CONVERTER_INCLUDED__


#include "glm/glm.hpp"


#define COLOR_CONVERTER_VERSION "0.0.1"


namespace colorConverter{
    glm::vec4 rgbToVec4(int red, int green, int blue);
    glm::vec4 rgbToVec4(int red, int green, int blue, float alpha);

    glm::vec4 hexToVec4(int hexValue);
    glm::vec4 hexToVec4(const char* hexValue);

    glm::vec4 hexToVec4(int hexValue, float alpha);
    glm::vec4 hexToVec4(const char* hexValue, float alpha);
}


#endif

