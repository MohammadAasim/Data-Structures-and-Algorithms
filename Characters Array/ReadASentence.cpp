#include <bits/stdc++.h>
using namespace std;
// read a sentence /paragraph or store in character
// cin.get() reads a single characters 
//put a loop to read character till you a get new lline character or '\n'
void readline(char a[],int maxLen,char delim='\n'){
    int i=0;
    char ch=cin.get();
    while(ch!=delim){
        a[i]=ch;
        i++;
        if(i==maxLen-1){
            break;
        }
        ch=cin.get();
    }
    a[i]='\0';
    return;

}
int main()
{
    char a[1000];
    //readline(a,1000,'$');
    //cin.getline(a,1000,'$);
    readline(a,1000);
    cout<<a<<endl;
    return 0;
}