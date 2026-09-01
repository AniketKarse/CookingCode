class Solution {
private:
long long hour(vector<int>& nums, const int hourly){
    long long totalhours = 0;
    for(int i =0;i<nums.size();i++){
        // totalhours += ceil((double)nums[i]/(double)hourly);
        totalhours += 1 + ((long long)nums[i] - 1) / (long long)hourly;
    }
    return totalhours;
}
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            int mid = low + (high - low)/2;
            long long totalhours = hour(nums,mid);
            if(totalhours <= h){
                high = mid -1;
            }
            else low = mid + 1;
        }
        return low;
    
    }
};
