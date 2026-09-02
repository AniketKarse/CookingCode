#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;cin >> n;
    vector<unsigned long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n >= 130) {
        cout << "Yes" << endl;
        return 0;
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if((a[i] ^ a[j] ^ a[k] ^ a[l]) == 0){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;
}
