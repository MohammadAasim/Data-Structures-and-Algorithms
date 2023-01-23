//Recursion
/*Recursion in Computer Science is method where solution to a problem depends on solutions to smaller instances of the same problem*/
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    //Base Case
    if(n==0 || n==1){
        return 1;
    }
    //Recursive Case
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl; 
    return 0;
}