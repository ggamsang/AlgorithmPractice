#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(int a, int b) {
    return abs(a) < abs(b);
}
void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
void printAry(const vector<int> ary) {
  for(auto a: ary)
    cout << a << " ";
  cout << endl;
}
// vector<int> solution(vector<int> nums, int N) {
//     vector<int> answer;
//     for(auto &n: nums) n -=N;
//     printAry(nums);
//     sort(nums.begin(), nums.end(), cmp);
//     printAry(nums);
//     for(int i = 0; i < nums.size()-1; i++)
//         if(nums[i] < 0 &&  abs(nums[i]) == abs(nums[i+1]))
//           swap(nums[i], nums[i+1]);
//     printAry(nums);
//     for(auto n:nums)
//         answer.emplace_back(n + N);
//     printAry(answer);
//     return answer;
// }
bool cmp2(int a, int b) {
  if(abs(a)==abs(b)) return a > b;
  return b < a;
}
vector<int> solution(vector<int> nums, int N) {
  for(auto&n:nums)n-=N;
  sort(nums.begin(), nums.end(), cmp2);
  for(auto&n:nums)n+=N;
  return nums;
}

int main() {
  vector<int> ary = {10, 2};
  vector<int> answer = solution(ary, 6);
  printAry(answer);
  return 0;
}
