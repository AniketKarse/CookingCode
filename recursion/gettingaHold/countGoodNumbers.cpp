class Solution {
private:
    int power(long long base, long long exp, long long MOD){
        long long ans = 1;
        base = base % MOD;
        while(exp > 0){
            if(exp & 1){
                ans = (ans * base) % MOD;
            }
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        long long MOD = 1e9 + 7;
        long long even = (n+1)/2;
        long long odd = n/2;

        long long evenWay = power(5,even,MOD);
        long long oddWay = power(4,odd,MOD);

        return (evenWay * oddWay) % MOD;
    }
};
