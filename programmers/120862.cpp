#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1e9;
    for(int i = 0; i < numbers.size(); i++) {
        for(int j = i; j < numbers.size(); j++){
            int IJ = numbers[i] * numbers[j];
            if(IJ > answer && i != j) {
                answer = IJ;
            }
        }
    }
    return answer;
}
