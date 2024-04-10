#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
	vector<int> answer;
	int max = 0;

	for(auto a: array)
		if(max < a)
			max = a;
	answer.push_back(max);

	for(int i = 0; i < array.size(); i++)
		if(array[i] == max)
			answer.push_back(i);

	return answer;
}
