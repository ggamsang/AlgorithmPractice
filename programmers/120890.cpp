#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    
    sort(array.begin(), array.end());
    
    // check out of range
    if (n <= array[0]) return array[0];
    if (n >= array[array.size() -1]) return array[array.size() -1];
    
    int offset = 0;
    while(offset < 100) {
        for(auto a: array) {
            if(n + offset == a) return a;
            if(n - offset == a) return a;
        }
        offset++;
    }
    
    return 0;
}