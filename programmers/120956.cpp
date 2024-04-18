#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> aywm = {"aya", "ye", "woo", "ma"};
    
    for(auto b: babbling) {
        for(auto a: aywm) {
            size_t pos = b.find(a);
            if(pos != string::npos) {
                b.replace(pos, a.length(), a.length(), ' ');
            }
        }
        int cnt = 0;
        for(auto _: b) if(_ == ' ') cnt ++;

        if(cnt == b.size())
            answer++;
    }
    return answer;
}
