#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    //write your code here
    int nod = 0;
    int temp = n;
    while(temp){
        nod++;
        temp/=10;
    }
    
    k = k%nod;
    if(k<0)
        k = k+nod;
   int di = pow(10,k);
   int rem = n%di;
   int q = n/di;
   int rnum =rem*pow(10,nod-k)+q;
   cout<<rnum;
}