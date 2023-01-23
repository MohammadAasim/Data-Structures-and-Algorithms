#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int i=0;
    int j=0;
    for(j=0;j<c;j++){
        if(j%2==0){
            for(i=0;i<r;i++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(i=r-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;
}
// input:
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// output:
// 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14,
