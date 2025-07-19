#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x,flag =0;; cin>>n;
    int arr[100];
    for (int i=0;i<n;i++) cin>>arr[i];
    cin>>x;
    for (int i=0;i<n;i++) if (arr[i]==x) flag=1;
    cout<<(flag?"Yes\n":"No\n");
    return 0;
}
