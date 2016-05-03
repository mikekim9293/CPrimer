//
//  Ex4_11_12.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/2/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.11 + Exercise 4.12 (below)
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    // Exercise 4.11
    int a = 4, b = 3, c = 2, d = 1;
    if (a > b && b > c && c > d)
        cout << "Variables a, b, c, d are in descending order." << endl;
    
    return 0;
    // Output:
    // Variables a, b, c, d are in descending order.
    // Program ended with exit code: 0
}
// Exercise 4.12
/* i != j < k
 * gets grouped as: i != (j < k)
 * Value of i is compared to boolean truth value of comparison (j < k). If j is
 * less than k, the expression is true if i is zero. If j is less than k, the
 * expression is false if i is any other value than zero. If j is not less than
 * k, expression is true if i is any other value than zero. If j is not less
 * than k, epxression is false if i is equal to zero.
 */