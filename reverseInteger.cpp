// Given a signed 32-bit integer x, return x with its digits reversed. 
// If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include <iostream>
#include<iomanip>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        
        int rnum = 0;
        int i = 3;
        while (x != 0) {

            int temp = x%10;

            if ( (rnum > INT_MAX/10) || (rnum < INT_MIN/10)) {
                return 0;
            }

            rnum = (rnum * 10) + temp;

            x = x/10;
            i--;
        }

        return rnum;
    }
};