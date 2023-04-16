#include <bits/stdc++.h>
using namespace std;
// Recursion in computer science is a method where solution to problem
// depends on solution to smaller intances of the same problem 
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}