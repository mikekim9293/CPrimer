//
//  Ex1_20.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/13/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.20
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book;
    std::cout << "Input some book transactions: " << std::endl;
    while (std::cin >> book)
        std::cout << book << std::endl;
    return 0;
    // Output:
    // Input 2 book transactions:
    // 0-201-78345-X 3 20.00
    // 0-201-78345-X 2 25.00
    // 0-201-78345-X 5 110 22
    // Program ended with exit code: 0
}