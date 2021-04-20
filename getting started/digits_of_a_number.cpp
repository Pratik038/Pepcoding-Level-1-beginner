#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int nod = 0;
    int temp = n;
    while(temp){
        nod++;
        temp/=10;
    }
    int div = pow(10,nod-1);
    temp = n;
    while(div){
        cout<<temp/div<<endl;
        temp = temp%div;
        div/=10;
    }
}
