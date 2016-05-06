//
//  Ex3_40.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/29/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.40
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    char ca1[] = "Hi my name is";
    char ca2[] = " the Real Slim Shady.";
    size_t sz = strlen(ca1) + strlen(ca2) + 1;
    char caNew[sz];
    
    strcpy(caNew,ca1);
    strcat(caNew,ca2);
    cout << caNew << endl;
    return 0;
    // Output:
    // Hi my name is the Real Slim Shady.
    // Program ended with exit code: 0
}