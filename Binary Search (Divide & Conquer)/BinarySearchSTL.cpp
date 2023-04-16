#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,40,40,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    int key=40;
    //cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"Element Present in Array";
    }else{
        cout<<"Element Not Present in Array";
    }
    cout<<endl;

    auto lb = lower_bound(arr,arr+n,40);
    cout<<"Lower Bound 40 is "<<lb-arr<<endl;

    auto ub = upper_bound(arr,arr+n,40);
    cout<<"Upper Bound 40 is "<<ub-arr<<endl;

    cout<<"Frequency/Occurence of 40 "<<ub-lb<<endl;
    return 0;
}