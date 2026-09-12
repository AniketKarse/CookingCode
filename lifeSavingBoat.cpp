class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int l = 0,r = n - 1;
        int num = 0;
        while(l <= r){
            if(people[l] + people[r] <= limit){
                num++;
                l++;
                r--;
            }
            else{
                num++;
                r--;
            }
        }
        return num;
    }
};
