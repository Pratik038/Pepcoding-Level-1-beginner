#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
    // write your code here
    int carry=0;
    int ans = 0;
    int p=1;
    while(n1 or n2 or carry){
        int d1 = n1%10;
        int d2 = n2%10;
        n1/=10;
        n2/=10;
        
        int d = d1+d2+carry;
        int rem = d%b;
        carry = d/b;
        ans += rem*p;
        p*=10;
    }
    return ans;
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}