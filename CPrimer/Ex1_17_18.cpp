//
//  Ex1_17_18.cpp
//  CPrimer-Ch1
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.17 (below) + Exercise 1.18
// Exercise 1.18
#include <iostream>

int main() {
    std::cout << "Input values: " << std::endl;
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
    // All equal input
    // Output:
    // Input values:
    // 34 34 34 34 34 34 34 34 34 34 34
    // 34 occurs 11 times
    // Program ended with exit code: 0
    
    // No repeats input
    // Output:
    // Input values:
    // 34 55 61 62 70 83 99
    // 34 occurs 1 times
    // 55 occurs 1 times
    // 61 occurs 1 times
    // 62 occurs 1 times
    // 70 occurs 1 times
    // 83 occurs 1 times
    // 99 occurs 1 times
    // Program ended with exit code: 0
}

// Exercise 1.17
// Answers
// Behaves as expected in both cases (all equal, or no repeats)
// *Assuming the input is in ascending or descending sorted order