#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abcdaefgahi";
    int  cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}