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
    int product=1;
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            product *= i;
        }
    }
    cout<<"Product of Prime till "<<n<<" : "<<product<<endl;
    return 0;
}