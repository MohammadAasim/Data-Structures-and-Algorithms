#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int n,int arr[]){
    for(int i=0;i<n;i++){
        int e = arr[i];
        //place the current element at right position in sorted part
        int j = i-1;
        while(j>=0 and arr[j]>e){
            arr[j+1]=arr[j];
            j = j-1;
        }
        arr[j+1]=e;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    InsertionSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}