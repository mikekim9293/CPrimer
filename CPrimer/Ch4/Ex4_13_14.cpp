//
//  Ex4_13_14.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/3/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.13 (below) + Exercise 4.12 (below)
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    return 0;
    // Output:
    // Program ended with exit code: 0
}
// Exercise 4.13
/* int i; double d;
 * (a) d = i = 3.5;
 * d is 3.0 and i is 3.
 * (b) i = d = 3.5;
 * d is 3.5 and i is 3.
 */

// Exercise 4.14
/* if (42 = i)
 * if (i = 42)
 * In first assignment, it is illegal. Left operand of assignment must be lvalue
 * but a literal is rvalue.
 * In second assignment, 42 is assigned to i. The result of that assignment is
 * used in the condition. This will evaluate to true because value of i is 
 * nonzero.
 */