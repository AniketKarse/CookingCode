#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> nums = {4,4,2,5,1,5,1,5,2,6,7};
  unordered_set<int> mp;
  for(int num : nums){
    mp[nums]++;
  }
  //if we want to return the max frequency element
  sort(nums.begin(),nums.end(), [&](int a, int b){
    if(mp[a] == mp[b])
      return a < b;
    return mp[a] > mp[b];
   });

  //if we want to return the min frequenct element

  sort(nums.begin(), nums.end(), [&](int a, int b) {
    if(mp[a] == mp[b]) 
      return a > b;
    return mp[a] < mp[b];
  });  
}
