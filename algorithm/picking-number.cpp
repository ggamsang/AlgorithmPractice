#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int pickingNumbers(vector <int> a) {
    int ary[2][100] = {0,};
    
    // 최빈값 추출
    std::sort(a.begin(), a.end());
    
    int n = 0;
    ary[0][n] = a[0];
    ary[1][n] = 1;
    
    for(int i = 1; i <= a.size(); i++){
        if(a[i] == ary[0][n]){
            ary[1][n]++;
        }
        else{
            n++;
            ary[0][n] = a[i];
            ary[1][n] = 1;
        }
    }
    int max = 0;
    int max_i = 0;
    for(int i=0; i<n; i++){
        if(max < ary[1][i]){
            max = ary[1][i];
            max_i = i;
        }
    }
    // std::cout << "max: " << max << " is at the " << max_i <<", " << ary[0][max_i]<< std::endl;
 	for(int i=0; i<n; i++)
 		std::cout << ary[0][i] <<", " << ary[1][i] << std::endl;

 	int max_f = ary[1][max_i];
 	for(int i=0; i<n-1; i++)
 	{
 		int dif = abs(ary[0][i]-ary[0][i+1]);
 		int cnt = ary[1][i]+ary[1][i+1];
 		if( dif == 1)
 		{
 			if(max_f < cnt)
 			{
 				max_f = cnt;
 			}
 		}
 	}
 	return max_f;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = pickingNumbers(a);
    cout << result << endl;
    return 0;
}