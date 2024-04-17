#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    return (M * N) -1;
}

/*

int solution(int M, int N) {
    if(M == 1 && N == 1) return 0;

    if(M < N ) return solution(M, N/2) + solution(M, N-N/2) +1;
    else return solution(M/2, N) + solution(M-M/2, N) +1;
}
*/
