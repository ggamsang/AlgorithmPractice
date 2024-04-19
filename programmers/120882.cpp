#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer, rank;
    for(auto s: score)
        answer.emplace_back((s[0] + s[1]) /*/2*/);
    
    for(auto a: answer)
        rank.emplace_back(a);
    
    sort(rank.begin(), rank.end(), greater<int>());
    
    for(auto &a: answer)
        a = find(rank.begin(), rank.end(), a) - rank.begin() +1;
    
    return answer;
}
