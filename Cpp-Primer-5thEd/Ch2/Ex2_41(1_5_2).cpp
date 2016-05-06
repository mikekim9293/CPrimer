//
//  Ex2_41(1_5_2).cpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.41 for Ex. 1.5.2
#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    Sales_data data_curr, data_new;
    double price = 0;
    unsigned totalTrans = 0;
    
    std::cin >> data_curr.bookNo >> data_curr.units_sold >> price;
    data_curr.revenue = data_curr.units_sold * price;
    ++totalTrans;
    
    while (std::cin >> data_new.bookNo >> data_new.units_sold >> price) {
        data_new.revenue = data_new.units_sold * price;
        if (data_curr.bookNo == data_new.bookNo) {
            ++totalTrans;
        }
        else {
            std::cout << totalTrans << " transactions for ISBN: " << data_curr.bookNo << std::endl;
            data_curr.bookNo = data_new.bookNo;
            data_curr.units_sold = data_new.units_sold;
            data_curr.revenue = data_new.revenue;
            totalTrans = 1;
        }
    }
    std::cout << totalTrans << " transactions for ISBN: " << data_curr.bookNo << std::endl;
    
    return 0;
    // Output:
    // 0-201-78345-X 3 20.00
    // 0-201-78345-X 2 25.00
    // 0-201-78345-X 1 40.00
    // 0-201-78345-X 2 12.00
    // 0-259-18149-X 1 80.00
    // 0-259-18149-X 2 125.00
    // 0-259-18149-X 3 99.00
    // 0-259-18149-X 6 70.00
    // 4 transactions for ISBN: 0-201-78345-X
    // 4 transactions for ISBN: 0-259-18149-X
    // Program ended with exit code: 0
}