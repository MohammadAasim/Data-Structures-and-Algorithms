#include <bits/stdc++.h>
using namespace std;
void BubbleSortRecursive(int arr[],int n){
    //Base Case
    if(n==1){
        return;
    }
    //Rec Case
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    //Sort the first n-1 element
    BubbleSortRecursive(arr,n-1);
    
}
void BubbleSortRecursives(int a[],int j,int n){
    //base case
    if(n==1){
        return;
    }
    if(j==n-1){
        //sinle PASS of current array has been done
        return BubbleSortRecursives(a,0,n-1);
    }
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    BubbleSortRecursives(a,j+1,n);
    return;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSortRecursives(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}