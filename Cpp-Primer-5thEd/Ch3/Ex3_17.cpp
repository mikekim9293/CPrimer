//
//  Ex3_17.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/25/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.17
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    string temp;
    vector<string> strvec;
    // Read in words
    while (cin >> temp)
        strvec.push_back(temp);
    // Make everything uppercase
    for (auto &s : strvec)
        for (auto &c : s)
            c = ::toupper(c);
    // Print 8 words to a line
    int ctr = 0;
    for (auto s : strvec) {
        if (ctr == 8) {
            ctr = 0;
            cout << endl;
        }
        ++ctr;
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
    // Output:
    // This is just a list of words that are pretty long, ruh roh.
    // THIS IS JUST A LIST OF WORDS THAT
    // ARE PRETTY LONG, RUH ROH.
    // Program ended with exit code: 0
}