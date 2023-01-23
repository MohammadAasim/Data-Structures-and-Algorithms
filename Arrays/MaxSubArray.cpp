#include <bits/stdc++.h>
using namespace std;
//Number of Subarray = (n*(n+1))/2
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxs = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
                maxs = max(maxs,sum);
            }
        }
    }
    cout<<maxs<<endl;
    return 0;
}