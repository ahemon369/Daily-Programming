#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,cnt=0;
    string s; cin>>n>>k>>s;
    for (char c : s) {if (c=='0') cnt++;}
    int ans=n-cnt;
    int sum=n/2;

    int diff=abs(ans-sum);
    if (k>=diff && k<=sum && (k-diff)%2==0) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) solve();
    return 0;
}
