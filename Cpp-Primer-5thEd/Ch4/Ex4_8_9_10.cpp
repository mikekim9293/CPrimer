//
//  Ex4_8_9_10.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/2/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.8 (below) + Exercise 4.9 (below) + Exercise 4.10
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    int hold;
    vector<int> stuff;
    while(cin >> hold && hold != 42)
        stuff.push_back(hold);
    for (auto &i : stuff)
        cout << i << " ";
    cout << endl;
    
    return 0;
    // Output:
    // 32 67 73 55 100 42 38 99 5
    // 32 67 73 55 100
    // Program ended with exit code: 0
}
// Exercise 4.8
/* AND - right operand evaluated only if left operand is true.
 * OR - right operand evaluated only if left operand is false.
 * Equality - undefined. Both are always evaluated, but order is undefined.
 */

// Exercise 4.9
/* Condition tests that cp and *cp are both not empty. Condition evaluates to 
 * true. cp is pointer to const char* and not a null pointer - true. *cp is a 
 * const char 'H' and is a nonzero value - true. Both operands are true thus the
 * condition evaluates to true.
 */