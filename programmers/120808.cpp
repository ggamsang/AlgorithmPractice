#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n1, int d1, int n2, int d2) {
    vector<int> answer;
    int n = n1 * d2 + n2 * d1;
    int d = d1 * d2;
    int max = 1;
    for (int i =1; i <= n; i++) {
        if(n%i == 0 && d%i== 0){
            max = i;
        }
    }
    answer.push_back(n/max);
    answer.push_back(d/max);
    return answer;
}
