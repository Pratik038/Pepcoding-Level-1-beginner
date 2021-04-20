#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n/2+1 or j==n/2+1)
                cout<<"*\t";
            else if(i==1 and j<=n/2)
                cout<<"*\t";
            else if(i==n and j>n/2)
                cout<<"*\t";
            else if(j==1 and i>n/2)
                cout<<"*\t";
            else if(j==n and i<=n/2)
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<endl;
    }
}