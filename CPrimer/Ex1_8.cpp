//
//  Ex1_8.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.8
#include <iostream>

int main() {
    std::cout <<  "/*";
    std::cout << "*/";
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;
    return 0;
    // Output:
    // /**/ */ /* Program ended with exit code: 0
}

// Answer:
// std::cout <<  "/*";
//  OK
// std::cout << "*/";
//  OK
// std::cout << /* "*/" */;
//  ERROR - due to nested comment
// std::cout << /* "*/" /* "/*" */;
//  OK
// Fix for 3rd expression is implemented above