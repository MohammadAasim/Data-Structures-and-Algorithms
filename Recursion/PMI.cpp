#include <bits/stdc++.h>
using namespace std;
/*
F(n) is true Vn
1.Base case: F(0) or F(1) is true
2.Induction Hypothesis: Assume that F(k) is true
3.Induction step:Using 2 prove that F(k+1) is true
*/
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}