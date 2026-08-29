class Solution {
private:
    int peak(vector<int>& nums){
        int n = nums.size();
        int low=0;
        int high = n-1;
        int mid;
        if(n == 1) return 0;
        while(low < high){
            mid = low + (high-low)/2;
            cout << low << mid << high<<endl;
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
    int bs(vector<int>& nums,int x,int low, int high){
        int n = nums.size();
        int mid;
        int ans = -1;
        while(low <= high){
            mid = low+(high - low)/2;
            cout << low << mid << high << endl;
            if(nums[mid] == x)return mid;
            else if(nums[mid] > x){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int peakele = peak(nums);
        cout << peakele << endl;
        int ans1 = -1,ans2 = -1;
        ans1 = bs(nums,target,0,peakele-1);
        ans2 = bs(nums,target,peakele,n-1);
        cout << ans1 << " " << ans2;
        if(ans1 == -1 && ans2 == -1) return -1;
        else{
            return max(ans1,ans2);
        }
        return -1;
    }
};
