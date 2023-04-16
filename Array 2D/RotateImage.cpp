#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
// Given a 2D array of size NXN . Rotate the array 90 degree anti-clockwise
void rotate(int arr[1000][1000],int n){
    //reverse each row
    for(int row=0;row<n;row++){
        int start_col=0;
        int end_col=n-1;
        while(start_col<end_col){
            swap(arr[row][start_col],arr[row][end_col]);
            start_col++;
            end_col--;
        }
    }
    // to take transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}
void rotate_stl(int arr[1000][1000],int n){
    //same things using STL reverse(start_container,end_container) method
    for(int i=0;i<n;i++){
        reverse(arr[i],arr[i]+n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}
void display(int arr[1000][1000],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    rotate_stl(arr,n);
    display(arr,n);
    return 0;
}