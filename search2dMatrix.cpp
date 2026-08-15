class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size()-1;
        int x;
        while(low <= high ){
            int mid = (high - low)/2 + low;
            if(target == matrix[mid][0])return true;
            else if(target < matrix[mid][0]){
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        x = high;
        if(x<0) return false;
        low = 0;
        high = matrix[0].size() - 1;
        while(low <= high){
            int mid = (high - low)/2 + low;
            if(target == matrix[x][mid])return true;
            else if(target < matrix[x][mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }
};
