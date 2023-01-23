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
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int sum_lower=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            sum_lower += arr[i][j];
        }
    }
    int sum_upper=0;
    for(int i=0;i<r;i++){
        for(int j=c-1;j>=i;j--){
            sum_upper += arr[i][j];
        }
    }
    cout<<sum_lower<<" "<<sum_upper<<endl;
    return 0;
}