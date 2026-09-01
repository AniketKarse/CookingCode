class Solution {
private:
int possible(vector<int>& bloomDay, long long day, int m, int k){
    long long count = 0;
    long long nboq = 0;
    for(int i = 0;i<bloomDay.size();i++){
        if(bloomDay[i] <= day){
            count++;
        }else{
            nboq += (count/k);
            count = 0;
        }
    }
    
    nboq += (count/k);
    cout << nboq << endl;
    return nboq;
}
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = m * 1LL * k * 1LL;
        if(n < val) return -1;
        long long low = *min_element(bloomDay.begin(),bloomDay.end());
        long long high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(possible(bloomDay,mid,m,k) >= m){
                
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }
        return low;

    }
};
