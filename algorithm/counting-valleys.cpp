#include <iostream>

int countingValleys(int n, std::string s)
{
  int cnt_valley = 0;
  int this_level = 0;
  //std::cout << "s:" << s << std::endl;  
  for(int i=0; i<n; i++)
    {
      if(s[i] == 'U')
	this_level++;
      if(s[i] == 'D')
	this_level--;
      //std::cout <<"this_level: "<< this_level << std::endl;
      if(this_level == -1 && s[i] == 'D') 
	cnt_valley++;
    }
  return cnt_valley;
}

int main()
{
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  int result = countingValleys(n, s);
  std::cout << result << std::endl;
  return 0;
}
