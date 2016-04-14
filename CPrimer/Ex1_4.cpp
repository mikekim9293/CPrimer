//
//  Ex1_4.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.4
#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2 << " is " << v1*v2 << std::endl;
    return 0;
    // Output:
    //Enter two numbers:
    //5 7
    //The product of 5 and 7 is 35
    //Program ended with exit code: 0
}