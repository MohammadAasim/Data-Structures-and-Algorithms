#include <bits/stdc++.h>
using namespace std;
//Divide->Sort->Merge
void merge(int *a,int s,int e){
    int mid = s+(e-s)/2;
    int i=s;
    int j=mid+1;
    int k = s;

    int temp[100];

    while(i<=mid && j<=e){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }
    for(int i=s;i<=e;i++){
        a[i] = temp[i];
    }
}
void MergeSort(int a[],int s,int e){
    //Base Case
    if(s>=e){
        return;
    }
    //Fllow 3 step
    //1.divide
    int mid = s +(e-s)/2;
    //Recursive the arrays -s.mid ans mid+1,e
    MergeSort(a,s,mid);
    MergeSort(a,mid+1,e);

    //Merge two part
    merge(a,s,e);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}