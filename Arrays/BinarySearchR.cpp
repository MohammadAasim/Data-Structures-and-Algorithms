#include <bits/stdc++.h>
using namespace std;
int binarySearch(int n,int arr[],int start,int end,int key){
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            return binarySearch(n,arr,mid+1,end,key);
        }else{
            return binarySearch(n,arr,start,mid-1,key);
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
    int ans = binarySearch(n,arr,0,n-1,key);
    if(ans==-1){
        cout<<"Element not present"<<endl;
    }else{
        cout<<"Element is present at index : "<<ans<<endl;
    }
    return 0;
}