#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (auto s: my_string) {
        if(s >= 'a'&& s <='z') answer += s -32;
        else answer += s + 32;
    }
    return answer;
}