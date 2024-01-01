#include <string>
#include <iostream>

std::string AD(std::string s, std::string t, int k) {
  
  int i=0;
  for(int ii=0; ii<(s.size()>t.size()?t.size():s.size());++ii){
    if(s[ii]!=t[ii])break;
    i=ii;
  }
  //std::cout << i << ","<<s.size()<<","<<t.size()<<std::endl;
  //std::cout << s.size()-(i+1) << ", "<<t.size()-(i+1) << std::endl;

  int del = s.size()-(i+1);
  int add = t.size()-(i+1);
  if((add+del)>k){
    return "No";
  }
  if(k>=s.size()+t.size() || ((k-(del+add))%2)==0){
      return "Yes";
  }
  return "No";  
  //if((s.size() - (i+1))+(t.size()-(i+1))<=k)
  //  return "YES";
  //return "NO";
}
//std::string another(std::string s, std::string t, int k){
//  
//}

int main(){
  
  int k;

  std::string s, t;
  
  std::cin >> s >> t >> k;

  std::cout << AD(s, t, k) << std::endl;

  return 0;
}
