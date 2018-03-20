#include <iostream>

int findDigits(int n){
  int cnt=0, N = n;
  
  while(N){
    int tmp = N%10;
    N=(int)(N/10);
    if(tmp==0) continue;
    if(n%tmp==0) cnt++;
  }
  
  return cnt;
}

int main(){
  int t;
  std::cin >> t;
  for(int i=0; i<t; ++i){
    int num;
    std::cin >> num;
    std::cout << findDigits(num) << std::endl;
  }
  return 0;
}
