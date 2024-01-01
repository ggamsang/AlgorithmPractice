#include <iostream>

//using namespace std;

int solve(int N, int p){
  int f, b; // f:front, b:back
  f = 100000;
  b = 0;
  //if(N==p) return 0;

  if( p % 2 == 0) {
    //even
    f = p / 2;
    b = (N - p) / 2;
    //std::cout << "even\n";
  }
  else {
    f = (p - 1) / 2;
    //std::cout << b << "=("<<N<<"-"<<p<<"-1)/2\n";
    //std::cout << b << "=" << N - (p - 1) << "/2\n";
    //std::cout << b << "=" << (N-(p-1))/2<<"\n";
    b = (N - (p - 1)) / 2;
    //std::cout << "odd\n";
  }

  return f <= b ? f: b;
}

int main() {
  int n;
  std::cin >> n;
  int p;
  std::cin >> p;
  int rslt = solve(n, p);
  std::cout << rslt << std::endl;
  return 0;
}
