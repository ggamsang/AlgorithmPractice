#include <iostream>
#include <vector>
#include <cmath>
int x_reverse(int x)
{
  int X=0;
  int tmp = 0;
  while(x>0)
    {
      tmp = x%10;
      X = X*10 + tmp;
      x = (int)x/10;
    }
  return X;
}
int beautiful_lily(int i, int j, int k)
{
  int cnt = 0;
  for(int x=i; x<=j; x++)
      if( abs(x-x_reverse(x))%k==0) cnt++;
  return cnt;
}
int main()
{
  int i, j, k;

  std::cin >> i >> j >> k;

  std::cout << beautiful_lily(i, j, k) << std::endl;

  return 0;
}
