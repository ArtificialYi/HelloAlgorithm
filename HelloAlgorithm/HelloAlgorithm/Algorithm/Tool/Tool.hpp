//
//  Tool.hpp
//  HelloAlgorithm
//
//  Created by 黄毅 on 2018/3/26.
//  Copyright © 2018年 hy. All rights reserved.
//

#ifndef Tool_hpp
#define Tool_hpp

#include <stdio.h>
#include <string>

class Tool {
public:
    // 判断数组中循环的数的个数
    static int repetitionNum(int *a, int n, int minNum);
    // 将十进制转化为二进制
    static std::string scaleConvert(std::string str, int preRadix, int ptrRadix);
};

#endif /* Tool_hpp */
