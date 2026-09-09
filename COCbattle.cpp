#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    string a, b;
    cin >> a >> b;

    string pattern = b.substr(0, k);

    vector<int> lps(k, 0);
    int len = 0;
    int i = 1;
    
    while (i < k) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    int count = 0;
    i = 0;
    int j = 0;
    
    while (i < n) {
        if (a[i] == pattern[j]) {
            i++;
            j++;
        }
        
        if (j == k) {
            count++;
            j = lps[j - 1];
        }
        else if (i < n && a[i] != pattern[j]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }

    if (count == 0) {
        cout << -1 << "\n";
    } else {
        cout << count << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
