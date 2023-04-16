#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
// Given a wall of size of 4 X N and tiles of size(1,4) and (4,1).
// In how many ways you can buil the wall?
int ways(int n){
    if(n<=3){
        return 1;
    }
    return ways(n-1)+ways(n-4);
}
int main(){
    int n;
    cin>>n;
    cout<<ways(n);
    return 0;
}