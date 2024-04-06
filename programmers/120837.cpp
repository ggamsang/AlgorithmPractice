#include <string>
#include <vector>

using namespace std;

int solution(int hp){
  int answer = (int)hp / 5
    + (int)((hp % 5) / 3)
    + (int)((hp % 5) % 3);
  
    return answer;
}
