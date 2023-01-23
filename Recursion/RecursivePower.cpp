#include <bits/stdc++.h>
using namespace std;
//Write a Recursive Function to perform power(a,n)
int Power(int x,int n){
    if(n==0){
        return 1;
    }
    return x*Power(x,n-1);
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<Power(x,n)<<endl;
    return 0;
}