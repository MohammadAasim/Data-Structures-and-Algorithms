#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
        1         
      1 2 3       
    1 2 3 4 5     
  1 2 3 4 5 6 7   
1 2 3 4 5 6 7 8 9
*/