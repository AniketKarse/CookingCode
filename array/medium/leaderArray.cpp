class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int n = nums.size();
      int max = INT_MIN;
      vector<int> leader;
      for(int i=n-1;i>=0;i--){
        if(nums[i] > max){
            max = nums[i];
            leader.push_back(max);
        }
      }
      reverse(leader.begin(),leader.end());
      return leader;
    }
};
