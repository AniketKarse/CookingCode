class Solution {
private:
int pass(vector<int>& nums, int div){
    long long sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += 1 + (((long long)nums[i] - 1)/(long long)div);
    }
    return sum;
}
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        long long low = 1;
        long long high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(pass(nums,mid) > threshold){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};
