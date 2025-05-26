#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while (t--) {
        string s; cin>>s;
        int val=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
        int sqval=sqrt(val);
        if (sqval*sqval==val) {
            int a=0;
            int b=sqval;
            cout<<a<<" "<<b<<'\n';
        } 
        else cout<<-1<<'\n';
    }
    return 0;
}
