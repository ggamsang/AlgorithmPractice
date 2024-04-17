#include <string>
#include <vector>
#include <sstream>
using namespace std;

void removeEmptySpace(string& poly) {
    string t = poly;
    poly = "";
    for (auto p : t) {
        if (p != ' ')
            poly += p;
    }
}

vector<string> split(const string& poly) {
    vector<string> tokens;
    string token;
    istringstream iss(poly);
    while (getline(iss, token, '+'))
        tokens.emplace_back(token);
    return tokens;
}

int extractCoefficient(const string& term) {
    size_t pos = term.find('x');
    if (pos != string::npos) {
        string coeff_part = term.substr(0, pos);
        if (coeff_part.empty() || coeff_part == "+")
            return 1;
        else if (coeff_part == "-")
            return -1;
        else
            return stoi(coeff_part);
    }
    return stoi(term);
}

string solution(string poly/*polynomial*/) {
    string answer = "";
    removeEmptySpace(poly);
    vector<string> aryPoly = split(poly);
    int x1 = 0, x0 = 0;
    for (auto a : aryPoly)
        if (a.find('x') != string::npos)
            x1 += extractCoefficient(a);
        else
            x0 += extractCoefficient(a);
    
    answer
        = (x1 > 1 ? to_string(x1) + "x" : x1 == 1 ? "x" : "")
        + (x1 && x0 ? " + " : "")
        + (x0 ? to_string(x0) : "");
    return answer;
}
