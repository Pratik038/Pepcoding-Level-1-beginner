#include<bits/stdc++.h>
using namespace std;
void countSort(int a[],int exp,int n){
    
    int farr[10]={0};
    for(int i=0;i<n;i++){
        farr[(a[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++)
        farr[i] += farr[i-1];
    int ans[n];
    for(int i=n-1;i>=0;i--){
        int pos = farr[(a[i]/exp)%10]-1;
        ans[pos] = a[i];
        farr[(a[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++)
        a[i] = ans[i];
    cout<<"After sorting on "<<exp<<" place -> ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void radixSort(int a[],int n){
    int mx = *max_element(a,a+n);
    
    int exp = 1;
    while(exp <= mx){
        countSort(a,exp,n);
        exp = exp*10;
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    radixSort(a,n);
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}