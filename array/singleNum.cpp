class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int j = nums[0];
        for(int i=1;i<n;i++){
            j ^= nums[i];
        }
        return j;
    }
};
