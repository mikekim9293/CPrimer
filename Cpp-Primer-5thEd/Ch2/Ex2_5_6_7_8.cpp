//
//  Ex2_5_6_7_8.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/15/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.5 (below) + 2.6 (below) + 2.7 (below) + 2.8
// Exercise 2.8
#include <iostream>

int main() {
    std::cout << "2M\n" << std::endl;
    std::cout << "2\tM\n" << std::endl;
    return 0;
    // Output:
    // 2M
    //
    // 2	M
    //
    // Program ended with exit code: 0
}

// Exercise 2.5
/* (a) 'a', L'a', "a", L"a"
 * character literal, wide character literal, string literal, string wide character literal
 * (b) 10, 10u, 10L, 10uL, 012, 0xC
 * decimal, unsigned decimal, long decimal, unsigned long decimal, octal, hexadecimal
 * (c) 3.14, 3.14f, 3.14L
 * double, float, long double
 * (d) 10, 10u, 10., 10e-2
 * decimal, unsigned decimal, double, double
 */

// Exercise 2.6
/* int month = 9, day = 7;
 * int month = 09, day = 07;
 * First expression: month and day are both decimals
 * Second expression: month is invalid because 9 is not octal, day is octal
 */

// Exercise 2.7
/* (a) "Who goes with F\145rgus?\012"
 * string - "Who goes with Fergus?" and newline
 * (b) 3.14e1L
 * long double - 31.4
 * (c) 1024f
 * ERROR - float suffix is only valid for floating-point literals
 * (d) 3.14L
 * long double - 3.14
 */