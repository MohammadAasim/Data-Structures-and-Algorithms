#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return true;
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
int main(){
    int n , m;
    cin>>n>>m;
    for(int i=n;i<m;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}