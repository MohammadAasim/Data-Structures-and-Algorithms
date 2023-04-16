#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
void bubble_sort(int a[],int n){
    //base case
    if(n==1){
        return;
    }
    
    //rec case
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bubble_sort(a,n-1);
}
void bubble_sort_recursive(int a[],int j,int n){
    //base case
    if(n==1){
        return;
    }
    if(j==n-1){
        return bubble_sort_recursive(a,0,n-1);
    }
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    bubble_sort_recursive(a,j+1,n);
    return;

}
int main(){
    int a[] = {5,4,3,2,1};
    int n = 5;
    bubble_sort_recursive(a,0,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}