#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 or j==n)
                cout<<"*\t";
            else if(i>n/2 and i==j)
                cout<<"*\t";
            else if(i>n/2 and i+j==n+1)
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<endl;
    }
}