#include <iostream>
using namespace std;
//problem - Unique Number 2N+1
int main()
{
    int n;
    cin>>n;
    int no;
    int ans=0;
    //Bitwise XOR operator to solve
    //Helped to not any storage
    for(int i=0;i<n;i++){
        cin>>no;
        ans=ans^no;
    }
    cout<<ans<<endl;
    return 0;
}