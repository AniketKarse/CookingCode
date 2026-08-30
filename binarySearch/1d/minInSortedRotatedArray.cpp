class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        int mid;
        int minx = nums[0];
        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[mid] >= nums[low]){
                minx = min(minx,nums[low]);
                low = mid + 1;
            }
            else{
                minx = min(minx,nums[mid]);
                high = mid - 1;
            }
            
        }
        return minx;
    }
};
