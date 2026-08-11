class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long n = nums.size();
        long long maxim = INT_MIN,sum = 0;
        for(long long i=0;i<n;i++){
            sum += nums[i];

            if(sum > maxim){
                maxim = sum;
            }

            if(sum < 0){
                sum = 0;
            }
            
        }
        return maxim;
    }
};
