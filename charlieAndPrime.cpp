#include <bits/stdc++.h>
using namespace std;

const int MAXI = 5000000;

vector<bool> prime(MAXI + 1, true);
vector<long long> sum(MAXI + 1, 0);

void buildSieve() {
    prime[0] = false;
    prime[1] = false;

    for (int p = 2; p * p <= MAXI; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= MAXI; i += p) {
                prime[i] = false;
            }
        }
    }

    for (int i = 1; i <= MAXI; i++) {
        if (prime[i]) {
            sum[i] = sum[i - 1] + i; 
        } else {
            sum[i] = sum[i - 1];
        }
    }
}

void solve() {
    int m, n;
    cin >> m >> n;
    
    cout << sum[n] - sum[m - 1] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    buildSieve();
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
