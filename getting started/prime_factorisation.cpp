#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                cout<<i<<" ";
                n/=i;
            }
        }
    }
    if(n!=1)
        cout<<n;
}
