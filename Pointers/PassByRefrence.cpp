#include <bits/stdc++.h>
using namespace std;
//Pass by vRefrence
void increament(int *aptr){
    *aptr = *aptr + 1;
    cout<<"Inside Function : "<<*aptr<<endl;
}
int main()
{
    int a = 10;
    increament(&a);
    cout<<"Inside main : "<<a<<endl;
    return 0;
}
