#include <iostream>
#include <string>

long Lilahs_infinite(std::string s, long n){
	long cnt = 0;
	char first = 'a';// s[0];
	//std::cout << "s length: " << s.length() << std::endl;
	for(int i = 1; i<=s.length(); ++i){
	  if(first == s[i-1]){
	    if(n % s.length() == 0){
	      cnt += n/s.length();
	    }else{
	      cnt += (long)n/s.length();
	      long tmp = (long)n/s.length()*s.length();
	      cnt += (long)(n-tmp)/i;
	     }
	  }
	}
	return cnt;
}
long redo(std::string s, long n){
  long rst = 0;
  int count_a = 0;

  count_a = std::count(s.begin(),s.end(),'a');

  rst = count_a * (n/s.size());

  for(int i=0;i<n%s.size();++i){
    if(s[i]=='a') rst++;
  }
  return rst;
}
int main(int argc, char* argv[]){
	std::string s;
	long n =0;
	std::cin >> s >> n;
	//std::cout << Lilahs_infinite(s, n) << std::endl;
	std::cout << redo(s, n) << std::endl;
	return 0;
}
