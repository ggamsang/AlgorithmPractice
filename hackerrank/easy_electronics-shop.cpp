#include <iostream>
#include <vector>

int getMoneySpent(std::vector<int> kbds, std::vector<int> mouses, int money){
  int max = -1;

  for(int i=0; i<kbds.size(); i++) {
      for(int j=0; j<mouses.size(); j++) {
	int tmp_cost = kbds[i] + mouses[j];
	if(tmp_cost <= money && tmp_cost > max)
	  {
	    max = tmp_cost;
	  }
	}
    }
  return max;
}

int main(){
  int s, n, m;

  std::cin >> s >> n >> m;

  std::vector<int> kbds(n);
  std::vector<int> mouses(m);

  for(int i = 0; i < n; i++){
    std::cin >> kbds[i];
  }
  for(int i=0;i<m;i++){
    std::cin >> mouses[i];
  }

  std::cout << getMoneySpent(kbds, mouses, s) << std::endl;
 return 0;
}
