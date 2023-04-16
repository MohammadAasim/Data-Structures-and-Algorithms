#include <bits/stdc++.h>
using namespace std;
float SquareRoot(int n,int p){
    int s=0;
    int e=n;
    float ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(mid * mid == n){
            return mid;
        }
        if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    //Floating Point
    //Brute Force
    float inc = 0.1;
    for(int times=1;times<=p;times++){
        while(ans*ans<=n){
            ans = ans+inc;
        }
        ans=ans-inc;
        inc = inc/10;
    }
    return ans;

}
int main()
{
    //Square Root using Binary Search
    int n;
    cin>>n;

    cout<<SquareRoot(n,5)<<endl;
    return 0;
}