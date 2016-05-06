//
//  Ex3_22.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/26/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.22
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    vector<string> text;
    string temp;
    while (getline(cin, temp))
        text.push_back(temp);
    
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (auto c = it->begin(); c != it->end(); ++c)
            *c = ::toupper(*c);
    }
    
    for (auto it = text.cbegin(); it != text.end(); ++it)
        cout << *it << endl;
    
    return 0;
    // Output:
    // This is line 1.
    // This is line 2.
    // This is end of paragraph.
    //
    // This is new paragraph.
    // THIS IS LINE 1.
    // THIS IS LINE 2.
    // THIS IS END OF PARAGRAPH.
    //
    // This is new paragraph.
    // Program ended with exit code: 0
}