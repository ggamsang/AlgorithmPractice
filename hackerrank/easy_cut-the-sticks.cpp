#include <iostream>
#include <vector>
int find_shortest(std::vector<int>&sticks){
	//find minimum
	int min = 1000;
	for(int i=0;i<sticks.size(); ++i){
		if(sticks[i] !=0 && sticks[i]<min){
			min = sticks[i];
		}
	}
	if(min==1000)min=0;
	return min;
}
int number_sticks_cut(std::vector<int> sticks){
	int shortest=0;
	while(1) {
		shortest = find_shortest(sticks);
		if(shortest ==0) break;
		int cnt =0;
		for(int i=0; i<sticks.size(); ++i) {
			if(sticks[i]==0)
				continue;
			sticks[i] -= shortest;
			if(sticks[i]<0) sticks[i] = 0;
			cnt++;
		}
		std::cout << cnt << std::endl;
	}
	return 0;
}
int main(){
	int n;
	std::cin >> n;
	std::vector<int> sticks(n);
	for(int i=0;i<n;++i){
		std::cin >> sticks[i];}
	return number_sticks_cut(sticks);
}
