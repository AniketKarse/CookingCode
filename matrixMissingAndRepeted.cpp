class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& a) {
        map<int, bool> mp;
        int n= a[0].size();
        long long m= n*n;
        long long sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mp[a[i][j]]= !mp[a[i][j]];
                sum+= a[i][j];
            }
        }
        m= (m*(m+1))/2 - sum;
        int x=0;
        for(auto val: mp){
            if(val.second==false){
                x= val.first;
                break;
            }
        }
        m+= x;
        return {x,int(m)};        
    }
};
