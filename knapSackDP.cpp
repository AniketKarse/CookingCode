#include <bits/stdc++.h>
using namespace std; 


int branch_and_bound(int n, int wmax, vector<pair<int,int>> items) {
    // Write your solution here
    vector<int> dp(wmax + 1, 0);

    for (int i = 0; i < n; i++) {
        int weight = items[i].first;
        int value = items[i].second;
        for(int j = wmax;j >=weight;j--){
            dp[j]= max(dp[j],dp[j - weight]+ value);
        }
    }
    
    return dp[wmax];
    
}

int main() {
    int n; cin >> n;
    int wmax; cin >> wmax;
    vector<pair<int,int>> items(n);
    for(int i = 0; i < n; i++) {
        cin >> items[i].first >> items[i].second;
    }
    cout << branch_and_bound(n, wmax, items);

    return 0;
}
