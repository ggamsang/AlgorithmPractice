#include <iostream>
#include <vector>

int f(std::vector<int>& ary, int x){
  int sz = ary.size();
  for(int i=0;i<sz;++i) {
    if(ary[i]==x){
      return i+1;
    }
  }
  return -1;
}

int main(){
  int n;
  std::cin >> n;

  std::vector<int> ary(n);
  for(int i=0;i<n;i++)
    std::cin >> ary[i];

  for(int x=1;x<=n;x++)
    std::cout << f(ary, f(ary, x)) << std::endl;

  return 0;
}
