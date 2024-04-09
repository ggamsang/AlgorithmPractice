#include <string>
#include <vector>
// #include <iostream>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> nums;
    
    istringstream iss(s);
    vector<string> tokens;
    string token;
    while (getline(iss, token, ' ')) {
        if(token == "Z") nums.pop_back(); 
        else nums.push_back(stoi(token));
    }
    
    for(auto n:nums) {
        answer += n;
        // cout << n << " ";        
    }
    
    return answer;
}