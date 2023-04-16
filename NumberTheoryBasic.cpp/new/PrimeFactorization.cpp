#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
void print_prime_factors(int N){
    for (int i = 2; i * i <= N; i++) {
        if (N%i == 0){
            cout << i << " ";
            while (N%i == 0) 
            N /= i;
        }
    }
    if (N > 1)
    cout << N << " ";
    cout << "\n";
}
int main(){
    int n;
    cin>>n;
    print_prime_factors(n);
    return 0;
}