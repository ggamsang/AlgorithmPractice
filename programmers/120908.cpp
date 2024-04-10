/*
#include <string>
#include <vector>
using namespace std;
int solution(string str1, string str2) {
	return (str1.find(str2) == string:npos) ? 2 : 1;
}
*/
#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 2;
    for(int i = 0; i < str1.size() - str2.size() + 1; i++) {
        for(int j = 0; j < str2.size(); j++) {
            if(str1[i + j] == str2[j]) {
                if(j == str2.size() -1) {
                    return 1;
                }
            }
            else 
                break;
        }
    }
    return answer;
}
