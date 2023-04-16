#include <bits/stdc++.h>
using namespace std;
vector<int> linearSearch(vector<vector<int>> arr, int target)
{
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            if (arr[i][j] == target){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main()
{
    int n;
    cin>>n;
    vector<vector <int>> arr(n);  
    for (int i = 0; i < n; i++) {  
        arr[i].resize(n);  
        for (int j = 0; j < n; j++) {  
            cin >> arr[i][j];  
        }  
    } 
    int target;
    cin>>target;
    vector<int> ans = linearSearch(arr, target);
    cout << "Element found at index: [" << ans[0] << "," <<ans[1] <<"]";
    return 0;
}