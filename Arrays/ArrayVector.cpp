#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
    }
    for(auto x : v){
        cout<<x<<" ";
    }
    return 0;
}