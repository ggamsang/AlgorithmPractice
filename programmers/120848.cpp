#include <string>
#include <vector>

using namespace std;
int fact(int n) {
    if(n < 2) return 1;
    return n * fact(n-1);
}
int solution(int n) {
    int answer = 1;
    int i = 1;
    while(true){
        if(fact(i) > n) {
            answer = i;
            break;
        }
        i++;
    }
    return answer-1;
}