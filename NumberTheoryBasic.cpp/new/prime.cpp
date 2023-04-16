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
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is Prime Number "<<endl;
    }else{
        cout<<n<<" is not Prime Number "<<endl;
    }
    return 0;
}