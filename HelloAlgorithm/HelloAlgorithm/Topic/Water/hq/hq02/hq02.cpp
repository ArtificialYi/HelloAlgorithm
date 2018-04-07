//
//  hq02.cpp
//  HelloAlgorithm
//
//  Created by 黄毅 on 2018/3/26.
//  Copyright © 2018年 hy. All rights reserved.
//

#include "hq02.hpp"

const int N = 1e6 + 7;
const int K = 100;

int a[N];
int aHelp[K];

int Hq02::main() {
    int n,k;
    std::cin >> n >> k;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < k; ++i) {
        aHelp[i] = -2;
    }
    
    std::sort(a, a + n);
    
    int res = 0;
    int preTmp = -1;
    if (k != 0) {
        for (int i = 0; i < n; ++i) {
            // 判断是否重复
            if (a[i] == preTmp) {
                continue;
            }
            
            // 取模、索引
            int mod = a[i] % k;
            int index = (a[i] - mod) / k;
            // 比对相邻
            if (aHelp[mod] == index - 1) {
                ++res;
            }
            aHelp[mod] = index;
        }
    } else {
        res = Tool::repetitionNum(a, n, 0); // 如果stl里面有更好用的，就不用替换掉
    }
    
    std::cout << res << std::endl;
    return 0;
}
