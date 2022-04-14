#include <iostream>
#include <math.h>
#include <limits.h>

//1. n이 0, 1 일때
//2. n이 음수일때
//3. n이 짝수 (x * x)^(n/2)
//4. n이 홀수 (x * x)^(n/2) * x

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return (1);
        }
        if (n == 1) {
            return (x);
        }
        
        if (n < 0) {
            if (n == INT_MIN) {
                x = (1 / x) * (1 / x);
                n = -(n / 2);
            } else {
                x = 1 / x;
                n = -n;
            }
        }
        if (n % 2 == 0) {
            return myPow(x * x, n / 2);
        } else if (n % 2 == 1) {
            return myPow(x * x, n / 2) * x;
        }
        return (0);
    }
};

int main (void) {
    double ret = 0;
    Solution pow = Solution();
    ret = pow.myPow(2, 2);
    //ret = pow(-1, 1);
    std::cout<<"결과";
    std::cout<<ret;
    return (0);
}