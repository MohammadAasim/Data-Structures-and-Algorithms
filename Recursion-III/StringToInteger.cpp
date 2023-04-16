#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
//"1234" -->> 1234
int stringToInteger(char *a,int n){
    if(n==0){
        return 0;
    }
    int digit = a[n-1]-'0';
    int small_ans = stringToInteger(a,n-1);
    return small_ans*10+digit;
}
int main(){
    char a[]="1234";
    int len = strlen(a);
    int x = stringToInteger(a,len);
    cout<<x<<endl;
    cout<<x+1<<endl;
    return 0;
}