#include<bits/stdc++.h>
using namespace std;
void countSort(int a[],int n,int mn,int mx){
    int range = mx-mn+1;
    int farr[range]={0};
    for(int i=0;i<n;i++){
        farr[a[i]-mn]++;
    }
    for(int i=1;i<range;i++)
        farr[i] += farr[i-1];
    int ans[n];
    for(int i=n-1;i>=0;i--){
        int val = a[i];
        int pos = farr[val-mn];
        int idx = pos-1;
        ans[idx] = val;
        farr[val-mn]--;
    }
    for(int i=0;i<n;i++)
        a[i] = ans[i];
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    int mn = *min_element(a,a+n);
    int mx = *max_element(a,a+n);
    
    countSort(a,n,mn,mx);
    
    for(int i=0;i<n;i++)
     cout<<a[i]<<endl;
}