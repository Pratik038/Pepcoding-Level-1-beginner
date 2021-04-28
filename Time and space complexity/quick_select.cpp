#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int pivot,int lo,int hi){
    cout<<"pivot -> "<<pivot<<endl;
    int i=lo,j=lo;
    while(i <= hi){
        if(a[i] > pivot)
            i++;
        else{
            cout<<"Swapping "<<a[i]<<" and "<<a[j]<<endl;
            swap(a[i],a[j]);
            i++;
            j++;
        }
    }
    cout<<"pivot index -> "<<j-1<<endl;
    return j-1;
}
int quickSelect(int a[],int lo,int hi,int k){
    int pivot = a[hi];
    int pi = partition(a,pivot,lo,hi);
    if(k < pi){
        return quickSelect(a,lo,pi-1,k);
    }else if(k > pi){
        return quickSelect(a,pi+1,hi,k);
    }else
        return a[pi];
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k; cin>>k;
    cout<<quickSelect(a,0,n-1,k-1);
}