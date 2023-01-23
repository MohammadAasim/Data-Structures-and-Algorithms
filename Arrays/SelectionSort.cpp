#include <bits/stdc++.h>
using namespace std;
void SelectionSort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
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
    SelectionSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}