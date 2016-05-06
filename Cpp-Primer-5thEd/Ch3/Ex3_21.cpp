//
//  Ex3_21.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/26/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.21
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    // From first exercise of Exercises Section 3.3.3
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    // Put them in fewer vectors
    vector<vector<int>> intV{v1,v2,v3,v4,v5};
    vector<vector<string>> strV{v6,v7};
    // Print size and contents of vector<int>
    for (auto it = intV.cbegin(); it != intV.cend(); ++it) {
        cout << it->size() << "\n\t";
        for (auto it2 = it->cbegin(); it2 != it->cend(); ++it2)
            cout << *it2 << " ";
        cout << endl;
    }
    
    // Print size and contents of vector<string>
    for (auto it = strV.cbegin(); it != strV.cend(); ++it) {
        cout << it->size() << "\n\t";
        for (auto it2 = it->cbegin(); it2 != it->cend(); ++it2)
            cout << *it2 << " ";
        cout << endl;
    }
    return 0;
    // Output:
    // 0
    //
    // 10
    //  0 0 0 0 0 0 0 0 0 0
    // 10
    //  42 42 42 42 42 42 42 42 42 42
    // 1
    //  10
    // 2
    //  10 42
    // 10
    //
    // 10
    //  hi hi hi hi hi hi hi hi hi hi
    // Program ended with exit code: 0
}