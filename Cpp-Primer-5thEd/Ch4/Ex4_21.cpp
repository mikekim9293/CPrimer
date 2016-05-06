//
//  Ex4_21.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/4/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.21
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    vector<int> vi;
    int temp;
    while (cin >> temp)
        vi.push_back(temp);
    
    for (auto &i : vi)
        (i%2 == 1) ? (i*=2):(i);
    
    for (auto i : vi)
        cout << i << " ";
    cout << endl;
    
    return 0;
    // Output:
    // 1 2 3 4 5 6 7 8 9 10
    // 2 2 6 4 10 6 14 8 18 10
    // Program ended with exit code: 0
}