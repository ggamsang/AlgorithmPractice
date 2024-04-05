#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int age) {
    string ALPH = "abcdefghij";
    string answer = std::to_string(age);
    for(char & a:answer) a = ALPH[a-'0'];
    return answer;
}