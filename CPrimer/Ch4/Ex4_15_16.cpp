//
//  Ex4_15_16.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/3/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.15 (below) + Exercise 4.16 (below)
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    double dval; int ival; int *pi;
    dval = ival = *pi = 0;
    
    return 0;
    // Output:
    // Program ended with exit code: 0
}
// Exercise 4.15
/* This assignment is illegal because pi which is a pointer to int can't be
 * converted to an int (type of ival).
 * This correction will allow assignment:
 * dval = ival = *pi = 0;
 * OR
 * dval = ival = 0; pi = 0;
 */

// Exercise 4.16
/* (a) if (p = getPtr() != 0)
 * This assignment is legal because the relational operator is evaluated first.
 * The truth value result of that (getPtr() != 0) get assigned to p. The
 * programmer probably intended the following:
 * if ((p = getPtr()) != 0)
 * where the value returned by getPtr() is assigned to p and the result of that
 * assignment is compared to 0.
 * (b) if (i = 1024)
 * This assignment is legal because the condition tests the assignment of 1024
 * to i. The result of that assignment is tested. In this case it will be true
 * because 1024 is a nonzero value. The programmer probably intended the
 * following:
 * if (i == 1024)
 * where the value of i is compared to 1024.
 */