#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end(), cmp);
    return sides[0] < sides[1] + sides[2] ? 1 :2;
}