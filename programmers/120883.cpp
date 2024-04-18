#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string id = id_pw[0];
    string pw = id_pw[1];
    
    for(auto user: db) {
        string ID = user[0];
        string PW = user[1];
        if(ID == id)
            if(pw == PW)
                return "login";
            else
                return "wrong pw";
    }
    return "fail";
}
