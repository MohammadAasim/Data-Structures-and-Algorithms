#include <bits/stdc++.h>
using namespace std;
//Brute Force O(n)
bool isprime1(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
//Aother method O(n*sqrt(n))
bool isprime2(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    cout<<isprime2(n);
    return 0;
}