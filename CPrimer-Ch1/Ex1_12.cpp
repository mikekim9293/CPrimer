//
//  Ex1_12.cpp
//  CPrimer-Ch1
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.12
#include <iostream>

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << "Sum is " << sum << std::endl;
    return 0;
    // Output:
    // Sum is 0
    // Program ended with exit code: 0
}

// Answer:
// Computes inclusive sum of -100 to 100. Final value of sum is 0.