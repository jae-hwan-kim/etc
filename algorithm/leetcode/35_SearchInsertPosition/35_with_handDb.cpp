#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = 0;
            // 2 <= 1 탈출
        while (start <= end) {
            mid = start + (end - start) / 2;
            //1. 2
            //2. (0 + 1) / 2 = 0
            //3. 1 + (1 - 1) / 2 = 1
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                //2-1. 1 < 4
                //3-1. 3 < 4
                start = mid + 1;
                //2-2. start = 1
                //3-2. start = 2
            } else if (nums[mid] > target) {
                //1-1. 5 > 4
                end = mid - 1;
                //1-2. end = 1
            }
        }
        // 2 > 1
        if (start > end) {
            return (start);
        }
        return 0;
    }
};

int main (void) {
    int ret;
    vector<int> nums = {1, 3, 5, 6, 7};
    Solution solution = Solution();
    ret = solution.searchInsert(nums, 4);
    
    std::cout<<"결과";
    std::cout<<ret;
    return (0);
}