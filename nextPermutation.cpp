class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakPoint = nums.size() - 1;
        while(breakPoint > 0 && nums[breakPoint-1] >= nums[breakPoint]){
            breakPoint--;
        }

        if(breakPoint == 0){
            reverse(nums.begin(), nums.end());
            return;
        }

        int secondSwap = nums.size() - 1;
        while(secondSwap>= breakPoint && nums[secondSwap] <= nums[breakPoint-1]){
            secondSwap--;
        }

        swap(nums[breakPoint-1], nums[secondSwap]);
        reverse(nums.begin() + breakPoint, nums.end());
    }
};
