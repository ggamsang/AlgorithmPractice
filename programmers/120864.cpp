#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string token = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] >= '0' && my_string[i] <= '9')
            token += my_string[i];
    
        else {
            if(token.size()) {
                answer += stoi(token);
                token = "";                
            }
        }
        if(i == my_string.size()-1 && token.size()) {
            answer += stoi(token);
        }
    }
    
    return answer;
}
