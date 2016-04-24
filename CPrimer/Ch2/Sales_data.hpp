//
//  Sales_data.hpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif /* Sales_data_hpp */
