#include<bits/stdc++.h>
using namespace std;
void printTargetSum(int a[],int idx,string set,int sos,int tar,int n){
    if(sos > tar)
        return;
    if(idx == n){
        if(sos == tar)
            cout<<set<<"."<<endl;
        return;
    }
    
    printTargetSum(a,idx+1,set + to_string(a[idx])+", ",sos+a[idx],tar,n);
    printTargetSum(a,idx+1,set,sos,tar,n);
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int tar; cin>>tar;
    printTargetSum(a,0,"",0,tar,n);
}