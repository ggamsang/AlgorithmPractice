#include <iostream>
#include <vector>
#include <cmath>

int howmany_squares_in(int A, int B){
  int squares=0;
  std::vector<int> twos;
  for(int n=1;;) {
    twos.push_back(n*n);
    if(n*n>=pow(10,9)) break;
    else n++;
  }
  int n = 0;
  for(int i=0;;i++){
    n = twos[i];
    if(n >B) break;
    if(A<=n && n<=B) squares++;
  }
  return squares;
}

int main(){
  int t, A, B;
  std::cin >> t;
  for(int i=0;i<t;i++){
    std::cin >> A >> B;
    std::cout << howmany_squares_in(A, B) << std::endl;
  }
  return 0;
}
