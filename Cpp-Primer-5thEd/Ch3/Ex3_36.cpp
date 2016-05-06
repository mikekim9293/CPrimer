//
//  Ex3_36.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/28/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.36
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    // Using arrays
    int arr1[] = {0,1,2,3,4,5};
    int arr2[] = {0,1,2,3,4,5};
    int *first1 = begin(arr1), *first2 = begin(arr2);
    int *last1 = end(arr1), *last2 = end(arr2);
    bool equality = true;
    
    if ((last1-first1) != (last2-first2))
        equality = false;
    else {
        for (; (first1 != last1) && (first2 != last2); ++first1,++first2) {
            if (*first1 != *first2)
                equality = false;
        }
    }
    if (equality)
        cout << "Arrays are equal." << endl;
    else
        cout << "Arrays are not equal." << endl;
    
    
    // Using vectors
    vector<int> vec1 = {0,1,2,3,4,5};
    vector<int> vec2 = {0,1,2,3,4,5};
    if (vec1 == vec2)
        cout << "Vectors are equal." << endl;
    else
        cout << "Vectors are not equal." << endl;
    
    return 0;
    // Output:
    // Arrays are equal.
    // Vectors are equal.
    // Program ended with exit code: 0
}