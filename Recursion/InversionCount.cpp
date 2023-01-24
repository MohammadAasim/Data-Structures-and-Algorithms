#include <bits/stdc++.h>
using namespace std;
//Inversion Count
//TV->O(n^2)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j] && i<j){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                cnt++;
            }
        }
    }
    cout<<"Number of pair : "<<cnt<<endl;
    return 0;
}