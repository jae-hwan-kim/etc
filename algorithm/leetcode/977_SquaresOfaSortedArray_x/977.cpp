#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
//1. 처음과 끝을 비교한다.
//2. 제곱한다.
//3. 백터에 넣는다.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ret(nums.size());
        int length = nums.size();
        int retIndex = length - 1;
        int end = length - 1;
        int start = 0;
        
        while (start <= end) {
            if (nums[start] < 0)
                nums[start] *= -1;
            if (nums[start] < nums[end]) {
                ret[retIndex] = pow(nums[end], 2);
                --retIndex;
            } else if (nums[start] > nums[end]) {
                ret[retIndex] = pow(nums[start], 2);
                ++start;
                --end;
            }
        }
        return ret;
    }
};

int main (void) {
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> ret;
    Solution solution = Solution();
    ret = solution.sortedSquares(nums);
    cout<<"결과";
    for (size_t i = 0; i < nums.size(); i++) {
        cout<<ret[i];
    }
    return (0);
}