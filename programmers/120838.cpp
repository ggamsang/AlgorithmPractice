#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string solution(string letter) {
    string answer = "";
    string token = "";
    std::vector<std::string> morse = {
        ".-", "-...", "-.-.", "-..", ".", "..-.",
        "--.", "....", "..", ".---", "-.-", ".-..",
        "--", "-.", "---", ".--.", "--.-", ".-.", "...",
        "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
    };
    
    for(int i = 0; i < letter.length(); i++) {
        if(letter[i] != ' ') 
            token += letter[i];
        
        if(letter[i] == ' ' || i == (letter.length() -1) ) {
            
            auto it = std::find(morse.begin(),morse.end(), token);
            
            if(it != morse.end()) {
                
                answer += 'a' + std::distance(morse.begin(), it);
            }
            
            token = "";
            
        }
        
    }
    
    return answer;
}
