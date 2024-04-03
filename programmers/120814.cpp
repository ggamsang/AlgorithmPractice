#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    return (int)(n/7) + (int)(n % 7 != 0);
}