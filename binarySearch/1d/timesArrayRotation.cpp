class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        int minx = INT_MAX;
        int idx = mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[mid] >= nums[low]){
                if(minx > nums[low]){
                    minx = nums[low];
                    idx = low;
                }
                low = mid + 1;
            }
            else {
                if(minx > nums[mid]){
                    minx = nums[mid];
                    idx = mid;
                }
                high = mid - 1;
            }
        }
        return idx;
    }
};
