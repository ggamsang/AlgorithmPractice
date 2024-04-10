#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<int> nums;
    vector<string> ops;
    string token = "";
    
    for(int i = 0; i < my_string.size(); i++) {
        token += my_string[i];
        if(my_string[i] == ' ' || (i == my_string.size()-1) ) {
            if(token == "+ ")
                ops.push_back("+");
            else if(token == "- ")
				ops.push_back("-");
            else 
                nums.push_back(stoi(token));
            token = "";
        }
    }
    answer = nums[0];
	for(int i = 0; i < ops.size(); i++) {
    	answer = ops[i] == "+"
            ? answer + nums[i + 1]
            : answer - nums[i + 1];
        }
    return answer;
}
