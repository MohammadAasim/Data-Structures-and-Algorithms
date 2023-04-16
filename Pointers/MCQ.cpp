#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int* xptr;
    xptr=&x;

    //x -> 10  address of x -> 20
    //xptr -> 20  address of xptr -> 40
    
    cout<<&x<<endl;//20
    cout<<xptr<<endl;//20

    cout<<*(&x)<<endl;//10->*(20)
    cout<<*(xptr)<<endl;//10->*(20)

    cout<<*(&xptr)<<endl;//20->*(40)
    cout<<&(*xptr)<<endl;//20->&(*20)

    return 0;
}