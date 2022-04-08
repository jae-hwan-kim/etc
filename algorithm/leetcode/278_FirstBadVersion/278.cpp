#include <iostream>
#include <math.h>
#include <limits.h>

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    bool isBadVersion(int version) {
        if (version == 5 || version == 4) return true;
        else return false;
    }
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid) == true){
                right = mid;
            } else if (isBadVersion(mid) != true) {
                left = mid + 1;
            }
        }
        return left;
    }
};

// int firstBadVersion(int n) {
//     while (0 < n) {
//         if (isBadVersion(n) == true){
//             while (isBadVersion(n - 1) == true) {
//                 n -= 1;
//             }
//             return n;
//         }
//     }
//     return false;
// }

int main (void) {
    int ret;
    Solution solution = Solution();
    ret = solution.firstBadVersion(5);
    
    std::cout<<"결과";
    std::cout<<ret;
    return (0);
}