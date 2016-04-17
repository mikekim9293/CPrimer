//
//  Ex1_10.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.10
#include <iostream>

int main() {
    int val = 10;
    while (val >= 0) {
        std::cout << val << std::endl;
        --val;
    }
    return 0;
    // Output:
    // 10
    // 9
    // 8
    // 7
    // 6
    // 5
    // 4
    // 3
    // 2
    // 1
    // 0
    // Program ended with exit code: 0
}