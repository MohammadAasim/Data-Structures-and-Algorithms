#include <bits/stdc++.h>
using namespace std;
using ll = int;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        ll i;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        ll c[n];
        for(i=0;i<n;i++){
            c[i] = a[i]  &  b[i];
        }
        int ans = c[0];
        for(int i=0;i<n;i++){
            ans = c[i] & ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}   