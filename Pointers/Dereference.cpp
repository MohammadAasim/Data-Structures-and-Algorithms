//Derefrence Operators (*)
//Multiplication -> 5*6
//Pointer -> int * ptr
//Derefrence ->

//&variavle -> address
//&address  -> variable

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int* xptr=&x;

    cout<<&x<<endl;
    cout<<xptr<<endl;
    cout<<&xptr<<endl;
    cout<<*(&xptr)<<endl;//address
    cout<<&(*xptr)<<endl;


    cout<<*xptr<<endl;//10
    cout<<*(&x)<<endl;//10
    
    cout<<*(xptr)+1<<endl;//1
    cout<<*(xptr+1)<<endl;//Next Address
    

    return 0;
}