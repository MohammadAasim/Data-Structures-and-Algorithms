//pointer
//pointer is the variable that store address of another variable
//Decleration
//Datatype* variable name
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    cout<<&x<<endl;

    //create pinter
    //int* ptr;//Decleration
   //ptr=&x;//Initilation
    int* ptr= &x;//Decleration and Initilation
    cout<<ptr<<endl;
    return 0;
}