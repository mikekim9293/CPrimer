//
//  Ex3_32_33.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/27/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.32 + Exercise 3.33 (below)
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    vector<int> vint(10);
    for (auto i = 0; i != 10; ++i)
        vint[i] = i;
    for (auto i : vint)
        cout << i << " ";
    cout << endl;
    
    return 0;
    // Output:
    // 0 1 2 3 4 5 6 7 8 9
    // Program ended with exit code: 0
}
// Exercise 3.33
/* If the scores array was not initialized to 0 we get undefined behavior in the
 * for look when we try to increment the value of an element in the loop.
 */