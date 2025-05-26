#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for (int& x : a) cin>>x;
        int ans=0,last=-2;
        for (int i=0;i<n;i++) {
            int x=a[i];
            if (x>last+1) ans++, last=x;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
