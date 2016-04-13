//
//  Ex1_15.cpp
//  CPrimer-Ch1
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.15
#include <iostream>

int main() {
    // Syntax error: Use of undeclared identifier 'cout'; did you mean 'std::cout'?
    //cout << "Forgot namespace std" << std::endl;
    std::cout << "Don't forget namespace std for cout" << std::endl;
    // Type error: Cannot initialize a variable of type 'int' with an lvalue type 'const char [6]'
    //int v1 = "error";
    int v1 = 0;
    // Declaration error: Use of undeclared identifer 'v1'
    //v2 = 25;
    int v2 = v1;
    return v2;
    // Output:
    // Don't forget namespace std for cout
    // Program ended with exit code: 0
}