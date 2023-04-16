#include <bits/stdc++.h>
using namespace std;
#define R 100
#define C 100
void spiralprint(int arr[R][C],int m,int n){

    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
    int i,k=0,l=0;
    while(k<m && l<n){
        //First Row
        for(i=l;i<n;++i){
            cout<<arr[k][i]<<" ";
        }
        k++;
        //Last Column
        for(i=k;i<m;++i){
            cout<<arr[i][n-1]<<" ";
        }
        n--;
        //Last Row
        if(k<m){
            for(i=n-1;i>=l;--i){
                cout<<arr[m-1][i]<<" ";
            }
            m--;
        }
        //First Column
        if(l<n){
            for(i=m-1;i>=k;--i){
                cout<<arr[i][l]<<" ";
            }
            l++;
        }

    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    
    int arr[100][100];

    int val=1;

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=val;
            val=val+1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralprint(arr,m,n);
    return 0;
}