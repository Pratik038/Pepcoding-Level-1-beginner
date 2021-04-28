#include<bits/stdc++.h>
using namespace std;
void countSort(string a[],int div,int mod,int range,int n){
    int farr[range]={0};
    for(int i=0;i<n;i++){
        farr[stoi(a[i])/div%mod]++;
    }
    for(int i=1;i<range;i++)
        farr[i] += farr[i-1];
        
    string ans[n];
    for(int i=n-1;i>=0;i--){
        int pos = farr[stoi(a[i])/div%mod]-1;
        ans[pos] = a[i];
        farr[stoi(a[i])/div%mod]--;
    }
    for(int i=0;i<n;i++)
        a[i] = ans[i];
}
void sortDate(string a[],int n){
    
    countSort(a,1000000,100,32,n); // days
    countSort(a,10000,100,13,n); // months
    countSort(a,1,10000,2501,n); // year
}
int main(){
    int n; cin>>n;
    string a[n]; 
    for(int i=0;i<n;i++) cin>>a[i];
    
    sortDate(a,n);
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}