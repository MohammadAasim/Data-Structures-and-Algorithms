#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
//Stack follow LIFO
//Implementation of stack Data Structure using vector
template<typename T>
//template<typename T,typename U>
class Stack{
private:    
    vector<T> v;
    //vector<U>v2; for diffrent data type
public:
    void push(T data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
            v.pop_back();
        }  
    }
    T top(){
        return v[v.size()-1];
    }    
};
int main(){
    // Stack<int>s;
    // for(int i=1;i<=5;i++){
    //     s.push(i*i);
    // }
    //Print the content of the stack by poping each elemnt
    
    //Stack for Character
    Stack<char>s;
    //Stack<char,int>s;
    for(int i=65;i<=70;i++){
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}