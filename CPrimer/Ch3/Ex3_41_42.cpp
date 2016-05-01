//
//  Ex3_41_42.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/30/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

#// Exercise 3.41 + Exercise 3.42
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    // Exercise 3.41
    int arr1[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> vec1(begin(arr1),end(arr1));
    for (auto i : vec1)
        cout << i << " ";
    cout << endl;
    
    // Exercise 3.42
    int arr2[vec1.size()];
    for (int i = 0; i != vec1.size(); ++i)
        arr2[i] = vec1[i];
    for (auto i : arr2)
        cout << i << " ";
    cout << endl;
    
    return 0;
    // Output:
    // 0 1 2 3 4 5 6 7 8 9
    // 0 1 2 3 4 5 6 7 8 9
    // Program ended with exit code: 0
}