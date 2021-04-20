#include<iostream>
using namespace std;

int getDifference(int b, int n1, int n2){
    // write your code here
    int carry = 0;
    int ans = 0;
    int p=1;
    while(n2){
        int d1 = n1%10;
        int d2 = n2%10;
        n2/=10;
        n1/=10;
        int d=0;
        d2 = d2 + carry;
        if(d2>=d1){
            d = d2-d1;
            carry=0;
        }else{
            carry=-1;
            d = d2+b-d1;
        }
        ans += d*p;
        p*=10;
    }
    cout<<ans;
    return 0;
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    getDifference(b,n1,n2);
}