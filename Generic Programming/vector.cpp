#include <bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> * vp = new vector<int>();
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}