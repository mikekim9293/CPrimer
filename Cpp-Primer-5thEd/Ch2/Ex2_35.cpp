//
//  Ex2_35.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/19/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.35 (below)
#include <iostream>

int main() {
    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;
    return 0;
    // Output:
    // Program ended with exit code: 0
}

// Exercise 2.35
/* const int i = 42;
 * auto j = i;                  // j is int
 * const auto &k = i;           // k is const int&
 * auto *p = &i;                // p is const int*
 * const auto j2 = i, &k2 = i;  // j2 is const int, k2 is const int&
 */
