//
//  Ex2_42(1_6).cpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 2.42 for Ex. 1.6
#include <iostream>
#include <string>
#include "Sales_data.hpp"

int main() {
    Sales_data data_curr, data_new;
    double price = 0;
    unsigned totalCnt = 0;
    double totalRevenue = 0;
    
    std::cin >> data_curr.bookNo >> data_curr.units_sold >> price;
    data_curr.revenue = data_curr.units_sold * price;
    totalCnt += data_curr.units_sold;
    totalRevenue += data_curr.revenue;
    
    while (std::cin >> data_new.bookNo >> data_new.units_sold >> price) {
        data_new.revenue = data_new.units_sold * price;
        if (data_curr.bookNo == data_new.bookNo) {
            totalCnt += data_new.units_sold;
            totalRevenue += data_new.revenue;
        }
        else {
            std::cout << data_curr.bookNo << " " << totalCnt << " " << totalRevenue
            << " " << totalRevenue/totalCnt << std::endl;
            data_curr.bookNo = data_new.bookNo;
            data_curr.units_sold = data_new.units_sold;
            data_curr.revenue = data_new.revenue;
            totalCnt = data_curr.units_sold;
            totalRevenue = data_curr.revenue;
        }
    }
    std::cout << data_curr.bookNo << " " << totalCnt << " " << totalRevenue
    << " " << totalRevenue/totalCnt << std::endl;
    
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
    // 0-201-78345-X 8 174 21.75
    // 0-259-18149-X 12 1047 87.25
    // Program ended with exit code: 0
}