class Solution {
private:
    double powrec(double x, long long n){
        if(n == 0) return 1;
        if(n == 1) return x;
        else{
            if(n%2){
                return x*powrec(x,n-1);
            }else {
              return powrec(x*x,n/2);
            }
        }
    }
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        if(nn < 0) nn = -1 * nn;
        ans = powrec(x,nn);

        if(n < 0){
            ans = (double)(1.0)/(double)(ans);
        }
        return ans;
    }
};
