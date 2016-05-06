//
//  Ex2_27_28_29.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/18/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.27 (below) + Exercise 2.28 (below) + Exercise 2.29 (below)
#include <iostream>

int main() {
    return 0;
    // Output:
    // Program ended with exit code: 0
}

// Exercise 2.27
/* (a) int i = -1, &r = 0;
 * Illegal. r must refer to object.
 * (b) int *const p2 = &i2;
 * Legal.
 * (c) const int i = -1, &r = 0;
 * Legal.
 * (d) const int *const p3 = &i2;
 * Legal.
 * (e) const int *p1 = &i2;
 * Legal.
 * (f) const int &const r2;
 * Illegal. Uninitialized.
 * (g) const int i2 = i, &r = i;
 * Legal.
 */

// Exercise 2.28
/* (a) int i, *const cp;
 * Illegal. cp must be initialized.
 * (b) int *pl, *const p2;
 * Illegal. p2 must be initialized.
 * (c) const int ic, &r = ic;
 * Illegal. ic is not yet initialized.
 * (d) const int *const p3;
 * Illegal. p3 must be initialized.
 * (e) const int *p;
 * Legal.
 */

// Exercise 2.29
/* (a) i = ic;
 * Legal.
 * (b) p1 = p3;
 * Illegal. p3 is const pointer to int.
 * (c) p1 = &ic;
 * Illegal. ic is const int.
 * (d) p3 = &ic;
 * Illegal. p3 is const pointer.
 * (e) p2 = p1;
 * Illegal. p2 is const pointer.
 * (d) ic = *p3;
 * Illegal. ic is const int.
 */