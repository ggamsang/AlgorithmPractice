#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
vector<int> solution(int n) {
    vector<int> answer;
    int i = 2;
    while(n != 1){
        if(n%i == 0) { n /= i; answer.push_back(i);}
        else i++;
    }
    answer.erase( unique( answer.begin(), answer.end()), answer.end()); //
    // for(auto a : answer) cout << a << " ";
    // cout << endl;
    return answer;
}
int main(int argc, char **argv) {
    vector<int> a= solution(100);
    return 0;
}