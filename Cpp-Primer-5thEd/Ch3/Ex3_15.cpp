//
//  Ex3_15.cpp
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
    string temp;
    vector<string> strvec;
    while (cin >> temp)
        strvec.push_back(temp);
    return 0;
    // Output:
    // This is just a list of words.
    // Program ended with exit code: 0
}