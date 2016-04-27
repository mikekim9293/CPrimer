//
//  Ex3_23.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/26/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.23
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    vector<int> vecint(10);
    // Populate vector with initial values
    for (int i = 0; i != vecint.size(); ++i)
        vecint[i] = i + 1;
    // Double value
    for (auto i = vecint.begin(); i != vecint.end(); ++i)
        *i *= 2;
    // Print new values
    for (auto i : vecint)
        cout << i << " ";
    cout << endl;
    
    return 0;
    // Output:
    // 2 4 6 8 10 12 14 16 18 20
    // Program ended with exit code: 0
}