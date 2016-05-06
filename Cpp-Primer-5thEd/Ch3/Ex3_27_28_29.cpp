//
//  Ex3_27_28_29.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/27/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.27 (below) + Exercise 3.28 (below) + Exercise 3.29 (below)
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    return 0;
    // Output:
    // Program ended with exit code: 0
}
// Exercise 3.27
/* unsigned buf_size = 1024;
 * (a) int ia[buf_size];
 * Illegal because buf_size is not a constexpr.
 * (b) int ia[4 * 7 -14];
 * Legal. Expression inside brackets is a constant expression.
 * (c) int ia[txt_size()];
 * Legal if txt_size is constexpr function. Illegal otherwise.
 * (d) char st[11] = "fundamental";
 * Illegal. Need to account one element for null character!
 */

// Exercise 3.28
/* sa - empty strings
 * ia - 0
 * sa2 - empty strings
 * ia2 - undefined because inside function body
 */

// Exercise 3.29
/* A drawback of using array instead of vector is that the size of array must be
 * declared. If the number of elements is not known it is best to use vector
 * instead. Arrays cannot be defined by copying or assigning. The syntax for
 * defining pointers and references to arrays are a bit more complex and require
 * reading type modifiers from the inside out.
 */