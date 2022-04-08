#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

// vector<int> nums = {1, 3, 5, 6};
// Solution solution = Solution();
// ret = solution.searchInsert(nums, 4);

// 타겟이 nums 보다 크거나 같을 때는 해당 위치 반환, 작으면 재검사
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int  start = 0;
       int  end = nums.size() - 1;

       while (start <= end) {
           int mid = start + (end - start) / 2;
           cout << mid;
           if (target == nums[mid]) {
               return mid;
           } else if (target > nums[mid]) {
               start = mid + 1;
           } else {
               end = mid - 1;
           }
           if (start > end)
            return end + 1;
       }
       return -1;
    }
};

//  int start = 0;
//         int end = nums.size() - 1;
                
//         while (start <= end) {
//             int mid = start + (end - start) / 2;

//             if (target == nums[mid]) {
//                 return mid;
//             } else if (target > nums[mid]) {
//                 start = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }
//         if (start > end)
//             return end + 1;
//         return -1;

int main (void) {
    int ret;
    vector<int> nums = {1, 3, 5, 6};
    Solution solution = Solution();
    ret = solution.searchInsert(nums, 4);
    
    std::cout<<"결과";
    std::cout<<ret;
    return (0);
}

// int length = nums.size();
// int ret = 0;
// int index = 0;

// while (index < length) { 
//     if (nums[index] >= target) {
//         ret = index;
//         return ret;
//     } else if (nums[index] < target) {
//         index++;
//     } else {
//         ret = index + 1;
//         return ret;
//     }
// }
// ret = index;
// return ret;