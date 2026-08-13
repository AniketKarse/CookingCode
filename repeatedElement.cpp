class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto val:mp){
            if(val.second > 1) return val.first;
        }
        return 0;
    }
};
