#include <bits/stdc++.h>
using namespace std;
bool isValidExp(char *s){
    stack<char>stack;
    for(int i=0;s[i]!='\0';i++){
        char ch = s[i];
        if(ch=='('){
            stack.push(ch);
        }else if(ch==')'){
            if(stack.empty() or stack.top()!='('){
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}
int main()
{
    char s[50] = "((a+b)+(c-d=f))";
    if(isValidExp(s)){
        cout<<"YES"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}