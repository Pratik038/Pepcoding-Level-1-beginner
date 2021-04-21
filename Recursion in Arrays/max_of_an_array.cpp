#include <iostream>
using namespace std;

int max(int arr[], int idx, int n){
    // write your code here
    if(idx==n)
        return 0;
    int m = max(arr,idx+1,n);
    if(arr[idx] > m)
        return arr[idx];
    return m;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
