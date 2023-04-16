#include <bits/stdc++.h>
using namespace std;
void magical_park(char arr[100][100],int m,int n,int k,int s){
    //piyish canget out of the park
    bool success=true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char ch = arr[i][j];

            //check
            if(s<k){
                success=false;
                break;
            }
            if(ch=='*'){
                s += 5;
            }else if(ch=='.'){
                s -= 2;
            }else if (ch=='#'){
                break;
            }
            //we also loose 1 point we move right except for the last col
            if(j != n-1){
                s--;
            }
        }
    }
    if(success){
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }else{
        cout<<"NO";
    }
}
int main()
{
    int m,n,k,s;
    cin>>m>>n>>k>>s;

    //Take input
    char park[100][100];

    for(int i=0;i<m;i++){
        for(int j=0;i<n;j++){
            cin>>park[i][j];
        }
    }
    magical_park(park,m,n,k,s);
    return 0;
}