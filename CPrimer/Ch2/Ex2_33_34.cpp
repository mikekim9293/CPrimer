//
//  Ex2_33_34.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/19/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.33 (below) + Exercise 2.34
// Exercise 2.34
#include <iostream>

int main() {
    // From text
    int i = 0, &r = i;
    auto a = r;                 // a is int
    const int ci = i, &cr = ci;
    auto b = ci;                // b is int
    auto c = cr;                // c is int
    auto d = &i;                // d is int*
    auto e = &ci;               // e is const int*
    auto &g = ci;               // g is const int&
    
    std::cout << "Before exercise:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "g = " << g << std::endl;
    
    // Exercise
    a = 42; b = 42; c = 42;
    //d = 42; e = 42; g = 42;   // As expected d, e, g cause errors
    std::cout << "After exercise:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    return 0;
    // Output:
    // Before exercise:
    // a = 0
    // b = 0
    // c = 0
    // d = 0x7fff5fbff768
    // e = 0x7fff5fbff758
    // g = 0
    // After exercise:
    // a = 42
    // b = 42
    // c = 42
    // Program ended with exit code: 0
}

// Exercise 2.33
/* a = 42; b = 42; c = 42;
 * d = 42; e = 42; g = 42;
 * Errors for d, e, g.
 * d is int*. Should be *d = 42;
 * e is const int*.
 * g is const int&.
 */
