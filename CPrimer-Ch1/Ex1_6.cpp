//
//  Ex1_6.cpp
//  CPrimer-Ch1
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.6
#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    return 0;
    // Output:
    //Enter two numbers:
    //5 7
    //The sum of 5 and 7 is 12
    //Program ended with exit code: 0
}

// Answer:
// Illegal because there is no left-hand operand (ostream object cout). Fix is above.