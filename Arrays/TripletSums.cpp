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
    int key;
    cin>>key;
    bool flag = false;
    for(int i=0;i<n-2;i++){
        for(int j=i;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==key){
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}