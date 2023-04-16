#include <bits/stdc++.h>
using namespace std;
void makeNonPalindrome(string s) {
    char tmp;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] != s[i+1]) {
            tmp = s[i];
            s[i] = s[i+1];
            s[i+1] = tmp;
        }
    }
    cout << s << '\n';
}
void solved(){
    string str;
    cin>>str;
    string s = "";
    int i = 0;
    while (i < str.length()){
        char c = str[i];
        s = s + c + c;
        i++;
    }
    if(s.length()==2){
        cout<<s<<endl;
    }else{
        makeNonPalindrome(s);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solved();
    }
    return 0;
}   