#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency);
    sort(emergency.begin(), emergency.end(), greater<>());
    for(int i = 0; i < answer.size(); i++){ 
        answer[i] = find(emergency.begin(), emergency.end(), answer[i]) - emergency.begin() + 1;
        // cout << answer[i] << " ";
    }
    return answer;
}