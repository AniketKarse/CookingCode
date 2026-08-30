class Solution {
private:
    long long helper(long long x,int y,int m){
        long long ans = x;
        y--;
        while(y--){
            ans = ans*x;
            if(ans > m){
                return -1;
                break;
            }
        }
        return ans;
    }
public:
  int NthRoot(int n, int m) {
       int low = 1;
       int high = m;
       long long ans = -1;
       while(low <= high){
        long long mid = low + (high - low)/2;
        long long root = helper(mid,n,m);
        if(root == -1)high = mid -1 ;
        else if(root == m){
            ans = mid;
            break;
        } 
        else if(root < m){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
       }
       return ans;
    }
};
