#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(auto c: my_string) {
        bool exist = false;
        for(auto a:answer){
            if(a==c) {
                exist = true;break;             
            }
        }
        if(exist) 
            continue;
        answer += c;
    }
    
    return answer;
}