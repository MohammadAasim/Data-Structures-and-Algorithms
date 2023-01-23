#include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(int arr[], int n){
    int cs=0;
    int ms=0;
    for(int i=0;i<n;i++){
        cs = cs + arr[i];
        if(cs<0){
            cs=0;
        }
        ms = max(ms,cs);
    }
    return ms;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubArraySum(arr,n)<<endl;
    return 0;
}