//
//  Ex1_7.cpp
//  CPrimer
//
//  Created by Seong Kim on 4/12/16.
//  Copyright © 2016 Seong Kim. All rights reserved.
//

// Exercise 1.7
/*
 * this is a nested /* */comment pair
 * this is going to cause an error
 */

int main() {
    return 0;
}
// Answer:
// Build failed in line 11 because a ";" is expected.
// This is due to the fact that from "comment" everything is considered code.