#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
//Problem
//Number to spelling
//2048 --> two zero four eight
char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void NumberToSpelling(int n){
    //base case;
    if(n==0){
        return;
    }
    //rec case first print the spellingg of (204)
    //reverse
    //==int digit = n%10;
    //cout<<words[digit]<<" ";==
    NumberToSpelling(n/10);
    int digit = n%10;
    cout<<words[digit]<<" ";
    return;
}
int main(){
    int n;
    cin>>n;
    NumberToSpelling(n);
    return 0;
}