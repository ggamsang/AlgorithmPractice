#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());
    return array[(int)array.size()/2];
}
