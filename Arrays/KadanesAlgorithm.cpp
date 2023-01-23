#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Kadane's Algorithm for maximum sub array
    int cs=0;
    int ms=0;
    for(int i=0;i<n;i++){
        cs = cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ms = max(ms,cs);
    }
    cout<<ms<<endl;
    return 0;
}