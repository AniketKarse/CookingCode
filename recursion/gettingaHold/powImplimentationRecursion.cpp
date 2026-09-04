class Solution {
private:
    double powrec(double x, int n){
        if(n == 0) return 1;
        if(n == 1) return x;
        else{
            if(n%2){
                if(n < 0)return x*powrec(x,n+1);
                else return x*powrec(x,n-1);
            }else {
              return powrec(x*x,n/2);
            }
        double ans;
        return ans;
        }
    }
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        ans = powrec(x,n);

        if(n < 0){
            ans = (double)(1.0)/(double)(ans);
        }
        return ans;
    }
};
