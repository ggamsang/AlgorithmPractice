#include <string>
#include <vector>

#define UNIT_MANWON 10000

using namespace std;

int solution(int price) {
    int answer = price/UNIT_MANWON;
    if( answer < 1)  return price;
    if( answer >= 50) return price*0.8;
    if( answer >= 30) return price*0.9;
    if( answer >= 10) return price*0.95;
    return price;
}