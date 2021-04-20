#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int d; cin>>d;
    int pos = -1;
    for(int i=0;i<n;i++){
        if(a[i]==d){
            pos = i;
            break;
        }
    }
    cout<<pos;
}