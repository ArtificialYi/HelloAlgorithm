//
//  main.cpp
//  HelloAlgorithm
//
//  Created by 黄毅 on 2018/3/26.
//  Copyright © 2018年 hy. All rights reserved.
//

#include <iostream>
#include "Algorithm/Tool/Tool.hpp"
#include "BinaryConvert.hpp"

#define N_MAX 255
#define MAX 256
#define BIT_MAX 8

int main() {
    BinaryConvert * tmpObj = new BinaryConvert();
    return tmpObj->main();
}
