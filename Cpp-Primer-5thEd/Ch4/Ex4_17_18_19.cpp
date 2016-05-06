//
//  Ex4_17_18_19.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/3/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.17 (below) + Exercise 4.18 (below) + Exercise 4.19 (below)
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
// Exercise 4.17
/* The difference between prefix and postfix increment is what they return as a
 * result of execution. In the prefix increment, the incremented object is 
 * returned as a result. In the postfix increment, the original value of the
 * object is stored and returned as a result and the object is incremented.
 */

// Exercise 4.18
/* If the while loop on page 148 in the text used the prefix increment operator,
 * the first element of the vector will be skipped and will go one element too
 * far in the last iteration! The last iteration, dereferencing of pbeg will be
 * undefined behavior.
 */

// Exercise 4.19
/* ptr points to int, vec is vector<int>, ival is int
 * (a) ptr != 0 && *ptr++
 * If ptr is not null pointer, check pointer value.
 * (b) ival++ && ival
 * Copy current value of ival and increment it. If current value is nonzero,
 * compare agains incremented ival and check if its nonzero.
 * (c) vec[ival++] <= vec[ival]
 * This is uncorrect because it is not specified which operand is evaluated
 * first for the <= relational operator. Depending on which operand is
 * evaluated first, the behavior may be different. This is correct and what the
 * programmer probably intended:
 * vec[ival] <= vec[ival + 1]
 */