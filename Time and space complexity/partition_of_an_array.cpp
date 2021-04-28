#include<bits/stdc++.h>
using namespace std;
void partition(int a[],int n,int pivot){
    int i=0,j=0;
    while(i < n){
        if(a[i]>pivot)
            i++;
        else{
            cout<<"Swapping "<<a[i]<<" and "<<a[j]<<endl;
            swap(a[i],a[j]);
            i++;j++;
        }
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int pivot; cin>>pivot;
    partition(a,n,pivot);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}