#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    //to avoid doubling we will use reserve function

    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Chaning Capacity: "<<v.capacity()<<endl;
    }
    cout<<"Capacity: "<<v.capacity()<<endl;
    for(int x:v){
        cout<<x<<' ';
    }
    return 0;
}
