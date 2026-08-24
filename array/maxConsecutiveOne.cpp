class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int curr = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
               curr++;
            }
            else{
                maxi = max(maxi,curr);
                curr = 0;
            }
        }
        return maxi>curr?maxi:curr;
    }
};
