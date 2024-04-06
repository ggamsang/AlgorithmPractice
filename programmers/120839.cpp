#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
  string answer = "";
  for ( auto h: rsp) {
    if (h == '2') answer += '0';
    if (h == '0') answer += '5';
    if (h == '5') answer += '2';
  }
  return answer;
}
