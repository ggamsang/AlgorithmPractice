/*
#include <string>
#include <vector>
using namespace std;
int solution(int i, int j, int k) {
	int answer = 0;
	for (int a = i; a <= j; a++)
		for (int b = a; b > 0; b /= 10)
			if (b % 10 == k)
				answer++;
}
*/
#include <string>
#include <vector>

using namespace std;

int solution(int I, int J, int K) {
    int answer = 0;
    string series = "";
    for(int i = I; i <= J; i++) {
        series += to_string(i);
    }
    for(auto s: series) {
        if((s - '0') == K) answer++;
    }
    return answer;
}
