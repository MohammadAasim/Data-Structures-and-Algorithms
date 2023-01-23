#include <bits/stdc++.h>
using namespace std;
int linearSearch(int n,int arr[],int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
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
    int ans = linearSearch(n,arr,key);
    if(ans==-1){
        cout<<"Element not present"<<endl;
    }else{
        cout<<"Element is present at index : "<<ans<<endl;
    }
    return 0;
}