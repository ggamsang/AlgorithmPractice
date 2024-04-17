#include <string>
#include <vector>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int A = sides[0] > sides[1] ? sides[0]:sides[1];
    int B = sides[0] < sides[1] ? sides[0]:sides[1];
    int C;
    // 주어진 수가 가장 긴 경우(A),C = A - (A - B);
    C = B;
    answer += C;
    // C가 가장 긴 경우, C = (A + B) - A -1;
    C = B -1;
    answer += C;
    return answer;
}