#include <string>
#include <vector>
#define COFFEE_PRICE 5500
using namespace std;

vector<int> solution(int money) {
    vector<int> answer = { 0, 0};
    answer[0] = money / COFFEE_PRICE;
    // answer[1] = money - (money/COFFEE_PRICE*COFFEE_PRICE);
    answer[1] = money % COFFEE_PRICE;
    return answer;
}