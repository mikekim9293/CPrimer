//
//  Ex1_19.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/13/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.19
#include <iostream>

int main() {
    int v1 = 0, v2 = 0;
    std::cout << "Input 2 numbers in increasing order: " << std::endl;
    std::cin >> v1 >> v2;
    if (v1 <= v2) {
        while (v1 <= v2) {
            std::cout << v1 << std::endl;
            ++v1;
        }
    }
    else
        std::cout << "Input is not in increasing order!" << std::endl;
    return 0;
    // Correct input given
    // Output:
    // Input 2 numbers in increasing order:
    // 1 10
    // 1
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // 10
    // Program ended with exit code: 0
    
    // Incorrect input given
    // Output:
    // Input 2 numbers in increasing order:
    // 10 1
    // Input is not in increasing order!
    // Program ended with exit code: 0
}