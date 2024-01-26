#include <string>
#include <vector>
#include <unordered_map>
// #include <iostream>

using namespace std;

int solution(vector<int> array) {

    if(array.size() == 1){
        return array[0];
    }

    std::unordered_map<int, int> hashmap;
    for (int value: array){
        hashmap[value]++;
    }
    // for (int i=0;i<hashmap.size();++i){
    //     std::cout << hashmap[i] << " ";
    // }
    // hashmap (1:1, 2:1, 3:3, 4:1) //
    int max = -1;
    for(int i = 0; i < hashmap.size(); i++) {
        if(max < hashmap[i]) {
            max = hashmap[i];
        }
    }
    int answer = -1;
    for(int i = 0; i < hashmap.size(); i++){
        if(max == hashmap[i]){
            if(answer != -1){
                return -1;
            }
            answer = i;
        }
    }
    return answer;
}
