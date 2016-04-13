//
//  Ex1_16.cpp
//  CPrimer-Ch1
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.16
#include <iostream>

int main() {
    int sum = 0, val = 0;
    std::cout << "Enter values to sum: " << std::endl;
    while (std::cin >> val)
        sum += val;
    std::cout << "The sum is " << sum << std::endl;
    return 0;
    // Output:
    // Enter values to sum:
    // 1 2 3 4 5 6 7 8 9 10
    // The sum is 55
    // Program ended with exit code: 0
}