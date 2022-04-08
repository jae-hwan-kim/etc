#include <iostream>
#include <vector>
#include <string>

// using namespace std;

// class Solution {

//     vector<int>scores = {10, 20, 30};
//     vector<int>ages = { 1,2,3 };

//     int addScores = 0;

// public:
//     int bestTeamScore(vector<int>& scores, vector<int>& ages) {
//         for (int index = 0; index < sizeof(scores)/sizeof(int); index++) {
//             addScores = addScores + scores[index];
//         }
//     }
// };

int bestTeamScore(int* scores, int scoresSize, int* ages, int agesSize){
    int addScores = 0;

    for (int index = 0; index < scoresSize ; index++) {
        addScores = addScores + scores[index];
    }
    return addScores;
}

int main(void) {
    int* scores;
    int scoresSize;
    int* ages;
    int ageSize;

    return bestTeamScore(scores, scoresSize, ages, ageSize);
}