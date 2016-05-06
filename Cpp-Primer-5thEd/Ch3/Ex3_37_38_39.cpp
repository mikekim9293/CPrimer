//
//  Ex3_37_38_39.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/29/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 3.37 (below) + Exercise 3.38 (below) + Exercise 3.39
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main() {
    string s1 = "This is a string.";
    string s2 = "This is another string.";
    if (s1 == s2)
        cout << "Strings are equal." << endl;
    else
        cout << "Strings are not equal." << endl;
    
    char arr1[] = "This is a character array.";
    char arr2[] = "This is another character array.";
    if (strcmp(arr1,arr2) == 0)
        cout << "Character arrays are equal." << endl;
    else
        cout << "Character arays are not equal." << endl;
    
    return 0;
    // Output:
    // Strings are not equal.
    // Character arays are not equal.
    // Program ended with exit code: 0
}
// Exercise 3.37
/* Program prints characters in array, each on a new line. However it would not 
 * terminate as expected. As the array is not null character terminated, the 
 * while loop will not terminate until a null character is reached in memory
 * following the array.
 */

// Exercise 3.38
/* Adding two pointers is meaningless because they do not point to the same
 * object. The result of adding the two pointers may not point to any particular
 * object. It would simply signify an address in memory that represent the
 * result of adding the two pointers. Something actually useful may be the 
 * different of two pointers, which would give you the distance between the two
 * pointers.
 */