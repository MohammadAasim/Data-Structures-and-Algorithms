#include <bits/stdc++.h>
using namespace std;
int Search(int arr[],int n,int key){
    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(int);
    int key = 6;
    cout<<Search(arr,n,key)<<endl;
    return 0;
}