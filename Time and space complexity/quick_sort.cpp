#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int pivot,int lo,int hi){
    cout<<"pivot -> "<<pivot<<endl;
    int i=lo,j=lo;
    while(i<=hi){
        if(a[i]>pivot)
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
void quickSort(int a[],int lo,int hi){
    if(lo > hi)
        return;
    int pivot = a[hi];
    int pi = partition(a,pivot,lo,hi);
    quickSort(a,lo,pi-1);
    quickSort(a,pi+1,hi);
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}