#include <iostream>

using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    bool check_version(int n) {
        if (n >= 3)
            return 1;
        return 0;
    }
    int firstBadVersion(int n) {
        int first = 1;
        int last = n;
        //      1 < 5 / 1 < 2 / 2 < 3
        while (first < last) {
            // 1 + 2 = 3
            // 1 + 0 = 1
            int mid = first + (last - first) / 2;
            if (check_version(mid))
                last = mid - 1; // last = 2
            else
                first = mid + 1; // first = 1
        }
        return last + 1;
    }
};

int main (void) {
    int ret;
    Solution solution = Solution();
    ret = solution.firstBadVersion(5);
    
    cout<<"결과";
    cout<<ret;
    return (0);
}