#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
void decreasing(int n){
    if(n==0){
        return;
    }
    cout<<n<<' ';
    return decreasing(n-1);
}
void increasing(int n){
    if(n==0){
        return;
    }
    increasing(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;

    decreasing(n);
    cout<<endl;
    increasing(n);
    return 0;
}