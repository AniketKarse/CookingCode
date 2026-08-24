class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector<int> temp;
        if(n == 1) return;
        for(int i=0;i<n-k;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<k;i++){
            nums[i] = nums[i+n-k];
        }
        int j = 0;
        for(int i=k;i<n;i++){
            nums[i] = temp[j++];
        }
    }
};
