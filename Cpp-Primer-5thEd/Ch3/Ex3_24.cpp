//
//  Ex3_24.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/27/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.24
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    // Last exercise of Exercise Section 3.3.3
    // First way
    /*
    vector<int> ivec, result;
    int temp = 0;
    while (cin >> temp)
        ivec.push_back(temp);
    for (auto i = ivec.cbegin() + 1; i != ivec.cend(); ++i)
        result.push_back(*(i-1) + *i);
    for (auto i : result)
        cout << i << " ";
    cout << endl;
    */
    // Output:
    // 1 2 3 4 5 6 7 8 9 10
    // 3 5 7 9 11 13 15 17 19
    // Program ended with exit code: 0
    
    // Second way
    vector<int> ivec, result;
    int temp;
    while (cin >> temp)
        ivec.push_back(temp);
    auto back = ivec.cend();
    for (auto i = ivec.cbegin(); i != back; ++i) {
        --back;
        result.push_back(*i + *back);
        if (back-i == 2)
            result.push_back(*(--back));
    }
    for (auto i : result)
        cout << i << " ";
    cout << endl;
    return 0;
    // Output:
    // 1 2 3 4 5 6 7
    // 8 8 8 4
    // Program ended with exit code: 0
}