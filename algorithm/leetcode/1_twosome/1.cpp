#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hashMapTable;
        vector<int> answer;
        unsigned int length = numbers.size();

        //int int
        for (int index = 0; index < length; index++) {
            int numToFind = target - numbers[index];
            //numToFind -> 2, 3
            if (hashMapTable.find(numToFind) != hashMapTable.end()) {
                answer.push_back(hashMapTable[numToFind]);
                //3 찾음. 3의 인덱스 0
                answer.push_back(index);
                //현재 인덱스 1
                return answer;
            } else {
                hashMapTable[numbers[index]] = index;
                //3, 0
            }
        }
        return answer;
    }
};

// //해쉬맵 방식
// unordered_map<int, int> hashMapTable;
// vector<int> answer;
// unsigned int length = numbers.size();

// for (int i = 0; i < length; i++) {
//     int numToFind = target - numbers[i];
//     //hasMapTable에 값을 미리 배치하지 않아도 돼?
//     //hashMapTable.insert(make_pair(i, numToFind));
    
//     if (hashMapTable.find(numToFind) != hashMapTable.end()) {
//         cout << hashMapTable[numToFind] << endl;
//         answer.push_back(hashMapTable[numToFind]);
//         answer.push_back(i);
//         return answer;
//     } else {
//         hashMapTable[numbers[i]] = i;
//     }
// }
// return answer;

// //해쉬맵 방식
// unordered_map<int, int> hashMapTable;
// unsigned int length = numbers.size();

// for (int i = 0; i < length; i++) {
//     int numToFind = target - numbers[i];
//     if (hashMapTable.find(numToFind) != hashMapTable.end()) {
//         return {hashMapTable[numToFind], i}; 
//         //반환형이 vector<int, int>라서 {}로 반환해도 됨.
//     } else {
//         hashMapTable[numbers[i]] = i;
//     }
// }
// return {};

//brute force 방식
// vector<int> answer(2);

// int length = numbers.size();
// for (int i = 0; i < length; i++) {
//     int left = numbers[i];

//     for (int j = i + 1; j < length; j++) {
//         if (numbers[i] + numbers[j] == target) {
//             answer[0] = i;
//             answer[1] = j;
//             return answer;
//         }
//     }
// }
// return answer;

int main() {
    vector<int> numbers = {3, 2, 4};
    Solution solution = Solution();
    vector<int> answer = solution.twoSum(numbers, 5);

    cout << answer[0] << ":" << answer[1] << endl;
    return 0;
}

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main(){
//     unordered_map <string, int> m;
//     m["a"] = 1;
//     m["a"] = 2;
//     m["b"] = 3;
//     m["c"] = 4;
//     m["d"] = 5;
//     m["e"] = 6;
    
//     for(auto& i : m) cout << i.first << " " << i.second << " | ";
//     cout << endl;
//     // e 6 | d 5 | b 3 | c 4 | a 2 | 
    
//     m.erase("a");
    
//     if(m.find("a") == m.end()) cout << "a is erased!" << endl; 
//     // a is erased!
    
//     cout << m.count("b") << endl; // 1(true)
//     cout << m.count("a") << endl; // 0(false)
//     cout << m.size() << endl; // 4
//     cout << m.empty() << endl; // 0(false)
// }