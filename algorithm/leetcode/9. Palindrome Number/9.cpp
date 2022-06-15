#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;
// 1. 정수 길이 구하기
// 2. 길이의 가운데 찾기
class Solution {
public:
    bool isPalindrome(int x) {
        int length = 0;
        int mid = 0;

        if (0 > x || 2147483647 < x)
            return 0;
        for (size_t i = 0; (x / 10) > 0; i++)
        {
            x = x / 10;
            length++;
        }
        length += 1;
        // 동적할당?
        // 무조건 짧게 쓰는게 좋은걸까???
        // mid = length / 2;
        if (length % 2 == 1)
            mid = (length / 2) + 1;
        else (length % 2 == 0)
            mid = length / 2;
        return (length);
    }
};

int main (void) {
    int ret = 0;
    Solution solution = Solution();
    ret = solution.isPalindrome(1345);
    
    std::cout<<"결과";
    std::cout<<ret;
    return (0);
}