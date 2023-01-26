#include <bits/stdc++.h>
using namespace std;
/*{Subsequence/Subsets}Generation
Important cocept for many problem
----------------------------------
Given a string containing n characters find out the all subsets of that string
Sample I/O
----------
s="abc"
subset=["","a","b","c","ab","ac","bc","abc"]-->>abc then sunset 2^3*/
void generate_subsequences(char *in,char *out,int i,int j){
    //Base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //rec case
    //include the current char
    out[j]=in[i];
    generate_subsequences(in,out,i+1,j+1);
    //exclude the current char
    generate_subsequences(in,out,i+1,j);

}
int main()
{
    char input[]="abc";
    char output[10];
    generate_subsequences(input,output,0,0);
    return 0;
}