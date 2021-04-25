#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
		
		Memozisation
		------------
#include <iostream>
using namespace std;
int f[46];
int fib(int n){
    if(n<=1)
        return f[n] = n;
    if(f[n]!=0)
        return f[n];
    return f[n] = fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}