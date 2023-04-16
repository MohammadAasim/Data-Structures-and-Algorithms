#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int n,int arr[],int key){
    int s=0;
    int e=n-1;
    int mid;
    while(s<=e){

        mid=s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            s=mid+1;
        }else{
            e=mid-1;
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
    int ans=BinarySearch(n,arr,key);
    if(ans==-1){
        cout<<"Not Present"<<endl;
    }else{
        cout<<"Present At index "<<ans<<endl;
    }
    return 0;
}