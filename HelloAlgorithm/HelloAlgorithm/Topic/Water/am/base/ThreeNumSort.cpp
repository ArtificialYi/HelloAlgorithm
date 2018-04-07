//
//  ThreeNumSort.cpp
//  HelloAlgorithm
//
//  Created by 黄毅 on 2018/4/7.
//  Copyright © 2018年 hy. All rights reserved.
//

#include "ThreeNumSort.hpp"

#define MAX 3

int ThreeNumSort::main() {
    int a[MAX];
    for (int i = 0; i < MAX; ++i) {
        std::cin >> a[i];
    }
    
    // 阿敏-插入排序
    for (int i = 1; i < MAX; ++i) {
        int tmp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > tmp) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = tmp;
    }
    
    for (int i = 0; i < MAX; ++i) {
        std::cout << a[i];
        if (i < MAX - 1) {
            std::cout << " ";
        } else {
            std::cout << std::endl;
        }
    }
    return 0;
}
