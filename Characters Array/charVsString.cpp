#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[]={'H','e','l','l','o'};// doesnt terminate null character thats whu not correct
    char s2[]="Hello";

    cout<<s1<<" "<<sizeof(s1)<<endl;//5 bytes
    cout<<s2<<" "<<sizeof(s2)<<endl; //6 bytes  '\0'=1
    return 0;
}