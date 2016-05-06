//
//  Ex3_5.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.5
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main() {
    string str, combined;
    // Part 1
    /*
    while (cin >> str)
        combined += str;
    cout << combined << endl;
     */
     
    // Part 2
    while (cin >> str)
        combined += str + " ";
    cout << combined << endl;
    
    return 0;
    // Output:
    // This is concatenation of strings.
    // This is concatenation of strings.
    // Program ended with exit code: 0
}