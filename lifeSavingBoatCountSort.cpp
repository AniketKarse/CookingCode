class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boat = 0;
        vector<int> count(limit+1, 0);
        for(int weight : people){
            count[weight]++;
        }
        int l = 1;
        int r = limit;
        while(l <= r){
            while(l <= r && count[l] == 0)l++;
            while(l <= r && count[r] == 0)r--;

            if(l > r)break;

            boat++;
            count[r]--;
            if(count[l] > 0 && l+r <= limit)count[l]--;
        }
        return boat;
    }
};
