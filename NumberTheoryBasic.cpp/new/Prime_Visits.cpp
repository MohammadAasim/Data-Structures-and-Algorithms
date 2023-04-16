#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void prime_sieve(int *p){
    //first marks all odd no is prime
    for(int i=3;i<=1000000;i+=2){
        p[i]=1;
    }
    //Sieve
    for(ll i=3;i<=1000000;i+=2){
        //if the current number not marked(it is prime)
        if(p[i]==1){
            //marks all the multiple of i as not prime
            for(ll j = i*i ; j <= 1000000; j = j + i){
                p[j]=0;
            }
        }
    }
    //special acses
    p[2]=1;
    p[1]=p[0]=0;
} 
int main(){

    int p[1000005]={0};
    prime_sieve(p);

    int csum[1000005]={0};
    //precompute the primes upto and index i
    for(int i=1;i<=1000000;i++){
        csum[i]=csum[i-1]+p[i];
    }
    int n;
    cin>>n;
    while(n--){
        int a ,b;
        cin>>a>>b;
        cout<<csum[b]-csum[a-1]<<endl;
    }
    
    return 0;
}