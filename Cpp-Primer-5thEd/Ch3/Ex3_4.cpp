//
//  Ex3_4.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.4
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    /*
    // If strings are equal
    if (s1 == s2)
        cout << "Strings are equal." << endl;
    else {
        if (s1>s2)
            cout << "\"" << s1 << "\"" << " is larger." << endl;
        else
            cout << "\"" << s2 << "\"" << " is larger." << endl;
    }
    */
    // If strings are equal length
    auto length1 = s1.size();
    auto length2 = s2.size();
    if (length1 == length2)
        cout << "Strings are same length." << endl;
    else {
        if (length1 > length2)
            cout << "\"" << s1 << "\"" << " is longer." << endl;
        else
            cout << "\"" << s2 << "\"" << " is longer." << endl;
    }
    return 0;
    // Output:
    // abacus
    // cat
    // "abacus" is longer.
    // Program ended with exit code: 0
}