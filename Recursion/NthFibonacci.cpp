#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    //Base Case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //Recursive Case
    int smalleroutput1 = fibo(n-1);
    int smalleroutput2 = fibo(n-2);
    return smalleroutput1+smalleroutput2;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}