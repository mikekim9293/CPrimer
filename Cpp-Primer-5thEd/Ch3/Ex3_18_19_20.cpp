//
//  Ex3_18_19_20.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/25/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.18 (below) + Exercise 3.19 (below) + Exercise 3.20
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
// Exercise 3.20
int main() {
    // First way
    /*
    vector<int> ivec, result;
    int temp = 0;
    while (cin >> temp)
        ivec.push_back(temp);
    for (vector<int>::size_type i = 1; i != ivec.size(); ++i) {
        result.push_back(ivec[i-1] + ivec[i]);
    }
    for (auto i : result)
        cout << i << " ";
    cout << endl;
    cout << result.size() << endl;
     */
    // Output:
    // 1 2 3 4 5 6 7 8 9 10
    // 3 5 7 9 11 13 15 17 19
    // Program ended with exit code: 0
    
    // Second way
    vector<int> ivec, result;
    int temp;
    while (cin >> temp)
        ivec.push_back(temp);
    vector<int>::size_type back = ivec.size();
    for (vector<int>::size_type i = 0; (i != back); ++i) {
        --back;
        result.push_back(ivec[i] + ivec[back]);
        if (back-i == 2)
            result.push_back(ivec[--back]);
    }
    for (auto i : result)
        cout << i << " ";
    cout << endl;
    return 0;
    // Output:
    // 1 2 3 4 5 6 7
    // 8 8 8 4
    // Program ended with exit code: 0
}
// Exercise 3.18
/* It is illegal because it is trying to access a subscript that doesn't exist.
 * Change to:
 * vector<int> ivec{42};
 */

// Exercise 3.19
/* vector<int> v1(10,42);
 * vector<int> v2{42,42,42,42,42,42,42,42,42,42};
 * vector<int> v3;
 *  for(int i = 0; i!= 10; ++i)
        v3.push_back(42);
 * The first method is preferred because it is the simplest to read and most
 * efficient way to create a vector of 10 elements with all same value.
 */