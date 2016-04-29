//
//  Ex3_34_35.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/28/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.34 (below) + Exercise 3.35
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    int ia[] = {2,4,6,8,10};
    int *first = begin(ia), *last = end(ia);
    while (first != last) {
        *first = 0;
        ++first;
    }
    for (auto i : ia)
        cout << i << " ";
    cout << endl;
    
    return 0;
    // Output:
    // 0 0 0 0 0
    // Program ended with exit code: 0
}
// Exercise 3.34
/* The code moves the position of pointer p1 to the same position of p2. This is
 * assuming that the both p1 and p2 point to valid elements in array or one past
 * last element in array.
 */