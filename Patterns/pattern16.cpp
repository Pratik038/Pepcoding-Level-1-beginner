#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int sp=(n-1)*2-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<j<<"\t";
        for(int j=1;j<=sp;j++)
            cout<<"\t";
        int j;
        if(i!=n){
            j=i;
        }else{
            j = i-1;
        }
        for(;j>=1;j--)
            cout<<j<<"\t";
        cout<<endl;
        sp-=2;
    }
}