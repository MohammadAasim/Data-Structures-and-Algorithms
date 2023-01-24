#include <bits/stdc++.h>
using namespace std;
int merge(int *a,int s,int e){
    int mid = s + (e-s)/2;
    int i=s;
    int j=mid+1;
    int k = s;
    int temp[10000];
    int cnt=0;
    while(i<=mid && j<=e){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            k++;
            i++;
        }else{
            temp[k++]=a[j++];
            cnt += mid-i+1;
        }
    }
    //fill the array if some elements are left in one of the array
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }
    //Copy all element back to array
    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }
    return cnt;
}
int inversion_count(int *arr,int s,int e){
    //Base case
    if(s>=e){
        return 0;
    }
    //Merge sort
    int mid = s + (e-s)/2;
    int x = inversion_count(arr,s,mid);
    int y = inversion_count(arr,mid+1,e);
    int z = merge(arr,s,e);
    return x+y+z;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<inversion_count(arr,0,n-1);
    return 0;
}