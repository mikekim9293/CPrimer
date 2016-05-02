//
//  Ex4_4_5.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/1/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.4 (below) + Exercise 4.5 (below)
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    int i = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    cout << "Result of i is: " << i << endl;
    return 0;
    // Output:
    // Result of i is: 91
    // Program ended with exit code: 0
}
// Exercise 4.4
/* 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
 * (12 / 3 * 4) + (5 * 15) + (24 % 4 / 2)
 * Result is 91.
 */

// Exercise 4.5
/* (a) -30 * 3 + 21 / 5
 * -86
 * (b) -30 + 3 * 21 / 5
 * -18
 * (b) 30 / 3 * 21 % 5
 * 0
 * (d) -30 / 3 * 21 % 4
 * -2
 */