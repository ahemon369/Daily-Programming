#include <iostream>
using namespace std;

int solve(int n, int m, int k) {
    int t=n*m,ans=0;
    if (k==0) return t;
    if (k>t) return 0;
    for (int i = 1; i < n; i++) {
        int a = i * m, b = (n - i) * m;
        if (a >= k) ans=max(ans,b);
        if (b >= k) ans=max(ans,a);
    }
    for (int j = 1; j < m; j++) {
        int a = j * n, b = (m - j) * n;
        if (a>=k) ans=max(ans, b);
        if (b>=k) ans=max(ans, a);
    }
    return ans;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        cout<<solve(n, m, k)<<'\n';
    }
}
