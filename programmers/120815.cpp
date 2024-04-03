#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 1;
    while(answer * 6 % n != 0){
        answer++;
    }
    // std::cout << answer;
    return answer;
}