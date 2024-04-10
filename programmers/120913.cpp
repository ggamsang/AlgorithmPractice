#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string token = "";
    for(auto s: my_str) {
        token += s;
        if(token.size() == n){
            answer.push_back(token);
            token = "";
        }
    }
    if(token.size())
        answer.push_back(token);
    return answer;
}
