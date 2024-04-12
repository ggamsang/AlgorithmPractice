#include <string>
#include <vector>
// #include <iostream>
#define MINUS 0
#define PLUS 1
// -6 - -3 = 9

using namespace std;

int calc(const string& LH) {
    int first = 0, operation = PLUS, idx = 0;
    string token = "", L = "", R = "";
    
    for(int i = 1; i < LH.size(); i++)
        if(LH[i] == '+') {
            operation = PLUS, idx = i; break;
        } else if(LH[i] == '-') {
            operation = MINUS, idx = i; break;
        }
    L = LH.substr(0, idx);
    R = LH.substr(idx+1, LH.size() - idx+1);
    return operation == PLUS 
        ? stoi(L) + stoi(R)
        : stoi(L) -1*stoi(R);
}
string OX(const string& QUIZ) {
    string quiz;
    int pivot = 0;
    // trim, find = index
    for(auto q: QUIZ)
        if(q != ' ')
            quiz += q;
    for(int i = 0; i < quiz.size(); i++)
        if(quiz[i] == '=') {
            pivot = i;
            break;
        }
    string LH = quiz.substr(0, pivot);
    string RH = quiz.substr(pivot+1, quiz.size()- pivot+1);
    // cout << "LH: " << LH << ", RH: " << RH << endl;
    // split
    int l = calc(LH), r = stoi(RH);
    
    return l == r ? "O" : "X";
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(auto q: quiz) {
        answer.push_back(OX(q));
    }
    return answer;
}
