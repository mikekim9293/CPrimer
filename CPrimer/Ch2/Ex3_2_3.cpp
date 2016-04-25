//
//  Ex3_2_3.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.2 and Exercise 3.3(below)
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main() {
    string line, word;
    /*
    // 1 line at a time:
    while(getline(cin,line))
        cout << line << endl;
     */
    // 1 word at a time:
    while(cin >> word)
        cout << word << endl;
    return 0;
    // Output:
    // This is one word at a time.
    // This
    // is
    // one
    // word
    // at
    // a
    // time.
    // Program ended with exit code: 0
}
// Exercise 3.3
/* Whitespace characters are handed differently by the input operator (>>) and
 * the getline function. Input operator is separated by whitespaces. While the
 * getline funciton is separated only by newline characters and other 
 * whitespace characters are ignored.
*/