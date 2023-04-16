#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Allocation + De-allocation
    int b[100];
    cout<<sizeof(b)<<endl;

    //Dynamic Allocation
    int n;
    cin>>n;
    int *a = new int[n];
    cout<<sizeof(a)<<endl;

    //No change
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }


    return 0;
}