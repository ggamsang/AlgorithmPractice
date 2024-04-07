#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    while(--k) {
        answer = (answer + 2) % numbers.size();
    }
    return numbers[answer];
}
