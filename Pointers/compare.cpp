#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int b=10;
    int* aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;

    // char b='A';
    // char* bptr=&b;
    // cout<<bptr<<endl;//Avoid

    //Re-assign another address to the variable
    aptr=&b;
    cout<<&b<<endl;
    cout<<aptr<<endl;
    return 0;
}