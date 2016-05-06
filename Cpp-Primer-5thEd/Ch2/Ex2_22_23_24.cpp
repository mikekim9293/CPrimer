//
//  Ex2_22_23_24.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/17/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.22 (below) + Exercise 2.23 (below) + Exercise 2.24 (below)
#include <iostream>

int main() {
    return 0;
    // Output:
    // Program ended with exit code: 0
}

// Exercise 2.22
/* Assuming p is a pointer to int, explain the following:
 * if (p) // ...
 * if (*p) // ...
 * The first expression tests whether or not p is a valid pointer. The second
 * expression tests the value of the object to which p is pointing to. If the 
 * value is 0 the condition is false, otherwise it is true.
 */

// Exercise 2.23
/* Given a pointer p, it is not possible to determine if p points to a valid
 * object because more information is needed.
 */

// Exercise 2.24
/* int i = 42; void *p = *i; long *lp = &i;
 * The initialization of lp is illegal because there is a type mismatch. The
 * initialization of p is legal because a void* pointer can point to any type
 * of object.
 */