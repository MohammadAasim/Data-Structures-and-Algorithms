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
    int largest = INT_MIN;
    int smallest = INT_MAX;
    if(arr[0]>arr[1]){
        largest = arr[0];
        smallest = arr[1];
    }else{
        largest = arr[1];
        smallest = arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<largest<<endl;
    cout<<smallest<<endl;
    return 0;
}
