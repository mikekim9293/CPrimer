//
//  Ex2_18.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/17/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.18
#include <iostream>

int main() {
    int i = 3;
    int *ri = nullptr;
    // Change value of pointer
    ri = &i;
    // Change value to which pointer points
    *ri = 1992;
    std::cout << i << " " << *ri << std::endl;
    return 0;
    // Output:
    // 1992 1992
    // Program ended with exit code: 0
}
