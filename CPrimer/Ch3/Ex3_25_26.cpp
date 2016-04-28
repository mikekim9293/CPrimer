//
//  Ex3_25_26.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/27/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.25 + Exercise 3.26 (below)
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    vector<int> input{42,65,95,100,39,67,95,76,88,76,83,92,76,93};
    vector<int> bins(10,0);
    auto pos = bins.begin();
    for (auto i = input.begin(); i != input.end(); ++i)
        ++*(pos + *i/10);
    for (auto i : bins)
        cout << i << " ";
    cout << endl;
    return 0;
    // Output:
    // 0 0 0 1 1 0 2 3 2 4 
    // Program ended with exit code: 0
}
// Exercise 3.26
/* In the binary search program, we wrote mid = beg + (end - beg)/2 instead of
 * mid = (beg + end)/2 because in the second expression the parentheses
 * (beg + end) would have returned an invalid iterator. The returned iterator
 * would have pointed to an element way past one off the end of the container.
 */