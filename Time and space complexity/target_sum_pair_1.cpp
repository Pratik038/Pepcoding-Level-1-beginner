#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int tar; cin>>tar;
    sort(a,a+n);
    
    int i=0,j=n-1;
    while(i < j){
        if(a[i]+a[j]==tar){
            cout<<a[i]<<", "<<a[j]<<endl;
            i++;j--;
        }
        else if(a[i]+a[j] < tar){
            i++;
        }else{
            j--;
        }
    }
}