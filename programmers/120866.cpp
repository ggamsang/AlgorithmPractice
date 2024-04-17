#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkbound(int x, int sz)
{
    if(x < 0) return false;
    if(x == sz) return false;
    return true;
}

void expose(vector<vector<int>>& board, vector<int> xy) {
    int x = xy[0];
    int y = xy[1];
    int sz = board.size();
    // 1 2 3
    // 4 - 5
    // 6 7 8
    if(checkbound(x-1, sz) && checkbound(y-1, sz) && board[y-1][x-1] == 0) board[y-1][x-1]= 2;
    if(checkbound(x+0, sz) && checkbound(y-1, sz) && board[y-1][x+0] == 0) board[y-1][x+0]= 2;
    if(checkbound(x+1, sz) && checkbound(y-1, sz) && board[y-1][x+1] == 0) board[y-1][x+1]= 2;

    if(checkbound(x-1, sz) && checkbound(y+0, sz) && board[y+0][x-1] == 0) board[y+0][x-1]= 2;
    if(checkbound(x+1, sz) && checkbound(y+0, sz) && board[y+0][x+1] == 0) board[y+0][x+1]= 2;

    if(checkbound(x-1, sz) && checkbound(y+1, sz) && board[y+1][x-1] == 0) board[y+1][x-1]= 2;
    if(checkbound(x+0, sz) && checkbound(y+1, sz) && board[y+1][x+0] == 0) board[y+1][x+0]= 2;
    if(checkbound(x+1, sz) && checkbound(y+1, sz) && board[y+1][x+1] == 0) board[y+1][x+1]= 2;
}

int solution(vector<vector<int>> board)
{
    int answer = 0;
    vector<vector<int>> mines;
    
    for(int y = 0; y < board.size(); y++)
        for(int x = 0; x < board[y].size(); x++)
            if(board[y][x] == 1)
                mines.emplace_back(vector<int>{x, y});
    
    for(auto m: mines)
        expose(board, m);
    
    for(auto row:board){
        for(auto col:row){
            if(col == 0)
                answer++;
            cout << col << " ";
        }cout << endl;
    }
    return answer;
}

int main(int argc, char* argv[]) {
    vector<vector<vector<int>>> board = {
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0}
        },
        {
            {1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1}
        }
    };
    
    cout << solution(board[0]) << 16 << endl;
    cout << solution(board[1]) << 13 << endl;
    cout << solution(board[2]) << 0 << endl;

    return 0;
}
