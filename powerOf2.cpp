// Power of 2 

/*

Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.

*/
#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; i <= 30; i++) {
            int ans = pow(2, i);

            if (n == ans) {
                return true;
            }
        }
        return false;
    }
};