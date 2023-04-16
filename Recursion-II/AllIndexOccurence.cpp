#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int storeOcc(int *a,int i,int n,int key,int *out,int j){
    if(i==n){
        return j;
    }
    if(a[i]==key){
        out[j]=i;
        //increament j to accomodate current
        return storeOcc(a,i+1,n,key,out,j+1);
    }
    //remains unchange
    return storeOcc(a,i+1,n,key,out,j);
}

void allOcc(int *a,int i,int n,int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ";
    }
    allOcc(a,i+1,n,key);
}

int main(){
    int arr[]={1,2,3,7,4,5,6,7,10};
    int n = sizeof(arr)/sizeof(int);
    int key=7;
    allOcc(arr,0,n,key);
    cout<<endl;
    int output[100];
    int cnt = storeOcc(arr,0,n,key,output,0);
    cout<<"Count : "<<cnt<<endl;
    for(int k=0;k<cnt;k++){
        cout<<output[k]<<" ";
    }
    return 0;
}