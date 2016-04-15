//
//  Ex1_22.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/13/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.22
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book, book_curr;
    std::cout << "Input book transactions: " << std::endl;
    if (std::cin >> book_curr) {
        while (std::cin >> book)
            book_curr += book;
        std::cout << book_curr << std::endl;
    }
    return 0;
    // Output:
    // Input book transactions:
    // 0-201-78345-X 3 20.00
    // 0-201-78345-X 2 25.00
    // 0-201-78345-X 1 40.00
    // 0-201-78345-X 2 12.00
    // 0-201-78345-X 8 174 21.75
    // Program ended with exit code: 0
}
