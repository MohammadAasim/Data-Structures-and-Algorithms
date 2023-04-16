#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
// Replace 'Pi' with "3.14"
// xpighpi -->>x3.14ggh3.14

void replacePi(char a[],int i){
    //base case
    if(a[i]=='\0' and a[i+1]=='\0'){
        return;
    }
    //look for pi for current
    if(a[i]=='p' and a[i+1]=='i'){
        //shifting + replacement with 3.14
        int j = i+2;
        //take j to thhe end of array
        while(a[j]!='\0'){
            j++;
        }
        //shifting(right to left)
        while(j>=i+2){
            a[j+2]=a[j];
            j--;
        }
        //replacement  + recursive call for rem part
        a[i]='3';
        a[i+1]='.';
        a[i+2]='1';
        a[i+3]='4';
        replacePi(a,i+4);
    }else{
        //go to the next position
        replacePi(a,i+1);
    }
    return;
}
int main(){
    char a[1000];
    cin>>a;
    replacePi(a,0);
    cout<<a<<endl;
    return 0;
}