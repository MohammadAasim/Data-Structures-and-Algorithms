#include <bits/stdc++.h>
using namespace std;
void matrixSearch(int **arr,int r,int c,int key){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==key){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
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
    int key;
    cin>>key;
    matrixSearch(arr,r,c,key);
    return 0;
}