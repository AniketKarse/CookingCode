class Solution {
private:
    int solve(vector<vector<int>>& memo, int k, int n){
        if(n == 0 || n == 1) return n;
        if(k == 1) return n;

        if(memo[k][n] != -1) return memo[k][n];

        int low = 1;
        int high = n;
        int min_drops = INT_MAX;

        while(low <= high){
           int mid = low + (high - low)/2;

            int egg_breaks = solve(memo,k-1,mid - 1);
            int egg_survives = solve(memo,k,n - mid);

            int worst = 1 + max(egg_breaks,egg_survives);
            min_drops = min(min_drops, worst);

            if(egg_breaks > egg_survives){
                high = mid - 1;
            }else if(egg_survives > egg_breaks){
                low = mid + 1;
            }else{
                break;
            }
            
        }
        return memo[k][n] = min_drops;
    }
public:
    int superEggDrop(int k, int n) {
        vector<vector<int>> memo(k+1, vector<int>(n+1,-1));
        return solve(memo,k,n);
    }
};
