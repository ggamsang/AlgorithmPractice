#include <iostream>
#include <vector>

std::vector <int> circular_rotation(std::vector<int>a, std::vector<int>m, int k)
{
  int s = (int)a.size();
  if(s != k){
    int idx = 0;
    int init=a[idx];
    for(int i=0; i<s-1; ++i){
      int next = (idx+k==s?s-1:(idx+k)%s); 
      a[idx]=a[next];
      std::cout << "idx: "<<idx << " next: "<< next<< std::endl;
      idx = next;
    }
    a[(idx+k==s?s-1:(idx+k)%s)]=init;
  }
  
  for(int i=0; i<(int)m.size();++i){
    m[i] = a[m[i]];
  }
  return m;
  // std::vector<int> ary((int)a.size());
  // while(k--)
  // {
  //   int last = a[a.size()-1];
  //   for(int i=a.size()-1; i>0;i--)
  //   {
  //     a[i] = a[i-1];
  //   }
  //   a[0] = last;
  // }
  // for(int i=0; i<(int)m.size(); ++i)
  //   m[i] = a[m[i]];
  // return m;
}

int main(int argc, char* argv[])
{
  int n, k, q;
  std::cin >> n >> k >> q;
  std::vector<int> a(n);
  for(int i=0; i<n;i++)
    std::cin >> a[i];
  std::vector<int> m(q);
  for(int i=0; i<q;i++)
    std::cin >> m[i];
  std::vector<int> rst = circular_rotation(a,m,k);
  for(int i=0; i<(int)rst.size();i++)
    std::cout << rst[i] << (i!=rst.size() -1?"\n":"");
  std::cout << std::endl;
  return 0;
}
