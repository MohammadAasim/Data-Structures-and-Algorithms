#include <bits/stdc++.h>
using namespace std;
//given a sorted array Find pair of elements that sum to K(given)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    int i=0;
    int j= n-1;
    while(i<j){
        int current_sum = arr[i]+arr[j];
        if(current_sum>sum){
            j--;
        }else if(current_sum<sum){
            i++;
        }else if(current_sum==sum){
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j--;
        }
    }
    return 0;
}