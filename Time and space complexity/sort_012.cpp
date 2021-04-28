#include<bits/stdc++.h>
using namespace std;
void sort012(int a[],int n){
    int lo=0,mid=0,hi=n-1;
    while(mid <= hi){
        if(a[mid]==1)
            mid++;
        else if(a[mid]==0){
            cout<<"Swapping index "<<mid<<" and index "<<lo<<endl;
            swap(a[lo],a[mid]);
            lo++;
            mid++;
        }else{
            cout<<"Swapping index "<<mid<<" and index "<<hi<<endl;
            swap(a[mid],a[hi]);
            hi--;
        }
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    sort012(a,n);
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}