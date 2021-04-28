#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=0;i<n-1;i++){
        int mn = a[i];
        int pos = i;
        for(int j=i+1;j<n;j++){
            cout<<"Comparing "<<a[j]<<" and "<<mn<<endl;
            if(a[j]<mn){
                mn = a[j];
                pos = j;
            }
        }
        cout<<"Swapping "<<a[i]<<" and "<<mn<<endl;
        swap(a[i],a[pos]);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}