#include <bits/stdc++.h>
using namespace std;
bool solved(int n){
    int factor = 0;
    for(int i = 1;i < sqrt(n);i++){
        if(n%i == 0){
            factor += 2;
        }
    }
    if(factor == 4){
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,b;
        cin>>l>>b;
        int counter=0;
        for(int i=l;i<=b;i++){
            if(solved(i)){
                cout<<i<<" ";
                counter++;
            }
        }
        cout<<endl;
        cout<<counter<<endl;
    }
    return 0;
}   