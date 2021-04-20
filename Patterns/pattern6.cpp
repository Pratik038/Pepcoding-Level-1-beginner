#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int st=(n+1)/2,sp=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=st;j++)
            cout<<"*\t";
        for(int j=1;j<=sp;j++)
            cout<<"\t";
        for(int j=1;j<=st;j++)
            cout<<"*\t";
        cout<<endl;
        if(i<=n/2){
            st--;
            sp+=2;
        }else{
            st++;
            sp-=2;
        }
    }
}