#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<(n/2);i++){
        for(int j=0;j<n;j++){
            swap(matrix[i][j],matrix[n-1-i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}