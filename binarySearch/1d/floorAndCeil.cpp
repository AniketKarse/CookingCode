class Solution {
private:
    int floor(vector<int> nums,int x){
        int n = nums.size();
        int low=0, high = n-1;
        int mid;
        int floor = -1;
        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[mid] <= x){
                floor = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        if(floor == -1) return -1;
        else return nums[floor];
    }
    int ceil(vector<int> nums, int x){
        int n = nums.size();
        int low=0, high = n-1;
        int mid;
        int ceil = -1;
        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[mid] >= x){
                ceil = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        if(ceil == -1) return -1;
        else return nums[ceil];
    }
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
      return {floor(nums,x),ceil(nums,x)};
    }
};
