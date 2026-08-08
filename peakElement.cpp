int findPeakElement(const vector<int>& nums) {
        // write your code here
        int len = nums.size();
        if(len == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[len-1] > nums[len-2]) return len-1;
        int low = 0,high = len - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
            if(nums[mid] > nums[mid -1]){
                low = mid;
            }
            else {
                high = mid;
            }
        }
        return low;
      
    }
