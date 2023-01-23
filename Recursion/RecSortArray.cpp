#include <bits/stdc++.h>
using namespace std;
bool isSorted(int n,int arr[]){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool isSmallerSorted = isSorted(n-1,arr+1);
    return isSmallerSorted;
    // if(isSmallerSorted){
    //     return true;
    // }else{
    //     return false;
    // }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isSorted(n,arr)){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}