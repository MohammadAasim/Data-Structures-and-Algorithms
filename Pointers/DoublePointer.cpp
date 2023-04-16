#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    int *xptr;
    xptr=&x;
    cout<<xptr<<endl;

    int **xxptr = &xptr;
    cout<<xxptr<<endl;
    return 0;
}
