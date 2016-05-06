//
//  Ex3_1(1_4_1).cpp
//  CPrimer
//
//  Created by Seong Kim on 4/24/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.1 for Ex 1.4.1 (combined)
#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
    int num1, num2, sum;
    cout << "Enter range of two numbers to sum: " << endl;
    cin >> num1 >> num2;
    if (num1 == num2) {
        std::cerr << "Numbers are the same!" << endl;
        return -1;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    cout << "Summed over range: " << endl;
    while (num2 >= num1) {
        cout << num2 << endl;
        sum += num2;
        --num2;
    }
    cout << "Sum is: " << sum <<endl;
    return 0;
    // Output:
    // Enter range of two numbers to sum:
    // 10 1
    // Summed over range:
    // 10
    // 9
    // 8
    // 7
    // 6
    // 5
    // 4
    // 3
    // 2
    // 1
    // Sum is: 56
    // Program ended with exit code: 0
}