class Solution {
private:
    void pararec(int ind, string s, int open, int close, vector<string>& ans, int n ){
        if(open > n) return;
        if(open + close == 2*n && open == close){
            ans.push_back(s);
            return;
        }
        pararec(ind+1, s + "(", open + 1, close, ans, n);
        if(open > close){
            pararec(ind + 1, s + ")", open, close + 1, ans, n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        //your code goes here
        vector<string> ans;
        pararec(1,"(",1,0,ans,n);
        return ans;
    }
};
