#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int st=1,sp=n/2;
    for(int i=1;i<=n;i++){
        if(i<=n/2){
            for(int j=1;j<=n;j++){
                if(i==1 or i==j or i+j==n+1){
                    cout<<"*\t";
                }else
                    cout<<"\t";
            }
        }else{
            for(int j=1;j<=sp;j++)
                cout<<"\t";
            for(int j=1;j<=st;j++)
                cout<<"*\t";
            sp--;
            st+=2;
        }
        cout<<endl;
    }
}