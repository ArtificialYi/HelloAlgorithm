//
//  main.cpp
//  HelloAlgorithm
//
//  Created by 黄毅 on 2018/3/26.
//  Copyright © 2018年 hy. All rights reserved.
//

#include <iostream>
#include "hq02.hpp"
#include "ThreeNumSort.hpp"

int main(int argc, const char * argv[]) {
    ThreeNumSort * threeNumSort = new ThreeNumSort();
    int res = threeNumSort->main();
    return res;
}
