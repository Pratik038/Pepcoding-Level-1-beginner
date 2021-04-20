#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,m1; cin>>n1>>m1;
    int a[n1][m1];
    for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
            cin>>a[i][j];
            
    int n2,m2; cin>>n2>>m2;
    int b[n2][m2];
    for(int i=0;i<n2;i++)
        for(int j=0;j<m2;j++)
            cin>>b[i][j];
    if(m1!=n2){
        cout<<"Invalid input";
    }else{
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                int ans = 0;
                for(int k=0;k<n2;k++){
                    ans += a[i][k]*b[k][j];
                }
                cout<<ans<<" ";
            }
            cout<<endl;
        }
    }
}