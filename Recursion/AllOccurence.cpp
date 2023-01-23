#include <bits/stdc++.h>
using namespace std;
void allOcc(int *a,int i ,int n,int key){
    //Base case
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ";
    }
    allOcc(a,i+1,n,key);
}
int storeOcc(int *a,int i,int n,int key,int *out,int j){
    //base case
    if(i==n){
        return j;
    }
    if(a[i]==key){
        out[j]=i;
        //icrement of j
        return storeOcc(a,i+1,n,key,out,j+1);
    }
    return storeOcc(a,i+1,n,key,out,j);
    
}

int main()
{
    int arr[]={1,2,3,7,4,7,6,7,10};
    int key=7;
    int n = sizeof(arr)/sizeof(int);
    //allOcc(arr,0,n,key);
    int output[100];
    int cnt = storeOcc(arr,0,n,key,output,0);
    cout<<cnt<<endl;
    for(int k=0;k<cnt;k++){
        cout<<output[k]<<" ";
    }
    return 0;
}