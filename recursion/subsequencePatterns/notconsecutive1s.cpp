class Solution {
private:
    vector<string> ans;
    void backTrack(string s, int n, char prev){
        if(s.length() == n){
            ans.push_back(s);
            return;
        }
        backTrack(s + "0",n,'0');

        if(prev != '1'){
            backTrack(s+"1",n,'1');
        }
    }
public:

    vector<string> generateBinaryStrings(int n) {
        // Your code goes here
        ans.clear();
        backTrack("",n,'0');
        return ans;


    }
};
