#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a , b;
        cin>>a>>b;
        int count=0;
        for(int i=a;i<=b;i++){
            if(isPrime(i)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}