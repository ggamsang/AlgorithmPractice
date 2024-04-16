#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    
    vector<int> answer;
    int xrange[2] = { -1 * board[0] / 2, board[0] / 2 };
    int yrange[2] = { -1 * board[1] / 2, board[1] / 2 };
    int current[2] = { 0, };
    for(auto key: keyinput) {
        if(key == "up") {
            if(current[1] + 1 > yrange[1]) continue;
            current[1] += 1;
        }
        else if (key == "down") {
            if(current[1] - 1 < yrange[0]) continue;
            current[1] -= 1;
        }
        else if (key == "left") {
            if(current[0] - 1 < xrange[0]) continue;
            current[0] -= 1;
        }
        else if (key == "right") {
            if(current[0] + 1 > xrange[1]) continue;
            current[0] += 1;
        }
    }
    answer.emplace_back(current[0]);
    answer.emplace_back(current[1]);
    return answer;
}

/*
#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<int> solution(vector<string> keyinput, vector<int> board)
{
    vector<int> answer;
    vector<int> v(2,0); // 좌우 상하
    for(string s : keyinput)
        if     (s=="up"    && v[1]<+board[1]/2) v[1]++;
        else if(s=="down"  && v[1]>-board[1]/2) v[1]--;
        else if(s=="left"  && v[0]>-board[0]/2) v[0]--;
        else if(s=="right" && v[0]<+board[0]/2) v[0]++;
    answer = v;
    return answer;
}
*/
