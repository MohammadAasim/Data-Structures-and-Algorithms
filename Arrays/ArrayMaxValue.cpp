#include <bits/stdc++.h>
using namespace std;
int max (long long int arr[], long long int n){
    long long max = INT_MIN;
    for(long long i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max(arr,n)<<endl;
    return 0;
}