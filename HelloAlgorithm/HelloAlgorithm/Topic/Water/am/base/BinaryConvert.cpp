//
//  BinaryConvert.cpp
//  HelloAlgorithm
//
//  Created by 黄毅 on 2018/4/7.
//  Copyright © 2018年 hy. All rights reserved.
//

#include "BinaryConvert.hpp"
#include <iostream>
#include <bitset>
#include "Tool.hpp"

#define MAX 255
#define N_MAX 256
#define BIT_MAX 8

int BinaryConvert::main() {
    int n;
    std::bitset<MAX> aHelp;
    int a[N_MAX];
    std::string sumBit;
    
    // 预处理
    for (int i = 1; i < MAX; ++i) {
        std::bitset<BIT_MAX> tmpBit = i;
        if (!(tmpBit.count() & 0x1)) {
            aHelp.set(i);
        }
    }
    
    while (std::cin >> n) {
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (aHelp[a[i]]) {
                sum += a[i];
            }
        }
        // 输出结果
        std::string resStr = Tool::int2binary(sum);
        std::cout << resStr << std::endl;
    }
    
    return 0;
}
