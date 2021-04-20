#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int n1=num1,n2=num2;
    while(n1 % n2 != 0){
        int rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    int gcd = n2;
    int lcm = (num1*num2)/gcd;
    cout<<gcd<<endl<<lcm;
}