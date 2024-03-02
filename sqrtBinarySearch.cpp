#include <iostream>
#include <iomanip>
using namespace std;

class Solution {
public:
    int binSearch(int n) {
        int s = 0;
        int e = n;

        long long int mid = s + (e - s) / 2;
        long long int ans = -1;
        while (s <= e) {

            long long int square = mid * mid;
            if (square == n) {
                return mid;
            } else if (square > n) {
                e = mid - 1;
                
            } else if (square < n) {
                s = mid + 1;
                ans = mid;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

    int mySqrt(int x) {
        return binSearch(x);
    }
};