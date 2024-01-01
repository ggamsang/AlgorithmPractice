#include <iostream>
#include <vector>
int prisoner(int n, int m, int s) {
  return (m%n+s-1)%n==0?n:(m%n+s-1)%n;
}
int main(int argc, char* argv[]) {
  int t, n, m, s;
  std::cin >> t;
  for(int i=0; i<t; ++i)
    {
      std::cin >> n >> m >> s;
      std::cout << prisoner(n, m, s) <<std::endl;
    }
  return 0;
}
