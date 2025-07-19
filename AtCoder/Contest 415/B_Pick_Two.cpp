#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    int cnt=0;
    for (int i=0;i<s.size();i++) {
        if (s[i]=='#') {
            cnt++;
            cout<<i+1;
            if (cnt%2==0) cout<<'\n';
            else cout<<',';
        }
    }
    return 0;
}
