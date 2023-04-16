#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9};
    cout<<arr1;//gives default address

    cout<<endl;

    char arr2[]={'a','b','c','d','e','f','\0'};
    cout<<arr2;//give content unless find null or '\0'
    return 0;
}