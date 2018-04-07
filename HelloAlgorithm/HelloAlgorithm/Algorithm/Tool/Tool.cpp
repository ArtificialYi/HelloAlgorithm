//
//  Tool.cpp
//  HelloAlgorithm
//
//  Created by 黄毅 on 2018/3/26.
//  Copyright © 2018年 hy. All rights reserved.
//

#include "Tool.hpp"

int Tool::repetitionNum(int *a, int n, int minNum) {
    int res = 0;
    int preTmp = minNum - 1;
    int validTmp = minNum - 1;
    for (int i = 0; i < n; ++i) {
        // 判断重复
        if (a[i] != validTmp && a[i] == preTmp) {
            ++res;
            validTmp = a[i];
        }
        preTmp = a[i];
    }
    return res;
}

std::string Tool::scaleConvert(std::string str, int preRadix, int ptrRadix) {
    static std::string staticStr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return staticStr;
}
