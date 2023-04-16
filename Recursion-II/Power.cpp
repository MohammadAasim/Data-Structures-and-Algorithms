#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
//Compute a^n
int power(int a,int n){
    if(n==0){
        return 1;
    }
    return a * power(a,n-1);
}
int fast_power(int a,int n){
    if(n==0){
        return 1;
    }
    int smaller_ans = fast_power(a,n/2);
    smaller_ans *= smaller_ans;
    if(n&1){
        return smaller_ans*a;
    }
    return smaller_ans;
}
int main(){
    int a,n;
    cout<<"a : ";
    cin>>a;
    cout<<"n : ";
    cin>>n;
    cout<<"a^n : "<<power(a,n)<<endl;
    
    cout<<"Fast Power for a^n : "<<fast_power(a,n)<<endl;
    return 0;
}