//
//  Ex3_44.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/1/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.44
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    
    using rngfor = int[4];
    using arrsize = size_t;
    
    // Version 1 - range for
    for (rngfor &i : ia) {
        for (int &j : i)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;
    
    // Version 2 - for loop with subscripts
    for (arrsize i = 0; i != 3; ++i) {
        for (arrsize j = 0; j != 4; ++j)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    
    // Version 3 - for loop with pointers
    for (rngfor *i = ia; i != ia + 3; ++i) {
        for (int *j = *i; j != *i + 4; ++j)
            cout << *j << " ";
        cout << endl;
    }
    return 0;
    // Output:
    // 0 1 2 3
    // 4 5 6 7
    // 8 9 10 11
    //
    // 0 1 2 3
    // 4 5 6 7
    // 8 9 10 11
    //
    // 0 1 2 3
    // 4 5 6 7
    // 8 9 10 11
    // Program ended with exit code: 0
}