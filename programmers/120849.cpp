#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto c: my_string)
        if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
            answer.push_back(c);
    return answer;
}