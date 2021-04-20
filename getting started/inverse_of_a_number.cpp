#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int inv = 0;
    int i=1;
    while(n){
        inv = inv + (i++)*pow(10,n%10-1);
        n/=10;
    }
    cout<<inv;
}