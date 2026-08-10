class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> imap;
        unordered_set<int> jmap;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    imap.insert(i);
                    jmap.insert(j);
                }
            }
        }
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(imap.contains(i) || jmap.contains(j)){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
