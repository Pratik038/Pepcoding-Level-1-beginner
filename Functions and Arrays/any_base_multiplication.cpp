#include<iostream>
using namespace std;

int getSum(int b,int n1,int n2){
    int c=0;
    int ans =0;
    int p=1;
    while(n1 or n2 or c){
        int d1 = n1%10;
        int d2 = n2%10;
        n1/=10;
        n2/=10;
        int d = d1+d2+c;
        c = d/b;
        d = d%b;
        ans += d*p;
        p*=10;
    }
    return ans;
}
int getSingleProduct(int b,int n1,int d2){
    int c=0;
    int p=1;
    int ans=0;
    while(n1 or c){
        int d1 = n1%10;
        n1/=10;
        int d = d1*d2+c;
        c = d/b;
        d = d%b;
        ans += d*p;
        p*=10;
    }
    return ans;
}
int getProduct(int b, int n1, int n2){
    // write your code here
    int ans = 0;
    int p=1;
    while(n2){
        int d2 = n2%10;
        n2/=10;
        int sprd = getSingleProduct(b,n1,d2);
        ans = getSum(b,ans,sprd*p);
        p*=10;
    }
    return ans;
}
int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getProduct(b,n1,n2)<<endl;
}