#include <bits/stdc++.h>
using namespace std;
//Write A recursive function to perform binary search
int RecursiveBinary(int arr[],int start,int end,int key){
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            RecursiveBinary(arr,mid+1,end,key);
        }else{
            RecursiveBinary(arr,start,mid-1,key);
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
    int ans = RecursiveBinary(arr,0,n-1,key);
    if(ans==-1){
        cout<<"Element not present"<<endl;
    }else{
        cout<<"Element present at index "<<ans<<endl;
    }
    return 0;
}