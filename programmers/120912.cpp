#include <string>
#include <vector>
#define LUCKY 7
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(const auto a: array)
        for(int n = a; n > 0; n /= 10)
            if(n % 10 == LUCKY)
                answer++;
    return answer;
}
