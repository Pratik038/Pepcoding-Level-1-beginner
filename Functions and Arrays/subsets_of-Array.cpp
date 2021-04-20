#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<pow(2,n);i++){
        string set = "";
        int c = n;
        int temp = i;
        while(c-- > 0){
            if(temp%2==0){
                set = "-\t" + set;
            }else{
                set = to_string(a[c]) + "\t" + set;
            }
            temp/=2;
        }
        cout<<set<<endl;
    }
}