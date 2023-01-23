#include <bits/stdc++.h>
using namespace std;
int binarySearch(int n,int arr[],int key){
    int s = 0,e=n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans = binarySearch(n,arr,key);
    if(ans==-1){
        cout<<"Element not present"<<endl;
    }else{
        cout<<"Element is present at index : "<<ans<<endl;
    }
    return 0;
}