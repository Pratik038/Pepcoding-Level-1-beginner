#include<bits/stdc++.h>
using namespace std;
void sort01(int a[],int n){
    int i=0,j=0;
    while(i < n){
        if(a[i]==1)
            i++;
        else{
            cout<<"Swapping index "<<i<<" and index "<<j<<endl;
            swap(a[i],a[j]);
            i++;j++;
        }
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    sort01(a,n);
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}