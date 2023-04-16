#include <iostream>

using namespace std;



int main(){

int test_cases;
cin>>test_cases;
for(int i=0;i<test_cases;i++){
int length;
cin>>length;
int a[length];
int b[length];
for(int i=0;i<length;i++){
cin>>a[i];
}

for(int i=0;i<length;i++){
cin>>b[i];
}

int c[length];

for(int i=0;i<length;i++){
c[i] = a[i] & b[i];
}
int andd = c[0];
for(int i=0;i<length;i++){
andd = c[i] & andd;
}
cout<<andd<<endl;

}

}