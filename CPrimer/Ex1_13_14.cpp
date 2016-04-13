//
//  Ex1_13_14.cpp
//  CPrimer-Ch1
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.13 + 1.14 (below)
// Exercise 1.13
#include <iostream>

int main() {
    // Exercise 1.9 with for Statement
    int sum = 0;
    for (int val = 50; val <= 100; ++val)
        sum += val;
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    // Exercise 1.10 with for Statement
    for (int val = 10; val >= 0; --val)
        std::cout << val << std::endl;
    return 0;
    // Output:
    // Sum of 50 to 100 inclusive is 3825
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

// Exercise 1.14
// Advantage would be for how abbreviated the code is
// Disadvantage would be that the variables initialized in the for header does not exist after execution