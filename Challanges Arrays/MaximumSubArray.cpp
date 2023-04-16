#include <iostream>
#include<climits>
using namespace std;
int maximumSubArray(int arr[],int n){

    int maximum = INT_MIN,sum=0;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        if(maximum < sum)
            maximum = sum;
        if(sum < 0)
            sum = 0;
    }
    return maximum;
}
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max = maximumSubArray(arr,n);
        cout<<max<<endl;
    }
    return 0;
}