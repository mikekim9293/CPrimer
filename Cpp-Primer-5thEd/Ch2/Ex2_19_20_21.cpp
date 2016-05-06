//
//  Ex2_19_20_21.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/17/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.19 (below) + Exercise 2.20 (below) + Exercise 2.21 (below)
// Exercise 2.20
#include <iostream>

int main() {
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << *p1 << " " << i << std::endl;
    return 0;
    // Output:
    // 1764 1764
    // Program ended with exit code: 0
}

// Exercise 2.19
/* The key difference between a pointer and a reference is how they indirectly
 * access an object. A reference is simply another name for an already existing
 * object. Reference can't be changed after its definition. A reference must be
 * initialized at definition. A pointer holds the address of the object to which
 * it points to. It can point to many different object over its lifetime. A
 * pointer is an object in its own right, unlike a reference. A pointer does not
 * have to be initialized at definition.
 */

// Exercise 2.20
/* The pointer p1 assigns a new value to the object to which it points. The new
 * value is squared the original value (i.e. new value is 42*42).
 */

// Exercise 2.21
/* int i = 0;
 * (a) double* dp = &i;
 * Illegal. Types do not match.
 * (b) int *ip = i;
 * Illegal. Can't initialize pointer to variable even if value is 0.
 * (c) int *ip = &i;
 * Legal.
 */