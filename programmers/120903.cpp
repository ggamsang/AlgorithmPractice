#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> S1, vector<string> S2) {
    int answer = 0;
    
    sort(S1.begin(), S1.end());    
    sort(S2.begin(), S2.end());    
    
    for(auto s1: S1) {
        for(auto s2: S2) {
            if(s1 == s2) {
                answer++;
                break;
            }
        }
    }
    return answer;
}
