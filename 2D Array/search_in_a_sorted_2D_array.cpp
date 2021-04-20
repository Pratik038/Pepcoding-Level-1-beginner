#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    int x; cin>>x;
    int i=0,j=n-1;
    int row=-1,col=-1;
    while(i>=0 and j>=0){
        if(a[i][j]==x){
            row=i;
            col=j;
            break;
        }else if(a[i][j] < x){
            i++;
        }else
            j--;
    }
    if(j<0 or i==n){
        cout<<"Not Found";
    }else
        cout<<row<<endl<<col;
}