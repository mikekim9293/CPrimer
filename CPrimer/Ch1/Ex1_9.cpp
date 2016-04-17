//
//  Ex1_9.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.9
#include <iostream>

int main() {
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of numbers 50 to 100 is " << sum << std::endl;
    return 0;
    // Output:
    // Sum of numbers 50 to 100 is 3825
    // Program ended with exit code: 0
}