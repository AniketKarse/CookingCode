class Solution {
public:
    int countPrimes(int n) {
        vector<char> is_prime(n, 1);

        if (n <= 2) return 0;
        int count = n/2;

        is_prime[0] = is_prime[1] =  false;
        for(long long p = 3;p*p<n;p += 2){
            if(is_prime[p]){
                for(long long i = p*p;i<n;i += 2*p){
                    if(is_prime[i]){
                        is_prime[i] = 0;
                        count--;
                    }
                }
            }
        }

      
        return count;
    }
};
