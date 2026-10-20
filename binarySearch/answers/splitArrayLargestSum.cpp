class Solution {
private: 
    bool isValid(const vector<int>& nums, int maxSum, int k){
        int currSum = 0;
        int subarrayCount = 1;

        for(int num:nums){
            if(currSum + num > maxSum){
                subarrayCount++;
                currSum = num;
            }else{
                currSum += num;
            }
        }
        return subarrayCount <= k;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);

        int minLargestSum = high;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(isValid(nums, mid, k)){
                minLargestSum = mid;
                high = mid - 1;
            }else {
                low = mid + 1;
            }
        }
        return minLargestSum;
    }
};
