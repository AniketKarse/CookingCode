class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        int ub = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(lb == n ) return{-1,-1};
        else if(nums[lb] != target)return{-1,-1};
        ub--;
        return {lb,ub};
    }
};
