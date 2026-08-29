class Solution {
private:
    int bs(vector<int>& nums,int x,int low, int high){
        int n = nums.size();
        int mid;

        while(low <= high){
            mid = low+(high - low)/2;
            if(nums[mid] == x)return mid;

            if(nums[low] <= nums[mid]){
                if(x >= nums[low] && x <=nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(x >= nums[mid] && x <=nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        return bs(nums,target,0,n-1);
    }
};
