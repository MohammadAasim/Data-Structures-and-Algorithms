#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}