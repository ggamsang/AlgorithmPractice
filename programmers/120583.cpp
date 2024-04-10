#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
	int answer = 0;
	sort(array.begin(), array.end());
	for(const auto a: array)
		if(a == n) answer++;
		else if ( a > n ) break;
	return answer;
}
// answer = count(array.begin(), array.end(), n);
