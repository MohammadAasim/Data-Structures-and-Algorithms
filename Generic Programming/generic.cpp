#include <bits/stdc++.h>
using namespace std;
template<typename T>
int Search(T arr[],int n,T key){
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

    float brr[] = {1.2,2.3,3.4,4.5,5.6};
    float key2 = 4.5;
    cout<<Search(brr,5,key2)<<endl;

    return 0;
}