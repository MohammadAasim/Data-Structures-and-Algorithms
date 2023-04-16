#include <bits/stdc++.h>
using namespace std;
//Pass by value
void increament(int a){
    a=a+1;
    cout<<"Inside Function : "<<a<<endl;
}
int main()
{
    int a = 10;
    increament(a);
    cout<<"Inside main : "<<a<<endl;
    return 0;
}
