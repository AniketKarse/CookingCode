class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int temp = x;
        long ans = 0;
        while(temp != 0){
            int ld = temp%10;
            ans = ans*10 + ld;
            temp /= 10;
        }
        if(ans == x) return true;
        return false;
    }
};
