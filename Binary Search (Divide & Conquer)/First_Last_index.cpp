#include <bits/stdc++.h>
using namespace std;
int First_Occurance(int n,int arr[],int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }else if(arr[mid]>key) {
            e=mid-1;
        }else{
            s=mid+1;
        }
        return ans;
    }
}   

int Last_Occurance(int n,int arr[],int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }else if(arr[mid]>key) {
            e=mid-1;
        }else{
            s=mid+1;
        }
        return ans;
    }
} 


int main()
{
    int arr[]={1,2,5,8,8,8,8,8,10,15,20};
    int n = sizeof(arr)/sizeof(int);

    int key=8;
    //cin>>key;

    cout<<First_Occurance(n,arr,key)<<endl;
    cout<<Last_Occurance(n,arr,key)<<endl;
    return 0;
}