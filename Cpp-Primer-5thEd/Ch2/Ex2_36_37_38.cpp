//
//  Ex2_36_37_38.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/19/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.36 (below) + Exercise 2.37 (below) + Exercise 2.38 (below)
// Exercise 2.38
#include <iostream>

int main() {
    int i = 3, &j = i;
    // auto and decltype same
    auto a = i;                 // a is int
    decltype(i) b = j;          // b is int
    // auto and decltype different
    auto c = j;                 // c is int
    decltype(j) d = i;          // d is int&
    return 0;
    // Output:
    // Program ended with exit code: 0
}

// Exercise 2.36
/* int a = 3, b = 4;
 * decltype(a) c = a;
 * decltype((b)) d = a;
 * ++c;
 * ++d;
 * c is int, d is int& referring to a.
 * c has a value of 4.
 * d has a value of 4, as well as a, because d is int&.
 * b has a value of 4.
 */

// Exercise 2.37
/* int a = 3, b = 4;
 * decltype(a) c = a;
 * decltype(a = b) d = a;
 * c is int, d is int& referring to a.
 * a, c, d have value of 3. b has value of 4.
 */

// Exercise 2.38
/* auto deduces type from initializer. decltype deduces type from variable or
 * expression. decltype handles top-level const and references subtly from the
 * way auto does. decltype depends on the form of its given expression.
 */