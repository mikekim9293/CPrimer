//
//  Ex3_9_10_11.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.9 (below) + Exercise 3.10 + Exercise 3.11 (below)
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main() {
    // Exercise 3.10
    string orig, stripped;
    getline(cin,orig);
    for (auto &c : orig)
        if (!ispunct(c))
            stripped += c;
    cout << stripped << endl;
    return 0;
    // Output:
    // Wow! OMG? BBQ! This is awesome.
    // Wow OMG BBQ This is awesome
    // Program ended with exit code: 0
}

// Exercise 3.9
/* string s;
 * cout << s[0] << endl;
 * The program attempts the print the first character in an empty string. This 
 * is not valid. The result of trying to subscript an empty string is undefined.
 */

// Exercise 3.11
/* const string s = "Keep out!";
 * for (auto &c : s) { ... }
 * The for range is legal depending on what is inside the body of the for loop.
 * The type of c is const char&. If the loop body attempts to assign to c, this
 * is illegal. Otherwise, it is legal.
 */