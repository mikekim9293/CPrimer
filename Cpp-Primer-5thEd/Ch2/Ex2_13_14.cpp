//
//  Ex2_13_14.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/17/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.13 (below) + Exercise 2.14 (below)
// Exercise 2.14
#include <iostream>

int main() {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
    return 0;
    // Output:
    // 100 45
    // Program ended with exit code: 0
}

// Exercise 2.13
/* Value of j is 100 because the local definition is used rather than global.
 */

// Exercise 2.14
/* Legal.
 * Output will be:
 * 100 45
 */