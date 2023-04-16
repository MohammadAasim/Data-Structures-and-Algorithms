#include <bits/stdc++.h>
using namespace std;
int main()
{   
    cout<<"===Bitwise AND==="<<endl;
    cout<<"1 & 1  : "<<(1&1)<<endl;
    cout<<"1 & 0  : "<<(1&0)<<endl;
    cout<<"0 & 1  : "<<(0&1)<<endl;
    cout<<"0 & 0  : "<<(0&0)<<endl;

    int a,b;
    cin>>a>>b;
    cout<<a<<" & "<<b<<" : "<<(a&b)<<endl;
    return 0;
}