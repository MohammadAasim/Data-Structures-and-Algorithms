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
    int sum=0;
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            sum += i;
        }
    }
    cout<<"Sum of Prime till "<<n<<" : "<<sum<<endl;
    return 0;
}