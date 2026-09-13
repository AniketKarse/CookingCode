class Solution {
public:
    int maxHeight(vector<vector<int>>& cubs) {
        int n = cubs.size();
        for(int i = 0; i < n; i++){
            sort(cubs[i].begin(), cubs[i].end());
        }
        sort(cubs.begin(),cubs.end());
        vector<int> dp(n);
        int max_height = 0;

        for(int i=0; i<n; i++){
            dp[i] = cubs[i][2];
            for(int j=0;j<i;j++){
                if(cubs[j][0] <= cubs[i][0] && cubs[j][1] <= cubs[i][1] && cubs[j][2] <= cubs[i][2]){
                    dp[i] = max(dp[i] , dp[j] + cubs[i][2]);
                }
            }
            max_height = max(max_height,dp[i]);
        }
        return max_height;

    }
};
