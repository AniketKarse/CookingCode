class Solution {
public:
#define ll long long
    void sortColors(vector<int>& nums) {
        int N = nums.size();
        ll countZ =0,countO=0,countT=0;
        for(int i = 0;i<N;i++){
            if(nums[i] == 0) countZ++;
            if(nums[i] == 1) countO++;
            if(nums[i] == 2) countT++;
        }
        nums.clear();
        while(countZ--)nums.push_back(0);
        while(countO--)nums.push_back(1);
        while(countT--)nums.push_back(2);
    }
};
