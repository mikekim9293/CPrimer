//
//  Ex2_3_4.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/15/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.3 (below) + Exercise 2.4
// Exercise 2.4
#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    
    std::cout << i - u <<std::endl;
    std::cout << u - i <<std::endl;
    return 0;
    // Output:
    // 32
    // 4294967264
    // 32
    // -32
    // 0
    // 0
    // Program ended with exit code: 0
}

// Exercise 2.3
/* My prediction for the above program output is:
 * 32
 * 2^32-32
 * 32
 * -32
 * 0
 * 0
 */