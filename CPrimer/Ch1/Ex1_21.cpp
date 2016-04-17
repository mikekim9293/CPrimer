//
//  Ex1_21.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/13/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.21
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book1, book2;
    std::cout << "Input 2 book transactions: " << std::endl;
    std::cin >> book1 >> book2;
    std::cout << book1 + book2 << std::endl;
    return 0;
    // Output:
    // Input some book transactions:
    // 0-201-78345-X 3 20.00
    // 0-201-78345-X 2 25.00
    // 0-201-78345-X 3 60 20
    // 0-201-78345-X 2 50 25
    // Program ended with exit code: 0
}