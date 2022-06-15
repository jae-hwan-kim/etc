#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// 두 숫자를 더한다. 해당 값의 0에 대한 보수를 해시 테이블에 넣어서 찾는 방식.
// 1. 두 숫자를 더하는 함수를 만든다.
// 2. 더한 값의 0에 대한 보수를 만든다.
// 3. 더한 값을 해시 테이블에 넣는다. 해시 테이블에서 찾는다.
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        unordered_map<int, int> hashTable;
        int twoSum = 0;
        int x, y, z = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                /* code */
            }
            
            twoSum = nums[i] +nums[i + j];
        }
        
    }
};

int main (void) {
    vector<vector<int>> answer;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution solution = Solution();
    answer = solution.threeSum(nums);
    
    cout << "결과" << endl;
    for (int i = 0; i < answer.size(); i++) {
		for (int j = 0; j < 3; j++) {
			cout << (*(answer.begin() + i))[j];
		}
	}
    return (0);
}