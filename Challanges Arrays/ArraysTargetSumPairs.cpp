#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int t;
    cin>>t;
    int l=0;
    int r=n-1;
    while(l<r){
        if(arr[l]+arr[r]==t){
            cout<<arr[l]<<" and "<<arr[r]<<endl;
            l++;
            r--;
        }else if(arr[l]+arr[r]<t){
            l++;
        }else{
            r--;
        }
    }
    return 0;
}