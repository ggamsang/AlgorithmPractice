#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int balls, int share) {
    long long unsigned int answer = 1;
    vector<int> N, NM;
    
    for(int n = balls; n > share; --n)
        N.push_back(n);
    
    for(int nm = (balls-share); nm > 1; --nm)
        NM.push_back(nm);
    
    // for(auto n:N) std::cout << n << " "; std::cout << std::endl;
    // for(auto nm:NM) std::cout << nm << " "; std::cout << std::endl;
    
    for(auto &n:N)
        for(auto &nm:NM)
            if(n % nm == 0) {
                n /= nm;
                nm =1;
            };
    
    for(auto n:N) answer *= n;
    for(auto nm:NM) answer /= nm;
    // for(auto n:N) std::cout << n << " "; std::cout << std::endl;
    // for(auto nm:NM) std::cout << nm << " "; std::cout << std::endl;
    
    return answer;
}
