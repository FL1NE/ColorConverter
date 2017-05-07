/*******************************************************************************
* Color Converter [Source] (color_converter.cpp)                      [_][O][X]*
********************************************************************************
* Version 0.0.1                                                                *
* Coded by Tomoki "FL1NE" SHISHIKURA (@FL1NE)                                  *
*                                                                              *
* Copyright (c) 2017 FRONTL1NE All rights reserved                             *
* https://fl1ne.rtx1911.net                                                    *
*******************************************************************************/

#include <stdio.h>
#include <string.h>

#include "glm/glm.hpp"

#include "text_support.h"
#include "color_converter.h"


glm::vec4 colorConverter::rgbToVec4(int red, int green, int blue){
    float r, g, b, a;
    r = red / 255.0;
    g = green / 255.0;
    b = blue / 255.0;
    a = 1.0;
    return glm::vec4(r, g, b, a);
}


glm::vec4 colorConverter::rgbToVec4(int red, int green, int blue, float alpha){
    float r, g, b, a;
    r = red / 255.0;
    g = green / 255.0;
    b = blue / 255.0;
    a = alpha;
    return glm::vec4(r, g, b, a);
}


glm::vec4 colorConverter::hexToVec4(int hexValue){
    float r, g, b, a;
    r = ((hexValue >> 16) & 0xFF) / 255.0;
    g = ((hexValue >> 8) & 0xFF) / 255.0;
    b = ((hexValue) & 0xFF) / 255.0;
    a = 1.0;
    return glm::vec4(r, g, b, a);
}


glm::vec4 colorConverter::hexToVec4(const char* hexValue){
    int red, green, blue;
    if(strlen(hexValue) > 7){
        textSupport::errorMessage("colorConvert::hexToVec4(const char* hexValue) convert failed. (Invaild color code)");
        return glm::vec4(0.0, 0.0, 0.0, 0.0);
    }else if(strlen(hexValue) == 7){
        sscanf(hexValue, "#%02x%02x%02x", &red, &green, &blue);
        if(red > 255 || green > 255 || blue > 255){
            textSupport::errorMessage("colorConvert::hexToVec4(const char* hexValue) convert failed. (Invaild color code)");
            return glm::vec4(0.0, 0.0, 0.0, 0.0);
        }
    }else{
        sscanf(hexValue, "%02x%02x%02x", &red, &green, &blue);
    }
    float r, g, b, a;
    r = red / 255.0;
    g = green / 255.0;
    b = blue / 255.0;
    a = 1.0;
    return glm::vec4(r, g, b, a);
}


glm::vec4 colorConverter::hexToVec4(int hexValue, float alpha){
    float r, g, b, a;
    r = ((hexValue >> 16) & 0xFF) / 255.0;
    g = ((hexValue >> 8) & 0xFF) / 255.0;
    b = ((hexValue) & 0xFF) / 255.0;
    a = alpha;
    return glm::vec4(r, g, b, a);
}


glm::vec4 colorConverter::hexToVec4(const char* hexValue, float alpha){
    int red, green, blue;
    if(strlen(hexValue) > 7){
        textSupport::errorMessage("colorConvert::hexToVec4(const char* hexValue) convert failed. (Invaild color code)");
        return glm::vec4(0.0, 0.0, 0.0, 0.0);
    }else if(strlen(hexValue) == 7){
        sscanf(hexValue, "#%02x%02x%02x", &red, &green, &blue);
        if(red > 255 || green > 255 || blue > 255){
            textSupport::errorMessage("colorConvert::hexToVec4(const char* hexValue) convert failed. (Invaild color code)");
            return glm::vec4(0.0, 0.0, 0.0, 0.0);
        }
    }else{
        sscanf(hexValue, "%02x%02x%02x", &red, &green, &blue);
    }
    float r, g, b, a;
    r = red / 255.0;
    g = green / 255.0;
    b = blue / 255.0;
    a = alpha;
    return glm::vec4(r, g, b, a);
}

