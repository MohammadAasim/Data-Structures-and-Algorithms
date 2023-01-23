#include <bits/stdc++.h>
using namespace std;
int power(int a,int n){
    if(n==0){
        return 1;
    }
    return a*power(a,n-1);
}
// a^n -> (a^(n/2))^2 if n is even 
// a^n -> a(a^(n/2))^2 if n is odd 
int fast_power(int a,int n){
    if(n==0){
        return 1;
    }
    int smaller_ans=fast_power(a,n/2);
    smaller_ans *= smaller_ans;
    if(n&1){
        return smaller_ans*a;
    }
    return smaller_ans;
    
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    cout<<fast_power(a,n)<<endl;
    return 0;
}