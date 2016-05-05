//
//  Ex4_23_24.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/4/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.23 (below) + Exercise 4.24 (below)
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
// Exercise 4.23
/* The following expression fails due to operator precedence because the +
 * operator has the highest precedence. The conditional subxpression should be
 * parenthesized. The following correction will perform as expected:
 * string p1 = s + ((s[s.size() - 1] == 's') ? "" : "s");
 */

// Exercise 4.24
/* If the operator were left associative the nested conditionals will group
 * left to right, rather than right to left if it were right associative. This
 * would make the following expression:
 * finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
 * always result as "fail" because it will be evaluated as:
 * finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
 * The condition of the right conditional will be "high pass" if grade is
 * greater than 90. This will result in the "fail" expression to be evaluated.
 */