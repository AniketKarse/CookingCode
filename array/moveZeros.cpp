class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int lastNon = 0;
        for(int cur = 0;cur < n;cur++){
            if(nums[cur] != 0){
                swap(nums[lastNon++],nums[cur]);
            }
        }
    }
};
