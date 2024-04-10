#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(string numbers) {
	long long answer = 0;
	vector<string> strNumbers = {
		"zero", "one", "two", "three", "four",
		"five", "six", "seven", "eight", "nine"
	};
	string word = "";
	for(auto c: numbers) {
		word += c;
		auto it = find(strNumbers.begin(), strNumbers.end(), word);
		if(it != strNumbers.end()) {
			answer = answer * 10 + (it - strNumbers.begin());
			word = "";
		}
	}	
	return answer;
}
