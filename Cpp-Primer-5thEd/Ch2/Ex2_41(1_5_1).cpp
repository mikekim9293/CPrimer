//
//  Ex2_41(1_5_1).cpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.41 for Ex. 1.5.1
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
    unsigned totalCnt = 0;
    double totalRevenue = 0;
    std::cin >> data_curr.bookNo >> data_curr.units_sold >> price;
    data_curr.revenue = data_curr.units_sold * price;
    totalCnt += data_curr.units_sold;
    totalRevenue += data_curr.revenue;
    
    while (std::cin >> data_new.bookNo >> data_curr.units_sold >> price) {
        data_curr.revenue = data_curr.units_sold * price;
        if (data_curr.bookNo == data_new.bookNo) {
            totalCnt += data_curr.units_sold;
            totalRevenue += data_curr.revenue;
        }
        else {
            std::cerr << "ISBNs of book transactions must match." << std::endl;
            return -1;
        }
    }
    std::cout << data_curr.bookNo << " " << totalCnt << " " << totalRevenue
              << " " << totalRevenue/totalCnt << std::endl;
    return 0;
    // Output:
    // 0-201-78345-X 1 20.00
    // 0-201-78345-X 2 10.00
    // 0-201-78345-X 3 5.00
    // 0-201-78345-X 4 8.00
    // 0-201-78345-X 5 10.00
    // 0-201-78345-X 15 137 9.13333
    // Program ended with exit code: 0
}