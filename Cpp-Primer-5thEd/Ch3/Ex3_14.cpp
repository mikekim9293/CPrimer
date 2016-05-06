//
//  Ex3_14.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/25/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.14
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    int temp;
    vector<int> ivec;
    while (cin >> temp)
        ivec.push_back(temp);
    return 0;
    // Output:
    // 1 2 3 4 5 6 7 8 9 10
    // Program ended with exit code: 0
}