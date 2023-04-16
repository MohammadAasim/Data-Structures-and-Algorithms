#include <bits/stdc++.h>
using namespace std;
int matrixSearch(int n,int m,int arr[100][100],int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return -1;
}
int main()
{
    int n,m;
    cin>>n,m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cin>>key;
    int ans = matrixSearch(n,m,arr,key);
    if(ans==-1){
        cout<<"Element Not Present in Matrix";
    }else{
        cout<<"Element Present in Matrix";
    }
    return 0;
}