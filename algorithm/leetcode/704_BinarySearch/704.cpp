#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (find(nums.begin(), nums.end(), target) != nums.end()){
            int answer = find(nums.begin(), nums.end(), target) - nums.begin();
            return answer;
        }
        return -1;
    }
};

// int answer;
// for (int index = 0; index < nums.size(); index++) {
//     if (nums[index] == target) {
//         answer = index;
//         return answer;
//     }
// }
// return -1;

// int start = 0;
// int last = nums.size() - 1;

// while (start <= last) {
//     int mid = start + (last - start) / 2;
    
//     if (target == nums[mid]) {
//         return mid;
//     } else if (target > nums[mid]) {
//         start = mid + 1;
//     } else if (target < nums[mid]) {
//         last = mid - 1;
//     }
// }
// return -1;

int main(void) {
    Solution solution = Solution();
    vector<int> nums = {-1, 0, 3, 5, 9, 12};

    int answer = solution.search(nums, 9);
    cout << answer << endl;
    return 0;
}