//
//  Ex3_30_31.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/27/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.30 (below) + Exercise 3.31
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    int iarr[10];
    for (size_t i = 0; i != 10; ++i)
        iarr[i] = i;
    for (auto i : iarr)
        cout << i << " ";
    cout << endl;
    
    return 0;
    // Output:
    // 0 1 2 3 4 5 6 7 8 9 
    // Program ended with exit code: 0
}
// Exercise 3.30
/* Two indexing errors. First, ix subscript variable is initialized to 1 rather
 * than 0. Second, condition of for is testing against <= array_size which has a
 * value of 10. Rather, it should be testing against != array_size.
 */