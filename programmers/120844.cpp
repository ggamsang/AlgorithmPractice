#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
  vector<int> answer;
  for (int n = 0; n < numbers.size(); n++) {
    int idx = n + (direction == "right" ? -1 : 1);
    if (idx == -1) idx = numbers.size() -1;
    else idx %= numbers.size();
    answer.push_back(numbers[idx]);
  }
  return answer;
}
