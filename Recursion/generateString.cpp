#include <bits/stdc++.h>
using namespace std;
//1->A,2->B->.......26->Z
//1234->ABCD
//(12)34->lCD
//1(23)4->AWD
void generate_strings(char *in,char *out,int i,int j){
    if(in[i]='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //rec case
    //one digit at time
    int digit = in[i]-'\0';
    char ch = digit + 'A' -1;
    out[j]=ch;
    generate_strings(in,out,i+1,j+1);

    //two digit at time
    if(in[i+1]!='\0'){
        int secondDigit = in[i+1]-'\0';
        int no = digit*10+secondDigit;
        if(no<=26){
            ch = no +'A'-1;
            out[j]=ch;
            generate_strings(in,out,i+2,j+1);
        }
    }
    return;
}
int main()
{
    char a[100];//digit
    cin>>a;

    char out[100];
    
    generate_strings(a,out,0,0);
    return 0;
}