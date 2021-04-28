#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            cout<<"Comparing "<<a[j]<<" and "<<a[j-1]<<endl;
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
                cout<<"Swapping "<<a[j]<<" and "<<a[j-1]<<endl;
            }else
                break;
        }
    }
    for(int i=0;i<n;i++)
     cout<<a[i]<<endl;
}
