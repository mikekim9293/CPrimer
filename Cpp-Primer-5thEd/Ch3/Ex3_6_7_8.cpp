//
//  Ex3_6_7_8.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.6 + Exercise 3.7 (below) + Exercise 3.8 (below)
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main() {
    // Exercise 3.6 - change all characters to X
    /*
    string s1;
    getline(cin,s1);
    for (auto &c : s1)
        c = 'X';
    cout << s1 << endl;
     */
    // Exercise 3.6 Output:
    // Change this string.
    // XXXXXXXXXXXXXXXXXXX
    // Program ended with exit code: 0
    
    // Exercise 3.7
    /*
    string s1;
    getline(cin,s1);
    for (char c : s1)
        c = 'X';
    cout << s1 << endl;
     */
    // Exercise 3.7 Output:
    // Change this string.
    // Change this string.
    // Program ended with exit code: 0
    
    // Exercise 3.8
    // Part 1
    /*
    string s1;
    decltype(s1.size()) ind = 0;
    getline(cin,s1);
    while (ind < s1.size()) {
        s1[ind] = 'X';
        ++ind;
    }
    cout << s1 << endl;
     */
    // Part 1 Output:
    // Change this string.
    // XXXXXXXXXXXXXXXXXXX
    // Program ended with exit code: 0
    
    // Part 2
    string s1;
    getline(cin,s1);
    for (int i = 0; i < s1.size(); ++i)
        s1[i] = 'X';
    cout << s1 << endl;
    // Part 2 Output:
    // Change this string.
    // XXXXXXXXXXXXXXXXXXX
    // Program ended with exit code: 0
    return 0;
}

// Exercise 3.7
/* If you define the loop control variable as type char, the program will not
 * function as expected. The loop control variable should be type char& to 
 * change the characters in the string to X. With type char, the string will not
 * be changed because the loop control variable will only have a copy of the 
 * character at the specified location.
 */

// Exercise 3.8
/* Prefer the first method of using range for because the code is the simplest.
 * The other methods require more typing/code to make sure the subscript for the
 * string is always in range. The range for does this the most efficiently.
 */