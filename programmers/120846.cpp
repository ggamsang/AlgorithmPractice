#include <string>
#include <vector>

using namespace std;
int cntDivisors(int n) {
    int cnt = 1;
    for(int i = 2; i * i <= n; i++) {
        int exp = 0;
        while(n % i == 0){
            n /= i;
            exp++;
        }
        cnt *= (exp + 1);
    }
    if(n > 1){
        cnt *= 2;
    }
    return cnt;
}
int solution(int n) {
    int answer = 0;
    while(n > 3) {
        if(cntDivisors(n) >= 3) answer++;
        n--;
    }
    return answer;
}