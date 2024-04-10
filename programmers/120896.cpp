#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cntAs[26] = {0, };
    for(auto c: s) {
        cntAs[c-'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if(cntAs[i] == 1) answer += 'a' + i; 
    }
    return answer;
}
