#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int firstOcc(int *a,int n,int key){
    if(n==0){
        return -1;
    }
    //rec case
    if(a[0]==key){
        return 0;
    }
    int i = firstOcc(a+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;
}
int linearSearch(int *a,int i,int n,int key){
    if(i==n){
        return -1;
    }
    //rec case
    if(a[i]==key){
        return i;
    }
    return linearSearch(a,i+1,n,key);
}
int main(){
    int arr[]={1,2,3,7,4,5,6,7,10};
    int n = sizeof(arr)/sizeof(int);
    int key=7;
    cout<<"Key Found at index : "<<firstOcc(arr,n,key)<<endl;
    cout<<"Key Found at index : "<<linearSearch(arr,0,n,key);
    return 0;
}