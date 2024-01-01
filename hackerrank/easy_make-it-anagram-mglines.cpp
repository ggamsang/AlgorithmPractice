#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#define LENGTH_STRING 10010
int main()
{
  char s1[LENGTH_STRING], s2[LENGTH_STRING];
  std::cin >> s1 >> s2;
  int a[26] = {0};
  for(int i=0; i<strlen(s1); i++)
    a[ s1[i] - 'a']++;
  for(int i=0; i<strlen(s2); i++)
    a[ s2[i] - 'a']--;
  long long int ans = 0;
  for(int i=0; i<26; i++)
    ans += abs(a[i]); /* FILL THE MISSING LINE HERE */
  std::cout << ans << std::endl;
  return 0;
}
