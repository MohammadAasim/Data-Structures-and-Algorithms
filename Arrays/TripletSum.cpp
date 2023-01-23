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
    int sum;
    cin>>sum;
    int i = 0;
    int j = n-1;
    int k = i+1;
    bool flag = false;
    while(i<j){
        int current_sum = arr[i]+arr[j]+arr[k];
        if(current_sum>sum){
            j--;
        }else if(current_sum<sum){
            i++;
        }else if(current_sum==sum){
            flag = true;
            i++;
            j--;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}