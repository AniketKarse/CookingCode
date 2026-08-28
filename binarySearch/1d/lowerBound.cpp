class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        int ans = n;
        while(low <= high){
            mid = low + (high-low)/2;
            if(nums[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
