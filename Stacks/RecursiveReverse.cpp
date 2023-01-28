#include <bits/stdc++.h>
using namespace std;
//Recursively Reverse Stack
void insertAtBottom(stack<int>&s,int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
    //rec case
    int data = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(data);
}
void reverseStack(stack<int>&s){
    //Base case
    if(s.empty()){
        return;
    }
    //pop out the top elemnt and insert it at the buttom of reverse smaaler stack
    int x = s.top();
    s.pop();
    //rec reverse the smaller stack
    reverseStack(s);
    insertAtBottom(s,x);
}
int main()
{
    stack<int>s;
    for(int i=1;i<=5;i++){
        s.push(i);
    }
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}