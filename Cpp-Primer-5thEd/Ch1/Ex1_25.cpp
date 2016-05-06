//
//  Ex1_25.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/14/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.25
#include <iostream>
#include "Sales_item.h"

int main() {
    std::cout << "Enter transactions: " << std::endl;
    Sales_item total;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
    // Output:
    // Enter transactions:
    // 0-201-78345-X 3 20.00
    // 0-201-78345-X 2 25.00
    // 0-201-78345-X 1 40.00
    // 0-201-78345-X 2 12.00
    // 0-259-18149-X 1 80.00
    // 0-259-18149-X 2 125.00
    // 0-259-18149-X 3 99.00
    // 0-259-18149-X 6 70.00
    // 0-201-78345-X 8 174 21.75
    // 0-259-18149-X 12 1047 87.25
    // Program ended with exit code: 0
}