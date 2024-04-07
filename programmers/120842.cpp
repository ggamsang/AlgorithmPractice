#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> nums, int nCol) {
    vector<vector<int>> answer;
    int nRow = nums.size()/nCol;
    for(int i = 0; i < nRow; i++) {
        vector<int> row;
        for(int j = 0; j < nCol; j++) {
            row.push_back(nums[(i * nCol) + j]);
        }
        answer.push_back(row);
    }
    return answer;
}
