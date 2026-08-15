class Solution {
public:
    double myPow(double x, int n) {
        // if(n<0) x = 1/x;
        double ans = recPow(x,n);
        if(n < 0) return 1/ans;
       return ans;
    }

    double recPow(double x, int n){
        if(n == 0) return 1.0;
        if(n == 1) return x;
        else{
            if(n%2){
                if(n<0) return x*recPow(x,n+1);
                return x*recPow(x,n-1);
            }
            else{
                return recPow(x*x,n/2);
            }
        }
        double ans;
        return ans;
    }

};
