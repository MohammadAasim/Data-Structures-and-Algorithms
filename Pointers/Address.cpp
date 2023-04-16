#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    cout<<&x<<endl;

    float y=10.5;
    cout<<&y<<endl;

    char ch='A';
    cout<<&ch<<endl;
    // output A
    //It doent work for character variable

    //Explicit Typecasting from char* to void*
    cout<<(void*)&ch<<endl;
    return 0;
}
//Hexa Decimal
//1 2 3 4 5 6 7 8 9 A B C D E F