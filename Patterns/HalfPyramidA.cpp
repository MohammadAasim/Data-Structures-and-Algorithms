#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int alphabet = 65;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<(char)(alphabet+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
A 
A B 
A B C 
A B C D 
A B C D E
*/