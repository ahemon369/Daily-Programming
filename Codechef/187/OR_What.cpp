#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int n,x; cin>>n>>x;
        vector<int> pos(n+1,0);
        vector<bool> ans(n + 1, false);
        for (int i=1;i<=n;i++) {
            int v=x^i;
            if (v>=1 && v<=n && !ans[v] && ((v|i)==x)) {pos[i]=v; ans[v]=true;}
        }
        int flag=1;
        for (int i=1;i<=n;i++) {
            if (pos[i]==0) {
                while (ans[flag]) flag++;
                pos[i]=flag;
                ans[flag]=true;
            }
        }
        for (int i=1;i<=n;i++) cout << pos[i] << " ";
        cout<<"\n";
    }
    return 0;
}
