#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int lastOcc(int *a,int n,int key){
    //base cse
    if(n==0){
        return -1;
    }
    int i = lastOcc(a+1,n-1,key);
    if(i==-1){
        if(a[0]==key){
            return 0;
        }else{
            return -1;
        }
    }return i+1;
}
int main(){
    int arr[]={1,2,3,7,4,5,6,7,10};
    int n = sizeof(arr)/sizeof(int);
    int key=7;
    cout<<"Key Found at index : "<<lastOcc(arr,n,key)<<endl;
    return 0;
}