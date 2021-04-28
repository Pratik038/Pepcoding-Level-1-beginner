#include<bits/stdc++.h>
using namespace std;
int pivot(int a[],int n){
    int low=0,high=n-1;
    while(low < high){
        int mid = (low+high)/2;
        if(a[mid] < a[high])
            high = mid;
        else{
            low = mid+1;
        }
    }
    return a[high];
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<pivot(a,n);
}