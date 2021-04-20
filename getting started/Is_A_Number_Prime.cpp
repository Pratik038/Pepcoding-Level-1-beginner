#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<1)
        return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    while(t--){
        int x; cin>>x;
        if(isPrime(x)){
            cout<<"prime"<<endl;
        }else{
            cout<<"not prime"<<endl;
        }
    }
}