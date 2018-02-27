#include <iostream>

int main()
{
  int n = 0, k = 0, b = 0,
    c[100000] = {0,};
  
  std::cin >> n >> k;

  for ( int i=0; i<n; i++)
    std::cin >> c[i];
  std::cin >> b;

  int total = 0;
  for ( int i=0; i<n; i++)
    if(i != k)
      total += c[i];

  if(total/2 == b)
    std::cout << "Bon Appetit" << std::endl;
  else
    std::cout << b - (total / 2) << std::endl;

  return 0;
}
