#include <iostream>
#include <vector>

std::vector <int> circular_rotation(std::vector<int>a, std::vector<int>m, int k)
{
  int s = (int)a.size();
  std::vector<int> tmp(s);
  std::fill(tmp.begin(), tmp.end(), 0);

  if(s == k) {
    for(int i=0;i<(int)m.size();++i){
      m[i] = a[m[i]];
    }
    return m;
  }

  for(int i=0; i<s; ++i) {
    tmp[(i+k)%s]=a[i];
  }
  for(int i=0;i<(int)m.size();++i){
    m[i] = tmp[m[i]];
  }
  return m;
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
