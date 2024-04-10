#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {

    for(auto &c: my_string)
        c = (c >= 'A' && c <= 'Z') ? 'a' + (c - 'A') : c;
    
    sort(my_string.begin(), my_string.end());
    
    return my_string;
}
