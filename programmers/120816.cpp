#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 1;
    while(answer*slice<n) answer++;
    return answer;
}