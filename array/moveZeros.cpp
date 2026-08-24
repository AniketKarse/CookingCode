class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int cur = 0, lastNon = 0;cur < n;cur++){
            if(nums[cur] != 0){
                swap(nums[lastNon++],nums[cur]);
            }
        }
    }
};
