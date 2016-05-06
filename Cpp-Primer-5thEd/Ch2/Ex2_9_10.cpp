//
//  Ex2_9_10.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/15/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.9 (below) + Exercise 2.10 (below)
// Exercise 2.10
#include <iostream>

std::string global_str;
int global_int;
int main() {
    int local_int;
    std::string local_str;
    return 0;
    // Output:
    // Program ended with exit code: 0
}

// Exercise 2.9
/* (a) std::cin >> int input_value;
 * ERROR: can't define variable as an operand. Fix:
 * int input_value;
 * std::cin >> input_value;
 * (b) int i = {3.14}
 * ERROR: need narrowing conversion. Fix:
 * double i = {3.14};
 * (c) double salary = wage = 9999.99;
 * ERROR: can't initialize variable to a value of undeclared variable. Fix:
 * double wage = 9999.99, salary = wage;
 * (d) int i = 3.14;
 * Okay, but i will have truncate value of 3.
 */

// Exercise 2.10
/* global_str - empty string
 * global_int - 0
 * local_int - uninitialized, undefined
 * local_str - uninitialized, default value by class empty string
 */