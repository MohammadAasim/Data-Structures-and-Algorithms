#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int maxi = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            int c = (a[i]&b[i]);
            maxi = max(maxi,c);
        }
        cout<<maxi;
    }
    return 0;
}   