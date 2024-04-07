#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(int i = 0; i < my_string.size()/2; i++){ 
        char t = my_string[i];
        my_string[i] = my_string[my_string.size()-1-i];
        my_string[my_string.size()-1-i] = t;
    }
    return my_string;
}