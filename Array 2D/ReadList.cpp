#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Read a list of strings and we will store them in the a 2d character array
    char a[100][100];
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a[i],1000);
    }
    //Print out all string
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}