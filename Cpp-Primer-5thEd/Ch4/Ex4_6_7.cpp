//
//  Ex4_6_7.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/1/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.6 + Exercise 4.7 (below)
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    cout << "Enter some numbers: " << endl;
    vector<int> ivec;
    int temp;
    while (cin >> temp)
        ivec.push_back(temp);
    
    // Determine if int value is even or odd
    for (auto i : ivec) {
        if (i % 2 == 0)
            cout << "Even ";
        else
            cout << "Odd ";
    }
    cout << endl;
    
    return 0;
    // Output:
    // 1 2 3 5 8 12 23
    // Odd Even Odd Odd Even Even Odd
    // Program ended with exit code: 0
}
// Exercise 4.7
/* Overflow is what happens when a value is computed that is outside the range
 * of values the type can reprsent. Here are three examples:
 * (1) short s_i = 32767; ++s_i;
 * (2) unsigned u_i = 0; --u_i;
 * (3) int i = 4294967296; ++i;
 */