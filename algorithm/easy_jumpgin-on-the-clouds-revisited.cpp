#include <iostream>
#include <vector>

int jumping(std::vector<int>c, int k){
  int E = 100;
  int idx = 0;
  int n = (int)c.size();
  while(1){
    
    //
    if(c[idx]==1) E-=2;
    
    //jumping
    idx=(idx+k)%n;
    E--;
    
    if(idx==0) break;
  }
  return E;
}

int main() {
  int n, k;

  std::cin >> n >> k;

  std::vector<int> clouds(n);
  for(int i=0;i<n;++i)
    std::cin >> clouds[i];

  std::cout << jumping(clouds, k) << std::endl;
  return 0;
}
