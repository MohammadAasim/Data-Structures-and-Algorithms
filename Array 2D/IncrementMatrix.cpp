#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    
    int arr[row][col];

    int val=1;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=val;
            val=val+1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}