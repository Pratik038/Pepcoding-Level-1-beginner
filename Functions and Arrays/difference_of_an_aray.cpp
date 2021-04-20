#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1; cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++) cin>>a1[i];
    
    int n2; cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++) cin>>a2[i];
    
    int c = 0;
    int a3[n2];
    int k = n2-1;
    int i=n1-1,j=n2-1;
    while(k >=0){
        int d = 0;
        int d1 = i>=0 ? a1[i]:0;
        int d2 = a2[j];
        if(d2+c >= d1){
            d = d2+c-d1;
            c=0;
        }else{
            d = d2+10+c-d1;
            c=-1;
        }
        a3[k] = d;
        i--;j--;k--;
    }
    int idx=0;
    while(a3[idx]==0) idx++;
    for(int i=idx;i<n2;i++) cout<<a3[i]<<endl;
}