#include <bits/stdc++.h>
using namespace std;


void solve(){
    int N,K;
    cin >> N >> K;
   vector<pair<int, pair<int, int>>> customers(N);

    for (int i = 0; i < N; i++) {
        int s, f, p;
        cin >> s >> f >> p;
        customers[i] = {p, {f, s}}; 
    }

    sort(customers.begin(), customers.end());

    int count = 0;
    int last = -1;
    int currentCompartment = -1;

    for (int i = 0; i < N; i++) {
       int p = customers[i].first;
       int f = customers[i].second.first;
       int s = customers[i].second.second;
       
       if(p != currentCompartment){
           currentCompartment = p;
           last = -1;
       }
       
       if(s >= last){
           count++;
           last = f;
       }
    }

    cout << count << "\n";
}


int main() {
	// your code goes here
    int t;cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
