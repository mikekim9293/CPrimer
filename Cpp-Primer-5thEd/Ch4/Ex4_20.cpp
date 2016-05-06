//
//  Ex4_20.cpp
//  CPrimer
//
//  Created by Seong Kim on 5/3/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 4.20 (below)
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
using std::begin; using std::end;

int main() {
    return 0;
    // Output:
    // Program ended with exit code: 0
}
// Exercise 4.20
/* iter is vector<string>::iterator
 * (a) *iter++;
 * Legal - dereference iter (original value) and increment iter.
 * (b) (*iter)++;
 * Illegal - Can't increment a string
 * (c) *iter.empty();
 * Illegal - Calls member function empty and then attempts to dereference the
 * result of that. Should use -> operator
 * (d) iter->empty();
 * Legal - equivalent to (*iter).empty();
 * (e) ++*iter;
 * Illegal - Can't increment a string
 * (f) iter++->empty();
 * Legal - uses original value of iter and calls empty, then increments iter.
 */