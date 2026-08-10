class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans={{1}};
        
        
        for(int i = 1;i<numRows;i++){
            vector<int> temp;
            temp.push_back(1);
            int n = ans.back().size();
            for(int j = 0;j<n-1;j++){
                temp.push_back(ans.back()[j]+ans.back()[j+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);

        }
        return ans;
    }
};
