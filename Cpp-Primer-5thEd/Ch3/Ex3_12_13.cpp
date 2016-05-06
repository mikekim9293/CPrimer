//
//  Ex3_12_13.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/25/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.12 (below) and Exercise 3.13(below)
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
// Exercise 3.12
/* (a) vector<vector<int>> ivec;
 * ivec is a vector whose elements are vectors of int.
 * (b) vector<string> svec = ivec;
 * Error. Type of elements do not match.
 * (c) vector<string svec(10,"null");
 * svec has 10 string elements all with value "null".
 */

// Exercise 3.13
/* (a) vector<int> v1;
 * No elements. No values.
 * (b) vector<int> v2(10);
 * 10 elements. All with value of 0.
 * (c) vector<int> v3(10,42);
 * 10 elements. All with value of 42.
 * (d) vector<int> v4{10};
 * 1 element. Value 10.
 * (e) vector<int> v5{10,42};
 * 2 elements. Value 10 and 42.
 * (f) vector<string> v6{10};
 * 10 elements. Value of empty strings.
 * (g) vector<string> v7{10, "hi"};
 * 10 elements. Value of "hi".
 */