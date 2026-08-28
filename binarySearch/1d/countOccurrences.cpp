class Solution {
public:
    int countOccurrences(vector<int>& nums, int target) {
       int n = nums.size();
        int lb = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        int ub = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(lb == n ) return 0;
        else if(nums[lb] != target)return 0;
        ub--;
        return ub - lb + 1;
    }
};
