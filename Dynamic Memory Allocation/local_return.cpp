#include <bits/stdc++.h>
using namespace std;
int* fun(){
    int *a=new int[5];
    a[0]=11;
    a[1]=2;
    cout<<a<<endl;
    cout<<a[0]<<endl;

    //we should never retutn a local variable

    return a;
}
int main()
{
    int* b=fun();
    cout<<b<<endl;
    cout<<b[0]<<endl;

    //let us clear the array a
    delete [] b;
    return 0;
}
