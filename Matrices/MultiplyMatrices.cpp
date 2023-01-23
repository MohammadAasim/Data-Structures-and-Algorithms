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
//Life is not about achieving Things. Its about process
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int matrix1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>matrix1[i][j];
        }
    }
    int r2,c2;
    cin>>r2>>c2;
    int matrix2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>matrix2[i][j];
        }
    }
    int ans[r1][c2];
    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<r1;k++){
                    ans[i][j] += matrix1[i][k]*matrix2[j][k];
                }
            }
        }
    }else{
        cout<<"Multiplication not possible"<<endl; 
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
//solution is not correct