class Solution {
public:
    bool search(vector<int>& nums, int x) {
        int n = nums.size();
        int low = 0, high = n-1;
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[mid] == x) return true;
            if(nums[mid] == nums[low] && nums[low] == nums[high]){
                high = high-1;
                low = low+1;
                continue;
            }
            if(nums[low] <= nums[mid]){
                if(x >= nums[low] && x <= nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(x >= nums[mid] && x <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};
