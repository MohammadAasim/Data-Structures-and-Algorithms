#include <iostream>
using namespace std;
void findIndexes(int arr[], int x, int n, int index, int result[], int &count) {
    if (index == n) {
        return;
    }
    if (arr[index] == x) {
        result[count] = index;
        count++;
    }
    findIndexes(arr, x, n, index+1, result, count);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int result[n];
    int count = 0;
    findIndexes(arr, x, n, 0, result, count);
    for (int i = 0; i < count; i++) {
        cout << result[i] << " ";
    }
    return 0;
}
