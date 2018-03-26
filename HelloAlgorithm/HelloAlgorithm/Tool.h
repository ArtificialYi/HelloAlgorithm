//
//  HelloAlgorithm.h
//  HelloAlgorithm
//
//  Created by 黄毅 on 2018/3/26.
//  Copyright © 2018年 hy. All rights reserved.
//

#ifndef HelloAlgorithm_h
#define HelloAlgorithm_h

Class Tool {
public:
    static int repetitionNum(int *a, int n, int minNum); {
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
}
int repetitionNum(int *a, int n, int minNum) {
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


#endif /* HelloAlgorithm_h */
