//
//  Ex2_15_16_17.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/17/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.15 (below) + Exercise 2.16 (below) + Exercise 2.17 (below)
// Exercise 2.17
#include <iostream>

int main() {
    int i, &ri = i;
    i =  5; ri = 10;
    std::cout << i << " " << ri << std::endl;
    return 0;
    // Output:
    // 10 10
    // Program ended with exit code: 0
}

// Exercise 2.15
/* (a) int ival = 1.01;
 * Valid.
 * (b) int &rval1 = 1.01;
 * Error: Need to be initialized to an object not a literal.
 * (c) int &rval2 = ival;
 * Valid.
 * (d) int &rval3;
 * Error: Need an initializer.
 */

// Exercise 2.16
/* int i = 0, &r1 = i; double d = 0, &r2 = d;
 * (a) r2 = 3.14159;
 * Valid. New value assigned to object to which r2 refers to.
 * (b) r2 = r1;
 * Valid. New value assigned to object to which r2 refers to.
 * (c) i = r2;
 * Valid. New value assigned to i from object to which r2 refers to. Value will
 * be truncated.
 * (d) r1 = d;
 * Valid. New value assigned to object to which r1 refers to. Value will be
 * truncated.
 */

// Exercise 2.17
/* The code will output:
 * 10 10
 */