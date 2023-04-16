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
    int key;
    cin>>key;
    int i = 0;
    int j = c - 1;
    while(i>=0 and i < r and j >= 0 and j < c){
        if (arr[i][j]==key){
            cout<<i<<j<<endl;
            break;
        }
        else if (arr[i][j]>key){
            j--;
        }else{
            i++;
        }
    }    
    return 0;
}