#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int fibonacci(int n){
    if(n==0 or n==1){
        return n;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<' ';
    }
    return 0;
}