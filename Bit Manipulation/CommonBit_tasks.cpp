#include <iostream>
using namespace std;
bool isOdd(int n){
    return (n & 1);
}
//find ith bit n
int getBit(int n,int i){
    int mask=(1<<i);
    int bit = (n&mask)>0 ? 1:0;
    return bit;
}
int setBit(int n ,int i){
    int mask =(1<<i);
    int ans  = n|mask;
    return ans;
}         
void clearBit(int &n,int i){
    int mask = ~(1<<i);
    n = n&mask;
}
void updateBit(int &n,int i,int v){
    
}
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    clearBit(n,i);
    cout<<n<<endl;
    if(isOdd(n)){
        cout<<"ODD"<<endl;
    }else{
        cout<<"EVEN"<<endl;
    }
    cout<<"getBit "<<getBit(n,i)<<endl;
    cout<<"setBit "<<setBit(n,i)<<endl;

    return 0;
}