#include <bits/stdc++.h>
using namespace std;
//sorted row wise and col wise
vector <int> StaircaseSearch(vector<vector<int>> arr ,int key){
    int row=0;
    int col=arr[row].size()-1;
    while(row<arr.size() && col>=0){
        if(arr[row][col]==key){
            return {row,col};
        }else if(arr[row][col]<key){
            row++;
        }else if(arr[row][col]<key){
            col--;
        }
    }
    return {-1,-1};
}
int main()
{
    vector<vector<int> > arr = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 } };
    int key=12;
    vector<int> ans = StaircaseSearch(arr,key);
    cout << "Element found at index: [";
    for (int i = 0; i < ans.size(); i++) {
        if (i == ans.size() - 1)
            cout << ans[i];
        else
            cout << ans[i] << ", ";
    }
    cout << "]";
    return 0;
}