//
//  Ex2_30_31.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/19/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.30 (below) + Exercise 2.31 (below)
#include <iostream>

int main() {
    return 0;
    // Output:
    // Program ended with exit code: 0
}

// Exercise 2.30
/* const int v2 = 0; int v1 = v2;
 * int *p1 = &v1, &r1 = v1;
 * const int *p2 = &v2, *const p3 = &i, &r2 = v2;
 *
 * v2 - top-level, v1 - no const level
 * p1 - no const level, r1 - low-level const
 * p2 - low-level, p3 - top-level and low-level, low-level
 */

// Exercise 2.31
/* r1 = v2; Legal. Top-level const of v2 ignored.
 * p1 = p2; Illegal. p2 low-level const can't be ignored.
 * p2 = p1; Legal. Can convert int* to const int*.
 * p1 = p3; Illegal. p3 low-level const can't be ignored.
 * p2 = p3; Legal. Low-level consts match.
 */