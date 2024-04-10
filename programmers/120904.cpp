#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    int tens = 1;
    while(num) {
        if(num % 10 == k) {
            answer = tens;
        }
        num /= 10;
        tens++;
    }
    if(answer == 0) return -1;
    return tens - answer;
}
