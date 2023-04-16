#include <bits/stdc++.h>
using namespace std;
int main()
{   int m,n;
    cin>>m>>n;

    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int col=0;col<n;col++){
        if(col%2==0){
            //even top-down
            for(int row=0;row<m;row++){
                cout<<arr[row][col]<<" ";
            }
        }else{
            //odd bottom to top
            for(int row=m-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
    }
    return 0;
}