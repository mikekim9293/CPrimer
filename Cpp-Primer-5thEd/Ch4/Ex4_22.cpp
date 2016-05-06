//
//  Ex4_22.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/4/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.22 (below)
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    vector<int> grades = {98,80,55,65};
    vector<string> sgrades1, sgrades2;
    string sgrade;
    // Version 1
    for (auto i : grades) {
        sgrade = (i < 60) ? "fail" :
                    (i < 75) ? "low pass" :
                    (i < 90) ? "pass" : "high pass";
        sgrades1.push_back(sgrade);
    }
    for (auto s : sgrades1)
        cout << s << endl;
    cout << endl;
    
    // Version 2
    for (auto i : grades) {
        if (i < 60)
            sgrade = "fail";
        else {
            if (i < 75)
                sgrade = "low pass";
            else {
                if (i < 90)
                    sgrade = "pass";
                else
                    sgrade = "high pass";
            }
        }
        sgrades2.push_back(sgrade);
    }
    for (auto s : sgrades2)
        cout << s << endl;
    
    return 0;
    // Output:
    // high pass
    // pass
    // fail
    // low pass
    //
    // high pass
    // pass
    // fail
    // low pass
    // Program ended with exit code: 0
}
// Exercise 4.22
/* The conditional version is easier to understand because it is more concise
 * than the if statement version. The conditional version accomplishes in one
 * expression that takes the if statement version multiple nested if-else
 * statements.
 */